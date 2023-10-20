#include <stdio.h>

int main(){
    int notas[10];
    int soma=0;
    float med;
    int qt=0;
    for(int i=0; i<10; i++){
        scanf("%d", &notas[i]);
    }
    for(int i=0; i<10; i++){
        printf("%d ", notas[i]);
        if(notas[i]>4){
            soma+=notas[i];
            qt++;
        }
    }
    printf("\n");
    med = soma/qt;
    printf("%f\n", med);
}