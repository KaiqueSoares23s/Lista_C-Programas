#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(void)
{ 
    float  C, F;
    setlocale(LC_ALL, "Portuguese");
    printf("Programa Celsius\n");
    printf("O Valor em Fahrenheit é: ");
    scanf("%f", &F);
    C=((5*F-160)/9);
    printf("A Temperatura em graus Celsius é: %f\n", C);
    system("PAUSE");
}
