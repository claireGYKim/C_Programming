#include <stdio.h>

// strchr() 함수와 동일한 기능을 하는 my_strchr() 함수 정의
const char* my_strchr(const char* str, int character) {
    while (*str != '\0') {
        if (*str == character) {
            return str; // 문자를 찾으면 해당 위치의 포인터를 반환
        }
        str++;
    }
    return NULL; // 문자를 찾지 못한 경우 NULL 반환
}

int main() {
    char input_string[100]; // 입력받을 문자열을 저장할 배열
    char target_character; // 찾을 문자

    // 사용자로부터 문자열 입력 받기
    
    fgets(input_string, sizeof(input_string), stdin);
    
    // 개행 문자 제거
    input_string[strcspn(input_string, "\n")] = '\0';

    // 사용자로부터 찾을 문자 입력 받기
    
    scanf(" %c", &target_character); // 공백을 포함하여 문자 입력

    // my_strchr() 함수를 사용하여 문자열에서 문자 찾기
    const char* result = input_string;
    while ((result = my_strchr(result, target_character)) != NULL) {
        printf("%c ", *result);
        result++; // 다음 위치부터 계속 찾기
    }

    printf("\n");

    return 0;
}
