#include <stdio.h>
#include <stdlib.h>

main(){
    //Declaração das variáveis
    //float ba = 0, at = 0, ar = 0;
    float ba = 0;
    float al = 0;
    float ar = 0;
    
    printf("Calculadora de Área\n\n");
    printf("Informe o Valor da Base do Retângulo: ");
    scanf("%f", &ba);
    printf("Informe o Valor da Altura do Retângulo: ");
    scanf("%f", &al);
    
    ar = ba*al;
    
    printf("Área do Retângulo = %.2fm².", ar);
}