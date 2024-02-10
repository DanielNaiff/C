#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    float numero;
    char letra;
    char outraletra;

    printf("Digite o primeiro valor inteiro:");
    scanf("%d", &valor);
    printf("Digite o segundo valor real:");
    scanf("%f", &numero);

    printf("\n\nValor do numero inteiro: %d\n\nValor do numero real: %.3f\n\n", valor, numero);

    printf("Digite uma letra:");
    // Limpar o buffer de entrada antes de ler a próxima entrada
    while (getchar() != '\n');

    letra = getchar();

    printf("\n\nCaractere lido: %c\n", letra);

    printf("Digite outro caractere:");
    // Limpar o buffer de entrada antes de ler a próxima entrada
    while (getc(stdin) != '\n');

    outraletra = getc(stdin);

    printf("\n\nOutra letra: %c\n", outraletra);

    return 0;
}
