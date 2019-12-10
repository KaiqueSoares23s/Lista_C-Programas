#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    float n1, n2, n3, n4, s;
    setlocale(LC_ALL, "Portuguese");
    printf("Programa Soma dos menores\n");
    printf("O valor do Primeiro Número é: ");
    scanf("%f", &n1);
    printf("O valor do Segundo Número é: ");
    scanf("%f", &n2);
    printf("O valor do Terceiro Número é: ");
    scanf("%f", &n3);
    printf("O valor do Quarto Número é: ");
    scanf("%f", &n4);
    
    if (n1>n2 && n1>n3 && n1>n4)
    {
    s= (n2+n3+n4);
    printf("%f",s);
    }
    if(n2>n1 && n2>n3 && n2>n4)
    {
    s= (n1+n3+n4);
    printf("%f",s);
	}
    if (n3>n1 && n3>n2 && n3>n4) 
    {
    s= (n1+n2+n4);
    printf("%f", s);
    }
    if (n4>n1 && n4>n2 && n4>n3)
    {
    s= (n1+n2+n3);
    printf("%f",s);
    }
    system("cls");
	printf("\nA Soma dos Três Menores Números é: %.f\n", s);
    system("PAUSE");
}
