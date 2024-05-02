#include <stdio.h>
#include <math.h>

int main() {
    double credito, tasaInteres, interesAnual, totalIntereses = 0;
    double cuotaMensual, inversion;
    int NumAños;

    printf("Ingrese monto del crédito: ");
    scanf("%lf", &credito);

    printf("Ingrese la tasa de interés: ");
    scanf("%lf", &tasaInteres);

    printf("Ingrese el número de años: ");
    scanf("%d", &NumAños);

    printf("\nAño\tInterés\tCuota Mensual Anual\tInversión\n");

    double cuotaMensualAnual = credito / NumAños; 

    for(int i = 1; i <= NumAños; i++) {
        interesAnual = (credito * tasaInteres) / 100;
        totalIntereses += interesAnual;

        cuotaMensual = cuotaMensualAnual - (totalIntereses / (credito 
           / 100)); 
        credito -= cuotaMensualAnual;  
                   

        inversion = totalIntereses / 100 * 0.5; 
                 
        totalIntereses -= inversion * 100;  
                   

        printf("%d\t%.2lf\t%.2lf\t\t\t%.2lf\n", i, interesAnual, cuotaMensual, inversion);
    }

    printf("\nTotal Intereses: %.2lf\n", totalIntereses);

    return 0;
}