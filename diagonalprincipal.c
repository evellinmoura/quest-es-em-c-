#include <stdio.h>
int main (){
    int matriz [3][3], i, l, c;
    for (l=0; l<3;l++){
        for (c=0;c<3;c++){
            printf("digite os numeros");
            scanf("%d",& matriz[l][c]);
        }
        printf("\n");
    }
    for (l=0;l<3;l++){
        for(c=0;c<3;c++){
            if(l==c){
                printf("%d",matriz[l][c]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}