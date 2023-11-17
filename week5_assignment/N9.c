#include <stdio.h>
int main() {
	int input; 
	int day; 
	int Yoil = 0, today = 0; 
	int i, j, k; 
	scanf("%d", &input); 

	for (i = 1; i < input; i++) 
		today += 365 + (((i % 100 != 0 && i % 4 == 0) || (i % 400 == 0)) ? 1 : 0);
	for (i = 1; i <= 12; i++) { // 1 ~ 12월
		Yoil = today; 
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) 
			day = 31;
		if (i == 2) 
			day = ((input % 100 != 0 && input % 4 == 0) || (input % 400 == 0)) ? 29 : 28;
		if (i == 4 || i == 6 || i == 9 || i == 11) // 4, 6, 9, 11은 30일
			day = 30;
		for (j = 1; j < i; j++) { // 매월의 1일의 요일을 구해야하니 그 전달까지의 일수를 세아린다.
			if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
				Yoil += 31;
			else if (j == 2)
				Yoil += ((input % 100 != 0 && input % 4 == 0) || (input % 400 == 0) ? 29 : 28);
			else if (j == 4 || j == 6 || j == 9 || j == 11)
				Yoil += 30;
		}
		k = (Yoil + 1) % 7; // 7주기로 묶어준다.
		// 해당 문제의 출력은 일 월 화 수 목 금 토 이기때문에 7 1 2 3 4 5 6 순으로 등록 mod7을 하면 0 1 2 
3 4 5 6으로 정리
		printf("%d월\n", i);
		printf("SUN\tMON\tTUS\tWED\tTHU\tFRI\tSAT\n");
		printf("===================================================\n");
		for (j = 0; j < k; j++) // 만약 1월 1일이 목요일이면 그 앞의 공백을 채워주는 반복문
			printf("\t");
		for (j = 1; j <= day; j++, k++) { // 달력 출력
			printf("%d\t", j);
			if (k % 7 == 6) // 6 요일. 즉, 토요일일때 줄넘김
				printf("\n");
		}
		printf("\n\n");
	}
}
