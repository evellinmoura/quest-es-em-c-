#include <stdio.h>

int main(){
int quant_agua[7],i,aguaconsumida[7],soma;
 for(i=0;i<8;i++){
     printf("digite o valores de agua coletadano dia %d:",i+1);
     scanf("%d",&quant_agua[i]);
    }
    for (i=0;i<8;i++){
     printf("digite o valores de agua CONSUMIDAno dia %d:",i+1);
     scanf("%d",&aguaconsumida[i]);
    }
soma=0;
    for(i=0;i<8;i++){
        soma=(soma+quant_agua[i])-aguaconsumida[i];
        if(soma==0){
        printf("Aviso! no dia%d, a agua vai acabar\n",i+1);
        }else {
            printf("Parabens! tera agua o sufiente no dia %d!\n",i + 1);
        }
    }
    return 0;
}
