#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    float MM, In;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%f", &In);
    MM=In*25.4;
    printf("O equivalente a chuva em milímetros é: %f\n", MM);
    system("PAUSE");
    return 0;
} 	
 

