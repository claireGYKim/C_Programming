#include <stdio.h>
#include <string.h>

// 문자열을 역순으로 변환하여 반환하는 함수
char* reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        // 문자열의 앞뒤를 교환
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    return str;
}

int main() {
    char input[80]; // 최대 길이 80인 문자열을 저장할 배열

    // 사용자로부터 문자열 입력 받기
    
    fgets(input, sizeof(input), stdin);

    // 개행 문자 제거 (fgets는 개행 문자를 포함하여 읽어오므로 제거)
    input[strcspn(input, "\n")] = '\0';

    // 문자열을 역순으로 변환하여 출력
    char* reversedString = reverseString(input);
    printf("%s\n", reversedString);

    return 0;
}
