#include <stdio.h>

// strlen() 함수와 동일한 기능을 하는 my_strlen() 함수 정의
size_t my_strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char input_string[100]; // 입력받을 문자열을 저장할 배열

    // 사용자로부터 문자열 입력 받기
    // printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    // 개행 문자 제거
    input_string[strcspn(input_string, "\n")] = '\0';

    // my_strlen() 함수를 사용하여 문자열의 길이 출력
    printf("Length : %lu\n", my_strlen(input_string));

    return 0;
}
