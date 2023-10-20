#include<stdio.h>
#include<string.h>
struct cardapio{
    char nom_comida[100];
    float preco;  
};

int main(){
    struct cardapio comida [3];
    int i;
    for(i=0;i<3;i++){
        printf("Digite o nome da comida:\n");
        fgets(comida[i].nom_comida, sizeof(comida[i].nom_comida), stdin);
        printf("Digite o preco:\n");
        scanf("%f",&comida[i].preco);
        while (getchar() != '\n');
    }
    for (i=0;i<3;i++){
        printf("->a comida: %s possui o preco: %2.freais\n",comida[i].nom_comida,comida[i].preco);
        
    }
    return 0;
}