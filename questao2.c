#include <stdio.h>

float notas[15];
float nota[15];
int quant_notas;
int i=0;
int media;
int medianov=10;
int main(){

    for (i=0; i<15;i++){
        printf("Digite as notas dos alunos:");
        scanf("%f",& notas[i]);
    }
    for (i=0; i<15;i++){
        printf("nota%d:\n%2.f\n",i,notas[i]); 
        quant_notas++;
    }
    media= quant_notas/notas[i];
    if (media>7){
        medianov=media;
    }
    printf("a media eh, %2.d",medianov);
    return 0;
}