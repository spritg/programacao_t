#include <stdio.h>

    int main(){

        char produtoA[50] = "Celular";
        char produtoB[50] = "teclado";

        unsigned int estoqueA = 3200;
        unsigned int estoqueB = 5300;

        float valorA = 2350.15;
        float valorB = 100.50;

        unsigned int estoqueMinimoA = 2000.00;
        unsigned int estoqueMinimoB = 50.00;

        double ValorTotalA;
        double ValorTotalB;

        printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoB, estoqueB, valorB);

        int resultadoA , resultadoB;

        resultadoA = estoqueA > estoqueMinimoA;
        resultadoB = estoqueB > estoqueMinimoB;

        printf("O produto %s tem o estoque mínimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem o estoque mínimo %d\n", produtoB, resultadoB);

        printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$%.2f): %d\n" , 
                                                estoqueA * valorA,
                                                estoqueB * valorB,      
                                                (estoqueA * valorA) > (estoqueB * valorB));


        return 0;

    }