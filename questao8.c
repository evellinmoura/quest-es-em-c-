#include<stdio.h>

int main(){
int num[3][3],l,c;
int i=0;
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf("digite o numero:");
            scanf("%d",&num[l][c]);
        }
    }
    for (l=0;l<3;l++){
        for(c=0;c<3;c++){
            if(num[l][c]%2==0){
                num[l][c]=1;
            }else{
                num[l][c]=-1;
            }
        }
    }
    for (l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf ("|%d|",num[l][c]);
           
        }
        printf("\n");
    }
    
    return 0;
}