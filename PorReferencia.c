#include <stdio.h>
#include "locale.h"

// Função que incrementa o valor de uma variável
// inteira por referência
// Recebe o endereço de Num
void incrementar(int *x)
{
    // Incrementa o valor/conteúdo apontado por x
    // *x recebe o conteúdo
    // *x = *x + 1;
    // Ou
    *x++;

    // Exibe o valor/conteúdo de x após o incremento
    printf("Dentro da função: *x = %d\n", *x);

    // Exibe o valor de *x e endereço de &x
    // & é o endereço
    // * é o conteúdo
    printf("Valor de x = %d (%d) \n ", *x, &x);

}

int main()
{

    setlocale (LC_ALL, "portuguese");
    // Define o padrão de caracteres para UTF-8
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    printf("Exemplo Por Referência \n");

    // Declara e inicializa a variável num com o valor 5
    int num = 5;

    // Exibe o valor de num antes de chamar a função
    printf("Antes da função: num = %d\n", num);
    // Exibe o endereço de num em decimal.
    printf("Endereço de num = (%x)\n", &num);
    // Exibe o endereço de num em hexadecimal
    printf("Endereço de num na main: (%p)\n", &num);

    // Chama a função incrementar, passando o endereço de num como argumento
    // Isso permite que a função modifique o valor de num diretamente.
    incrementar(&num);

    // Exibe o valor de num após a chamada da função
    printf("Depois da chamada da função: num = %d\n", num);

    // Retorna 0, indicando que o programa foi executado com sucesso
    return 0;
}
