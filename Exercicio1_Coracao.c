#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
    float X, r;
    setlocale(LC_ALL, "Portuguese");
    printf("Batimentos Card�acos\n");
    printf("Digite a idade da pessoa: ");
    scanf("%f", &X);
    r=(X*60*60*24*365);
    printf("O cora��o dessa pessoa bater� em %.f anos %.1f vezes.\n", X, r);
    system("PAUSE");

} 	
 

