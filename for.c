#include <stdio.h>
#include <string.h>

void exibirMenuDados(char nome[], int idade, int alturaCm, int massaCorporalGramas) {
    float imc;
    printf("\n---- Informacoes ----\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %d cm\n", alturaCm);
    printf("Massa corporal: %d g\n", massaCorporalGramas);

    if (alturaCm > 0 && massaCorporalGramas > 0) {
        float pesoKg = massaCorporalGramas / 1000.0f;
        float alturaM = alturaCm / 100.0f;
        imc = pesoKg / (alturaM * alturaM);

        printf("IMC: %.2f\n", imc);

        printf("Classificacao: ");
        if (imc < 18.5)
            printf("Abaixo do peso\n");
        else if (imc < 25.0)
            printf("Peso normal\n");
        else if (imc < 30.0)
            printf("Sobrepeso\n");
        else if (imc < 35.0)
            printf("Obesidade grau I\n");
        else if (imc < 40.0)
            printf("Obesidade grau II\n");
        else
            printf("Obesidade grau III\n");
    } else {
        printf("IMC: dados insuficientes\n");
    }
}

void executarSwitch(char *nome, int *idade, int *alturaCm, int *massaCorporalGramas, char opcao) {
    switch (opcao) {
        case 'a':
            printf("Altura (em cm): ");
            scanf("%d", alturaCm);
            break;
        case 'm':
            printf("Massa corporal (em gramas): ");
            scanf("%d", massaCorporalGramas);
            break;
        case 'i':
            printf("Idade: ");
            scanf("%d", idade);
            break;
        case 'n':
            printf("Nome: ");
            getchar(); 
            fgets(nome, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';
            break;
        case 'e':
            exibirMenuDados(nome, *idade, *alturaCm, *massaCorporalGramas);
            break;
        case '0':
            printf("Encerrando programa...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
}

void menuOperacoes(char tipoLoop) {
    char nome[50] = "";
    int idade = 0, alturaCm = 0, massaCorporalGramas = 0;
    char opcao;
    int contador = 0;

    if (tipoLoop == '1') { // FOR até 10
        for (contador = 0; contador < 10; contador++) {
            printf("\n------ MENU (FOR até 10) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
        }
    }
    else if (tipoLoop == '2') { // FOR infinito
        for (;;) {
            printf("\n------ MENU (FOR infinito) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
        }
    }
    else if (tipoLoop == '3') { // WHILE até 10
        while (contador < 10) {
            printf("\n------ MENU (WHILE até 10) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
            contador++;
        }
    }
    else if (tipoLoop == '4') { // WHILE infinito
        while (1) {
            printf("\n------ MENU (WHILE infinito) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
        }
    }
    else if (tipoLoop == '5') { // DO WHILE até 10
        do {
            printf("\n------ MENU (DO WHILE até 10) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
            contador++;
        } while (contador < 10);
    }
    else if (tipoLoop == '6') { // DO WHILE infinito
        do {
            printf("\n------ MENU (DO WHILE infinito) ------\n");
            printf("a-altura | m-massa | i-idade | n-nome | e-exibir | 0-sair\n");
            scanf(" %c", &opcao);
            if (opcao == '0') break;
            executarSwitch(nome, &idade, &alturaCm, &massaCorporalGramas, opcao);
        } while (1);
    }
}

int main() {
    char escolha;
    do {
        printf("\n===== ESCOLHA O TIPO DE LOOP =====\n");
        printf("1 - FOR até 10\n");
        printf("2 - FOR infinito\n");
        printf("3 - WHILE até 10\n");
        printf("4 - WHILE infinito\n");
        printf("5 - DO WHILE até 10\n");
        printf("6 - DO WHILE infinito\n");
        printf("0 - Sair do programa\n");
        printf("Opcao: ");
        scanf(" %c", &escolha);

        if (escolha >= '1' && escolha <= '6') {
            menuOperacoes(escolha);
        } else if (escolha == '0') {
            printf("Fechando programa...\n");
        } else {
            printf("Opcao invalida!\n");
        }

    } while (escolha != '0');

    return 0;
}
