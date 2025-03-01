#include <stdio.h>
#include "locale.h"

void incrementar(int x) // 5
{
    x = x + 1;
    printf("Dentro da função: x = %d\n", x);

    printf("Endereço de: x = (%x)\n", &x);
}

int main()
{
    setlocale (LC_ALL, "portuguese");
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); //Define o padrão Brasileiro

    printf("Exemplo Por Valor \n");

    int num = 5;
    printf("Endereço de: num = %x\n", &num);
    printf("Antes da função: num = %d\n", num);
    incrementar(num);
    printf("Depois da chamada da função: num = %d\n", num);
    return 0;
}
