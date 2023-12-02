#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[50];       // 이름
    int age;             // 나이
    long long student_num; // 학번
    char major[50];       // 전공
} information;

int main(void) {
    information in;
    
    // 정보 초기화
    strcpy(in.name, "고길동");
    in.age = 20;
    in.student_num = 20345205;
    strcpy(in.major, "컴퓨터공학전공");

    // 정보 출력
    printf("%s\n%d\n%lld\n%s ", in.name, in.age, in.student_num, in.major);
    
    return 0;
}

