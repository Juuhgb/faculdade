#include <stdio.h>
int main(){

float valorDiariaSemDesconto, valorDiariaComDesconto, TotalComDobro, SemDesconto;

printf("VALOR DA DIARIA SEM DESCONTO: R$ ");
scanf("%f", &valorDiariaSemDesconto);

valorDiariaComDesconto = valorDiariaSemDesconto - valorDiariaSemDesconto * 0.30;

TotalComDobro = 2 * 45 * 0.35 * valorDiariaComDesconto;
SemDesconto = 45 * 0.35 * valorDiariaSemDesconto;

printf("VALOR SEM DESCONTO: R$%.2f\n", valorDiariaComDesconto);
printf("VALOR COM O DOBRO DE OCUPACAO: R$%.2f\n", TotalComDobro);
printf("VALOR SEM DESCONTO DA DIARIA: R$%.2f\n", SemDesconto);

return 0;

}