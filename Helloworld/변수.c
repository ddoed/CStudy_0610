// ๊ธฐ๋ณธ ?๊ฒฝ ?ค์ 
// main?จ์ ?์๊ณ??์ ?๋ฆฌ???ต์ฌ ๋ณ?์ด?? ๋ฐ๋??1๊ฐ๋ง ์กด์ฌ?ด์ผ?๋ค. ?ด๋ฆ ??๋ฌธ??๋ฐ๋??์ง์ผ์ผ??
// main ?ด๋ฆ???จ์๊ฐ 2?ด์ ์กด์ฌ?๋ฉด ?๋ฌ ๋ฐ์
// ?์ค?์ผ - ?ฐํด๋ฆ?- ?ค์  - ๋น๋?์ ?์ธ ๊ธฐ๋ฅ?ผ๋ก ?ํ???์ผ๋ง?๋น๋ ๊ฐ??


// ?์ฑ??  : ?๋๋น?
// ?์ฑ?ผ์ : 2024-06-12
// ?์ต๋ชฉํ : ๋ณ??

// ์ปดํจ???ํ ๋ช๋ น???๊ณ , ๊ท?๋ช๋ น???ด์ฉ????ฅํ๊ธ??ํด??๋ณ???ฌ์ฉ

// ? ์ธ : ๋ณ?๋? ?ด๋ป๊ฒ?์ปดํจ?ฐํ???๋ ค์ฃผ๋?? 
// ์ปดํ?ผ๋ฌ?๊ฒ ๋ณ?๊? ๋ฌด์????ฅํ๊ณ? ?ผ๋ง????ฅํด???๋์ง ?๋ ค์ฃผ๋ ๊ฒ?
// Int   : ๋ฌด์???์), 
// Float : ๋ฌด์???ค์), 

// ? ์ธ ๋ฐฉ๋ฒ
// ?ฐ์ด???ํ ?์ฑ(int, float) ๋ณ???ด๋ฆ(a)
// ?์ int a;

// ? ๋น(assignMent)
// ? ์ธ??๋ณ?์ ?ฐ์ด?ฐ๋? ?ฃ๋ ๊ฒ?
// a?ด๋ฆ??๋ณ?์ ?์ ?ํ???ฐ์ด?ฐ๋? ?ฃ์ ???๊ฒ ?๋ค.
// int a = 10;

// ์ด๊ธฐ??Initialize)
// ๋ณ?์ ์ฒ์?ผ๋ก ?ฐ์ด?ฐ๋? ? ๋น?๋ ๊ฒ?

#include <stdio.h>

int main()
{
	int a = 3 + 4;
	a = 4 + 7;
	printf("%d \n", a);
	float b = 3.2f + 4.7f;
	printf("%f \n", b);

	// ๋ฌธ์  1-1
	int width = 12;
	int height = 10;
	int lenght = 8;


	// ๋ฌธ์  1-2 
	int volume = width * height * lenght;


	// ๋ฌธ์  1-3
	volume = (volume + 164) / 165;

	float volume_f = width * height * lenght;
	volume_f = volume_f / 165;

	printf("๋ฌธ์  3???ต์? %d \n", volume);
	printf("๋ฌธ์  3-???ต์? %f \n", volume_f);


	//๋ฌธ์  2
	float Celsius = 1;
	float Fahrenheit = 9.0f / 5.0f * Celsius + 32;

	printf("๋ฌธ์  2???ต์? %.8f \n", Fahrenheit);

	return 0;

}