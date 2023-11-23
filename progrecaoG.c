#include <stdio.h>

int main() {

    int a1, razao, s, n;

    printf("\ndigite o primeiro termo: ");
    scanf("%d", &a1);

    printf("\ndigite a razao: ");
    scanf("%d", &razao);

    printf("\ndigite o numero de termos: ");
    scanf("%d", &n);

    /* soma da progressão geométrica */
    
    s = a1 * (pow(razao, n) - 1) / (razao - 1);

    printf("\na soma da progressao geometrica eh: %d", s);

    return 0;
}
