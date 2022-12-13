#include <stdio.h> //bilioteca
#include <stdlib.h>

void soma(){ //funcao de soma
    int valor1, valor2, resultado; //declaração de variaveis inteiros
    printf("\nDigite o primeiro valor: ");  //pedir um valor;
    scanf ("%d", &valor1); //armazena o valor
    printf("Digite o segundo valor: ");
    scanf ("%d", &valor2);
    resultado = valor1 + valor2; //soma valor1 com valor 2
    printf("\nResultado: %d\n\n ", resultado); //mostra o resultado
    //menu(); //chamar o menu
    }

void subtrair (){ //funcao subtração
    int valor1, valor2, resultado;
    printf("\nDigite o primeiro valor: ");
    scanf ("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf ("%d", &valor2);
    resultado = valor1 - valor2; //subtrai os valor 1 de 2 e armazena em resultado
    printf("\nResultado: %d\n\n ", resultado); //mostra o resultado
    //menu();
    }

void dividir(){ //funcao divide
    float valor1, valor2, resultado;
    printf("\nDigite o primeiro valor: ");
    scanf ("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf ("%f", &valor2);
    resultado = valor1 / valor2;
    printf("\nResultado: %f\n\n ", resultado);
    //menu();
}

void multiplicar(){ //funcao multiplica
    int valor1, valor2, resultado;
    printf("\nDigite o primeiro valor: ");
    scanf ("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf ("%d", &valor2);
    resultado = valor1 * valor2;
    printf("\nResultado: %d\n\n ", resultado);
   // menu();

}
 void menu(){   //menu
    int escolha; //variavel inteira
    inicio:

    printf("\t\n\t::: calculadora :::\n \t"); //imprime msg na tela

    printf("\n \tSelecione uma operacao:\n\n"); // msg na tela
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("\nOperacao: "); //msg na tela
    scanf ("%d", &escolha); //armazena o numero

     switch (escolha){ //funcao de selecao de escolha no menu
        case 1: //caso  for digitado 1 execute isto:
            soma(); //funcao soma feita anteriomente acima

            goto inicio;
        break; //termina a funcao de soma

        case 2:
            subtrair();
            goto inicio;
        break;

        case 3:
            dividir();
            goto inicio;
        break;

        case 4:
            multiplicar();
            goto inicio;
            break;

         case 5: //caso selecionado 5 executar:
            printf("\n\tTerminado.\n\n"); //da uma msg na tela
        break; // termina a funcao 5 selecionada

        case 6:
        system("cls");
        printf("pressione qualquer tecla para sair.");
        exit(0);

        default: // caso nao se digite nenhum do case disponoveis execute
            printf("\nComando invalido, Tente novamente!\n\n"); //msg
            printf("\nPrecione qualquer tecla para voltar ao Menu!\n\n");
            goto inicio;  //salto para o menu

    }
}

int main(){

  //chamar funcao principal
    menu();


    return 0;
}
