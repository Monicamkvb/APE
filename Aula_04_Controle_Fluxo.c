#include <stdio.h>

int main(){

    float valor_a, valor_b;
    float resultado;
    char operacao = 'S';


printf("Digite o valor a:");
scanf("%f",&valor_a);

printf("Digite o valor b:");
scanf("%f",&valor_b);

printf("[S]Soma | [U]Subtracao | [M]Multiplicacao [D]Divisao\n");
printf("Digite a operacao:");
scanf("%s",&operacao);
//calculo das operacoes, quando tem dois == siginifica que ta comparando 


if(operacao=='S'){
    resultado=valor_a + valor_b;
}else if(operacao=='U'){
    resultado=valor_a - valor_b;
}else if(operacao=='M'){
    resultado=valor_a * valor_b;
}else if(operacao=='D'){
    resultado=valor_a/valor_b;
}


// saida do valor
printf("Meu resultado e %f", resultado);


  







//   int idade;
//  print("Digite a sua idade:");
//   scanf("%d", &idade);
//    if(idade>=24){
//       printf("Você é um adulto formado!");
// }else if(idade>=18){
//       printf("Voce e maior de idade!");
//  }else{
//      printf("Voce e menor de idade!");
// }


return 0;

}


