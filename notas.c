#include <stdio.h>

int main()
{

    double nota1, nota2, fin;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    fin = (nota1 + nota2);

    printf("NOTA FINAL = %.1lf\n", fin);

    if (fin < 60) {
    printf("REPROVADO\n");

    }

    return 0;

}
