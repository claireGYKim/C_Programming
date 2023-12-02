#include <stdio.h>

int main() {
    char inputString[100];

    // 사용자로부터 문자열 입력 받기
    fgets(inputString, sizeof(inputString), stdin);

    // 대문자는 소문자로, 소문자는 대문자로 변환
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] >= 'a' && inputString[i] <= 'z') {
            // 소문자인 경우 대문자로 변환
            inputString[i] = inputString[i] - 'a' + 'A';
        } else if (inputString[i] >= 'A' && inputString[i] <= 'Z') {
            // 대문자인 경우 소문자로 변환
            inputString[i] = inputString[i] - 'A' + 'a';
        }

        // ASCII 코드로 변환하여 출력
        printf("%d", inputString[i]);
    }

    return 0;
}

