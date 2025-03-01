#include <stdio.h>
#include "locale.h"

void incrementar(int x) // 5
{
    x = x + 1;
    printf("Dentro da fun��o: x = %d\n", x);

    printf("Endere�o de: x = (%x)\n", &x);
}

int main()
{
    setlocale (LC_ALL, "portuguese");
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); //Define o padr�o Brasileiro

    printf("Exemplo Por Valor \n");

    int num = 5;
    printf("Endere�o de: num = %x\n", &num);
    printf("Antes da fun��o: num = %d\n", num);
    incrementar(num);
    printf("Depois da chamada da fun��o: num = %d\n", num);
    return 0;
}
