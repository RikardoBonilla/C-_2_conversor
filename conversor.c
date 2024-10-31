// conversor.c
#include <stdio.h>
#include "conversiones.h"

int main() {
    int opcion;
    double valor, resultado;

    do {
        printf("\nConversor de Unidades\n");
        printf("Seleccione el tipo de conversión:\n");
        printf("1. Metros a Kilómetros\n");
        printf("2. Kilómetros a Millas\n");
        printf("3. Pulgadas a Centímetros\n");
        printf("4. Celsius a Fahrenheit\n");
        printf("5. Fahrenheit a Celsius\n");
        printf("6. Celsius a Kelvin\n");
        printf("7. Kilogramos a Libras\n");
        printf("8. Libras a Kilogramos\n");
        printf("9. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        if (opcion == 9) {
            printf("Saliendo del programa...\n");
            break;
        }

        printf("Ingrese el valor a convertir: ");
        scanf("%lf", &valor);

        switch (opcion) {
            case 1:
                resultado = metros_a_kilometros(valor);
                printf("Resultado: %.2lf kilómetros\n", resultado);
                break;
            case 2:
                resultado = kilometros_a_millas(valor);
                printf("Resultado: %.2lf millas\n", resultado);
                break;
            case 3:
                resultado = pulgadas_a_centimetros(valor);
                printf("Resultado: %.2lf centímetros\n", resultado);
                break;
            case 4:
                resultado = celsius_a_fahrenheit(valor);
                printf("Resultado: %.2lf °F\n", resultado);
                break;
            case 5:
                resultado = fahrenheit_a_celsius(valor);
                printf("Resultado: %.2lf °C\n", resultado);
                break;
            case 6:
                resultado = celsius_a_kelvin(valor);
                printf("Resultado: %.2lf K\n", resultado);
                break;
            case 7:
                resultado = kilogramos_a_libras(valor);
                printf("Resultado: %.2lf libras\n", resultado);
                break;
            case 8:
                resultado = libras_a_kilogramos(valor);
                printf("Resultado: %.2lf kilogramos\n", resultado);
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
                break;
        }
    } while (1);

    return 0;
}
