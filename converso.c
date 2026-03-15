#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio (valores de referencia)
    float tasa_usd_a_gtq = 7.80; // 1 USD a Quetzales
    float tasa_eur_a_gtq = 8.45; // 1 EUR a Quetzales
    float tasa_eur_a_usd = 1.08; // 1 EUR a USD

    printf("--- Conversor de Monedas ---\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Dolares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion (1-6): ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Lógica de conversión
    switch(opcion) {
        case 1:
            resultado = cantidad / tasa_usd_a_gtq;
            printf("%.2f Quetzales equivalen a %.2f Dolares.\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / tasa_eur_a_gtq;
            printf("%.2f Quetzales equivalen a %.2f Euros.\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * tasa_usd_a_gtq;
            printf("%.2f Dolares equivalen a %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad / tasa_eur_a_usd;
            printf("%.2f Dolares equivalen a %.2f Euros.\n", cantidad, resultado);
            break;
        case 5:
            resultado = cantidad * tasa_eur_a_gtq;
            printf("%.2f Euros equivalen a %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 6:
            resultado = cantidad * tasa_eur_a_usd;
            printf("%.2f Euros equivalen a %.2f Dolares.\n", cantidad, resultado);
            break;
        default:
            printf("Error: Opcion no valida. Por favor, reinicie el programa.\n");
            break;
    }

    return 0;
}