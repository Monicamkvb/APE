include <stdio.h>

int main(){

    float valor_a, valor_b;
    float resultado;
    char operacao = 'S';


printf("Digite o valor a:");
scanf("%f",&valor_a);

printf("Digite o valor b:");
scanf("%f",&valor_b);

printf("[S]Soma | [U]Subtracao | [M]Multiplicacao [D]Divisao\n");
print("Digite a operacao:");
scanf("%s",&operacao);
//calculo das operacoes 


// saida do valor
print("Meu resultado e %f", resultado);

if(operacao == 'M'){
    printf("Multplicacao: %d\n a*b");
}else{
    printf("Não é uma multiplicacao");
}