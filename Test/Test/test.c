#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // 대소문자 판별 함수
#include <string.h>

void main(void) {
	//입력 값을 문자열 포인터에 저장하기
	char input_ary[10]; // 10개 크기만큼 동적 메모리 할당 / 입력받은 문자를 임시 저장


	printf("대,소문자 구분없이 알파벳을 입력하세요 : ");
	scanf("%s", input_ary); // 표준 입력을 받아서 배열 형태의 문자열에 저장
	printf("입력받은 값 : %s\n\n", input_ary);

	int len = strlen(input_ary);

	printf("<============ 대소문자 구별 ============>\n");

	// 소문자 구분
	char lower_ary[10];	// 소문자 저장 배열
	char upper_ary[10];	// 대문자 저장 배열
	int n = 0;  //배열에 삽입하기 위한 인덱스 값

	for (int i = 0; i < len; ++i)
	{
		if (islower(input_ary[i]))
		{
			printf("%c \n", input_ary[i]);
			lower_ary[n] = input_ary[i];
			n++;
		}

	}


	printf("\n");
	// 대문자 구분

	for (int i = 0; i<len; i++)
	{
		if (isupper(input_ary[i]))
		{
			printf("%c \n", input_ary[i]);
			upper_ary[n] = input_ary[i];
			n++;
		}
		
	}
	
\


	//printf("<============= 삽입 정렬 =============>\n");

	//// 삽입 정렬 수행
	//insertion_sort(lower_ary, upper_ary);

	//// 정렬 결과 출력
	//int i;
	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", input_ary[i]);
	//}

	return 0;
}


//============= 삽입 함수 =============

// 삽입 정렬
//void insertion_sort(lower_ary, upper_ary) {
//	int i, j, keyl, keyU;
//
//	// 인텍스 0은 이미 정렬된 것으로 볼 수 있다.
//	for (i = 1; i < 10; i++) {
//		keyl = lower_ary; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사
//
//		// 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
//		// j 값은 음수가 아니어야 되고
//		// key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동
//		for (j = i - 1; j >= 0 && lower_ary > keyl; j--) {
//			lower_ary = lower_ary; // 레코드의 오른쪽으로 이동
//		}
//
//		lower_ary = keyl;
//	}
//
//	for (i = 1; i < 10; i++) {
//		keyU = upper_ary;
//
//		for (j = i - 1; j >= 0 && upper_ary > keyU; j--) {
//			upper_ary = upper_ary;
//		}
//
//		upper_ary = keyU;
//	}
//}