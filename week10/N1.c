#include <stdio.h>
#include <string.h>

int main() {
    char input[80]; // 최대 길이 80인 문자열을 저장할 배열

    // 사용자로부터 문자열 입력 받기
    
    fgets(input, sizeof(input), stdin);

    // 개행 문자 제거 (fgets는 개행 문자를 포함하여 읽어오므로 제거해줍니다.)
    input[strcspn(input, "\n")] = '\0';

    // 문자열을 역순으로 출력
    
    for (int i = strlen(input) - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    return 0;
}
