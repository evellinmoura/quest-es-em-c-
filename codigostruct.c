#include<stdio.h>
struct cadastro {
    int num_aluno;
    float nota1, nota2, nota3;
    float media;
};

int main(){
    struct cadastro aluno[10];
    int i;
 for(i=0;i<10;i++){
    printf("digite o numero do aluno:");
    scanf("%d",&aluno[i].num_aluno);
    printf("Digite a primeira nota:\n");
    scanf("%f",&aluno[i].nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&aluno[i].nota2);
    printf("Digite a seguda nota:\n");
    scanf("%f",&aluno[i].nota3);
    aluno[i].media=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3.0;
    printf( "media do aluno:%d eh:%f\n",aluno[i].num_aluno,aluno[i].media);
 }
 return 0;
}