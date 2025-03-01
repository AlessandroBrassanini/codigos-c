#include <stdio.h>
#include "locale.h"

// Fun��o que incrementa o valor de uma vari�vel
// inteira por refer�ncia
// Recebe o endere�o de Num
void incrementar(int *x)
{
    // Incrementa o valor/conte�do apontado por x
    // *x recebe o conte�do
    // *x = *x + 1;
    // Ou
    *x++;

    // Exibe o valor/conte�do de x ap�s o incremento
    printf("Dentro da fun��o: *x = %d\n", *x);

    // Exibe o valor de *x e endere�o de &x
    // & � o endere�o
    // * � o conte�do
    printf("Valor de x = %d (%d) \n ", *x, &x);

}

int main()
{

    setlocale (LC_ALL, "portuguese");
    // Define o padr�o de caracteres para UTF-8
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    printf("Exemplo Por Refer�ncia \n");

    // Declara e inicializa a vari�vel num com o valor 5
    int num = 5;

    // Exibe o valor de num antes de chamar a fun��o
    printf("Antes da fun��o: num = %d\n", num);
    // Exibe o endere�o de num em decimal.
    printf("Endere�o de num = (%x)\n", &num);
    // Exibe o endere�o de num em hexadecimal
    printf("Endere�o de num na main: (%p)\n", &num);

    // Chama a fun��o incrementar, passando o endere�o de num como argumento
    // Isso permite que a fun��o modifique o valor de num diretamente.
    incrementar(&num);

    // Exibe o valor de num ap�s a chamada da fun��o
    printf("Depois da chamada da fun��o: num = %d\n", num);

    // Retorna 0, indicando que o programa foi executado com sucesso
    return 0;
}
