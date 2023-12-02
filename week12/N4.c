#include <stdio.h>

int mystrcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char str1[100], str2[100];

    // 사용자로부터 두 문자열 입력 받기

    scanf("%s %s", str1, str2);

    // mystrcmp() 함수로 두 문자열 비교
    int result = mystrcmp(str1, str2);

    // 비교 결과 출력
    printf("%d\n", result);

    return 0;
}

