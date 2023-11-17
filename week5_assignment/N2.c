#include <stdio.h>

int main() {
    int height;
    
  
    scanf("%d", &height);
    printf("\n");
    
    // ① 왼쪽 아래가 직각인 삼각형
    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // ② 왼쪽 위가 직각인 삼각형
    
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // ③ 오른쪽 아래가 직각인 삼각형
    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // ④ 오른쪽 위가 직각인 삼각형
   
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    // ⑤ 피라미드 모양의 삼각형
  
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
