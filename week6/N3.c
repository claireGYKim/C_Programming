#include <stdio.h>
#include <string.h>
#include <ctype.h> // ctype 헤더 파일 포함

int main() {
    char input[101]; // 최대 100개 문자 저장을 위한 배열
    char sorted[101]; // 정렬된 문자를 저장할 배열
    int length = 0; // 입력받은 문자열의 길이




    while (length < 100) {
        char ch;
        scanf(" %c", &ch);


        if (islower(ch)) {
            input[length] = ch;
            length++;
        } else {
            break;
        }
    }


    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (input[i] > input[j]) {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }


    for (int i = 0; i < length; i++) {
        printf("%c\n", input[i]);
    }
    printf("\n");

    return 0;
}
