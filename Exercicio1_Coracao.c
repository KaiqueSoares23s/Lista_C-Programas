#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
    float X, R;
    setlocale(LC_ALL, "Portuguese");
    printf("Batimentos Card�acos\n");
    printf("Digite a idade da pessoa: ");
    scanf("%f", &X);
    R=(X*pow(60,2)*24*365);
    printf("O cora��o dessa pessoa bater� em %.f anos %.1f vezes.\n", X, R);
    system("PAUSE");

} 	
 

