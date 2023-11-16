#include <stdio.h>
#include <ctype.h>

int main() {
    char input[81]; // 최대 길이 80인 문자열을 저장할 배열
    int alphabetCount[26] = {0}; // 알파벳 개수를 저장할 배열

    // 사용자로부터 문자열 입력 받기
    fgets(input, sizeof(input), stdin);

    // 개행 문자 제거 (fgets는 개행 문자를 포함하여 읽어오므로 제거)
    input[strcspn(input, "\n")] = '\0';

    // 입력된 문자열에서 알파벳 개수 계산
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            char lowercaseChar = tolower(input[i]); // 대/소문자 구분 없이 계산
            alphabetCount[lowercaseChar - 'a']++;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            printf("%c : %d\n", 'A' + i, alphabetCount[i]); // 대문자로 출력 수정
        }
    }

    return 0;
}
