#include <stdio.h>
#include <string.h>

int main() {
    char string1[31];  // 첫 번째 문자열을 저장할 배열
    char string2[31];  // 두 번째 문자열을 저장할 배열
    char string3[31];  // 세 번째 문자열을 저장할 배열
    char combinedString[91];  // 세 문자열을 합친 결과를 저장할 배열

    // 사용자로부터 문자열 입력 받기
    
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';  // 개행 문자 제거

    
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';  // 개행 문자 제거

    
    fgets(string3, sizeof(string3), stdin);
    string3[strcspn(string3, "\n")] = '\0';  // 개행 문자 제거

    // 세 문자열을 하나로 합치기
    strcpy(combinedString, string1);
    strcat(combinedString, string2);
    strcat(combinedString, string3);

    // 합친 문자열의 길이와 결과 출력
    printf("Merged string length : %zu\n", strlen(combinedString));
    printf("Merged string : %s\n", combinedString);
    

    return 0;
}
