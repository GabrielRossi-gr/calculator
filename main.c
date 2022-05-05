#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define PI 3.14
int main()
{
    //calculadora
//printf(PI);
    printf("CALCULADORA \n");
float n1,n2,resultado,funcao,x;
int operacao;
printf("digite um numero:");
scanf("%f",&n1);
printf("digite uma operacao matematica \n 1:soma, 2:subtracao, 3:multiplicacao, 4:divisao, 5:potenciacao  \n digite ->");
scanf("%d",&operacao);
printf("digite o outro numero:");
scanf("%f",&n2);

if(operacao == 1){
    resultado=(n1+n2);
}
if(operacao == 2){
    resultado=(n1-n2);
}
if(operacao == 3){
    resultado=(n1*n2);
}
if(operacao == 4){
    resultado=(n1/n2);
}
if(operacao == 5){
    //raiz quadrada === resultado=(sqrt(n1));
    //potenciacao
    resultado=(pow(n1,n2));
}

//if(operacao == 6){
//    resultado=(x*n2=n1);
//}
//if(x > 1){
//    printf("\n\n raiz: ->%0.2f\n\n",x);
//}

printf("\n\n RESULTADO ->%0.2f\n\n\n\n",resultado);
printf("-----------------------------------------");
scanf("%f",&x);
//   futuro comando para fechar calculadora apertando qualquer tecla;
//if(x != 1247123874235423){
//    exit;
//}
}
