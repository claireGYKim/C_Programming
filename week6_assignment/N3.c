#include <stdio.h>

int main()
{
    int i,j,k;
    int mat1[2][3] = {{9,2,7},{4,5,6}};
    int mat2[3][2] = {{2,13},{5,10},{2,11}};
    int result[2][2] ={0};
    for(i=0; i<2; i++) {
        for(j=0;j<2;j++) {
            for(int k = 0; k<3; k++){
        result[i][j] +=mat1[i][k] * mat2[k][j];
    }
    }
}
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%2d",result[i][j]);
            if(j==1)printf("\n");
            else printf(" ");
        }
    }
    return 0;
    }
