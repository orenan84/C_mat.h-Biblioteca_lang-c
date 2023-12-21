// Exemplo de implementação da biblioteca:
#include "c_mat.h"
#include <stdio.h>
 int main() {
    int vetor[] = {1,2,3};
    printf("A soma dos elementos do vetor é: %i \n", somarVetor(vetor, 3));
    printf("A raíz da soma dos números nos vetores é: %.2f", extrairRaiz(somarVetor(vetor, 3))); 
    return 0;
}
