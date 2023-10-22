#include <stdio.h>
#include <ctype.h>

int main() {
    int charCount[128] = {0};

    char inputString[1000];

    printf("문자열을 입력하세요: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        char c = inputString[i];
        if (isalnum(c)) {
            // 알파벳 및 숫자인 경우, 대소문자 구분 없이 아스키코드에 해당하는 위치에 개수 추가
            charCount[toupper(c)]++;
        } else if (c >= 0 && c <= 127 && ispunct(c)) {
            // 구두점인 경우, 아스키코드에 해당하는 위치에 개수 추가
            charCount[c]++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (charCount[i] > 0) {
            printf("%c : %d\n", i, charCount[i]);
        }
    }

    return 0;
}
