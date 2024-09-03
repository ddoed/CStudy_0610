#include <stdio.h>
#include <stdbool.h>
#include "Console.h"
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define filename "C:\\Users\\Administrator\\Desktop\\CStudy_0610\\ToyProject01\\a.txt"

#define ROWS 20	 // 가로
#define COLS 20	 // 세로   Collums(기둥)

typedef struct PlayerData
{
	char name[30];
	int score;
}PlayerData;

int beforeX = -1;
int beforeY = -1;
int playerX = 1;
int playerY = 1;
int timer = 0;
time_t startTime, endTime;

PlayerData player[10];
int totalCount = 0;

char** maze;


void subDFS(char** maze, bool** visited, int y, int x, int size) {
	int dx[4] = { -2, 2, 0, 0 }, dy[4] = { 0, 0, -2, 2 };
	int wx[4] = { -1, 1, 0, 0 }, wy[4] = { 0, 0, -1, 1 };
	int num = rand() % 24;
	int arr[24][4] = {
		{0, 1, 2, 3}, {0, 1, 3, 2}, {0, 2, 1, 3}, {0, 2, 3, 1}, {0, 3, 1, 2}, {0, 3, 2, 1},
		{1, 0, 2, 3}, {1, 0, 3, 2}, {1, 2, 0, 3}, {1, 2, 3, 0}, {1, 3, 0, 2}, {1, 3, 2, 0},
		{2, 1, 0, 3}, {2, 1, 3, 0}, {2, 0, 1, 3}, {2, 0, 3, 1}, {2, 3, 1, 0}, {2, 3, 0, 1},
		{3, 1, 2, 0}, {3, 1, 0, 2}, {3, 2, 1, 0}, {3, 2, 0, 1}, {3, 0, 1, 2}, {3, 0, 2, 1}
	};

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[arr[num][i]];
		int ny = y + dy[arr[num][i]];
		if (ny >= 1 && ny < size - 1 && nx >= 1 && nx < size - 1 && !visited[ny][nx]) {
			maze[y + wy[arr[num][i]]][x + wx[arr[num][i]]] = ' ';
			maze[ny][nx] = ' ';
			visited[ny][nx] = true;
			subDFS(maze, visited, ny, nx, size);
		}
	}
}

void DFS(char** maze, bool** visited, int size) {
	int startX = 1, startY = 1;
	maze[startY][startX] = ' ';
	visited[startY][startX] = true;
	subDFS(maze, visited, startY, startX, size);
}

// Function to create a maze with given size
char** setMaze(int size) {
	srand(time(NULL));
	char** maze = (char**)malloc(sizeof(char*) * size);
	bool** visited = (bool**)malloc(sizeof(bool*) * size);

	for (int i = 0; i < size; i++) {
		maze[i] = (char*)malloc(sizeof(char) * size);
		visited[i] = (bool*)malloc(sizeof(bool) * size);
		for (int j = 0; j < size; j++) {
			maze[i][j] = '#'; // Wall
			visited[i][j] = false;
		}
	}

	DFS(maze, visited, size);

	maze[size - 2][size - 2] = ' '; // End point
	return maze;
}

void printMaze(char** maze, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
            if (maze[i][j] == '#')
                printf("■");
            else
                printf("  ");
		}
		printf("\n");
	}
}




void InputProcess(int* x, int* y, int size) {
    beforeX = *x; beforeY = *y;
    if (GetAsyncKeyState(VK_LEFT) & 8001) {
        if (maze[*y][*x/2 -1] != '#') {
            *x -= 2; 
        }
    }
    else if (GetAsyncKeyState(VK_RIGHT) & 8001) {
        if (maze[*y][*x/2 + 1] != '#') {
            *x += 2;
        }
    }
    else if (GetAsyncKeyState(VK_UP) & 8001) {
        if (maze[*y - 1][*x/2] != '#') {
            *y -= 1;
        }
    }
    else if (GetAsyncKeyState(VK_DOWN) & 8001) {
        if (maze[*y + 1][*x/2] != '#') {
            *y += 1;
        }
    }
}

