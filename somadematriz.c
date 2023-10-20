#include <stdio.h>

int main(){
int matrizA[3][2], matrizB[3][2],matrizC[3][2];
int i, j;
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf("digite os valoresA:");
         scanf("%d",&matrizA[i][j]);
        }
        
    }
    
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf("digite os valoresB:");
         scanf("%d",&matrizB[i][j]);
        }
    }
    printf("\n");
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
            matrizC[i][j]= matrizA[i][j]+matrizB[i][j];
        }
    }printf("soma da matriz eh:\n");
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("|%d|",matrizC[i][j] );
        }
        printf("\n");
    }
    return 0;
}
