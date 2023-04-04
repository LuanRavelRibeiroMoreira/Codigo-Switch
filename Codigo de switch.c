
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int opcao;
    
    printf("1 - cadastrar\n 2 - vender\n 3 - buscar\n 4 - imprimir\n 5 - sair\n");
    scanf("\n %d", &opcao);
    
    switch(opcao){
    case 1:
        printf("\n cadastrando novo produto");
        break;
    case 2:
        printf("\nvendendo produto");
        break;
    case 3:
        printf("\nBuscando produto");
        break;
    case 4:
        printf("\nimprimindo");
        break;
    case 5:
        printf("\nsaindo");
        break;
    default:
        printf("\nOpção invaida");
    
    }
    return 0;
}