void GoToTargetPos(int a, int b, char* s) {
    GotoXY(beforeX, beforeY);
    printf("  ");
    GotoXY(a, b);
    printf("%s", s);
}

void SavePlayerData(PlayerData* player, int totalCount) {
    FILE* fp = fopen(filename, "w");

    if (fp == NULL) {
        perror("파일 연결 실패!\n");
    }

    for (int i = 0; i < totalCount; ++i) {
        fprintf(fp, "%s %d\n", player[i].name, player[i].score);
    }

    fclose(fp);
}

void LoadPlayerData(PlayerData* player, int* totalCount) {
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        perror("파일 읽기 실패!\n");
        return;
    }

    int count = 0;

    while (fscanf_s(fp, "%s %d", player[count].name, 30, &player[count].score) != EOF) {
        count++;
        if (count >= 10) break;
    }

    *totalCount = count;

    fclose(fp);
}

void StartMenu(void) {
    for (int i = 3; i < 35; ++i) {
        GotoXY(i, 2);
        printf("■");
    }
    for (int i = 3; i < 35; ++i) {
        GotoXY(i, 27);
        printf("■");
    }
    for (int j = 2; j < 27; ++j) {
        GotoXY(3, j);
        printf("■");
        GotoXY(35, j);
        printf("■");
    }

    GotoXY(14, 9);
    printf("미로 탈출하기");
    GotoXY(14, 12);
    printf("1. 시작하기");
    GotoXY(14, 13);
    printf("2. 기록보기");
    GotoXY(14, 14);
    printf("3. 종료");
    GotoXY(14, 16);
}

void GamePlay(void) {
    Clear();
    int mazeSize = 21; // Define maze size
    maze = setMaze(mazeSize);
    playerX = 2;
    playerY = 1;
    SetConsoleSize(42, 25);
    printMaze(maze, mazeSize);
    GotoXY(38, 19);
    printf("탈출");
    
    
    while (true) {
        time(&startTime);
        GotoXY(0, mazeSize);
        printf("방향 이동 : ← ↑ ↓ →");
        printf("\n시간 : %d 초", timer);
        GoToTargetPos(playerX, playerY, "♤");
        InputProcess(&playerX, &playerY, mazeSize);

        if (playerY == 19 && playerX == 38) {
            Clear();
            break;
        }

        Sleep(100);
        time(&endTime);
        timer += difftime(endTime, startTime);
    }

    Clear();

    GotoXY(3, 18);
    printf("미로 탈출 완료! 경과 시간: %d 초\n", timer);
}


int main() {
    
    LoadPlayerData(player, &totalCount);
    SetTitle("미로 탈출하기");
    SetConsoleSize(40, 30);
    SetConsoleCursorVisibility(0);

    StartMenu();

    char playerId[30];
    GotoXY(12, 17);
    printf("Id 입력 : ");
    scanf_s("%s", &playerId, 30);

    GotoXY(10, 18);
    printf("숫자를 선택하세요 : ");
    int num;
    scanf_s("%d", &num);

    while (true) {
        if (num == 1) {
            Clear();
            GamePlay();
            break;
        }
        if (num == 2) {
            Clear();
            for (int i = 0; i < 10; i++) {
                printf("%s %d\n", player[i].name, (player[i].score));
            }
            printf("\n게임을 시작하려면 1번\n");
            int backnum;
            scanf_s("%d", &backnum);
            if (backnum == 1) {
                Clear();
                GamePlay();
                break;
            }
        }
        if (num == 3) {
            break;
        }
    }

    strcpy_s(player[totalCount].name, 30, playerId);
    player[totalCount].score = timer;
    totalCount++;

    SavePlayerData(player, totalCount);

    if (num != 3) {
        int num1;
        printf("\n숫자를 입력해서 종료\n");
        scanf_s("%d", &num1);
    }
}