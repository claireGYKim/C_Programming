#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentInfo {
    char* univ;
    int sNo;
    char* major;
    char name[15];
};

int isEqualStudent(struct studentInfo a, struct studentInfo b){
    if(strcmp(a.univ, b.univ) == 0 && strcmp(a.major, b.major) == 0
       && strcmp(a.name, b.name) == 0 && a.sNo == b.sNo)
        return 1;
    else
        return 0;
}

int isStudentNumberInvalid(struct studentInfo student[], int size, int sNo) {
    for (int i = 0; i < size; i++) {
        if (student[i].sNo == sNo) {
            return 1; // 이미 존재하는 학번
        }
    }
    return 0; // 존재하지 않는 학번
}

int main(void){
    struct studentInfo student[4] = {{"DCU", 21000001, "ComputerSW", "Kim"},
                                     {"DCU", 21000002, "AIBigdata", "Lee"},
                                     {"DCU", 21000003, "SWConvergence", "Park"}
    };

    int i;
    char temp[80];
    struct studentInfo *ptr = &student[3];
    printf("Input your name : ");
    scanf("%s", temp);
    strcpy(student[3].name, temp);

    do {
        printf("Input your student number : ");
        scanf("%d", &(ptr->sNo));

        if (isStudentNumberInvalid(student, 3, ptr->sNo)) {
            printf("Wrong student number!!\n");
        }
    } while (isStudentNumberInvalid(student, 3, ptr->sNo));





    printf("Input your major : ");
    scanf("%s", temp);
    ptr->major = malloc(strlen(temp) + 1); // +1 for null terminator
    strcpy(ptr->major, temp);

    printf("Input your university : ");
    scanf("%s", temp);
    ptr->univ = malloc(strlen(temp) + 1); // +1 for null terminator
    strcpy(ptr->univ, temp);



    for(i=0; i<4; i++){
        printf("%s [%d, %s, %s]\n", student[i].univ, student[i].sNo, student[i].major, student[i].name);
    }

    if(isEqualStudent(student[0], student[3]))
        printf("student 0 and student 3 are the same.\n");
    else
        printf("student 0 and student 3 are not same.\n");

    return 0;
}

