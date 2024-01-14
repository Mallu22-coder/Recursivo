//Um versão extra sem recursão para mostrar como ficaria

#include <stdio.h>
#include <locale.h>

void imprimir(int n)
{
    int ant1 = 1;
    int ant2 = 0;
    int atual;
// imprimir os valores de ant2 e ant1 ficando na impressão "0 1"
    printf("%d %d ", ant2, ant1);
    int i;
    for (i = 3; i <= n; i++){

        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
    }
    // imprimir todos os valores
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite o valor do termo para imprimir a serie\n");

    scanf("%d", &n);
    printf("Série de Fibonacci(%d primeiros termos)\n", n);
    imprimir(n);

    printf("\n");

    return 0;
}