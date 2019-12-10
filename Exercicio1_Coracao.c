#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
    float X, R;
    setlocale(LC_ALL, "Portuguese");
    printf("Batimentos Cardíacos\n");
    printf("Digite a idade da pessoa: ");
    scanf("%f", &X);
    R=(X*pow(60,2)*24*365);
    printf("O coração dessa pessoa baterá em %.f anos %.1f vezes.\n", X, R);
    system("PAUSE");

} 	
 

