#include <stdio.h>

// Funciones para realizar las conversiones
float quetzalesADolares(float quetzales) {
    return quetzales / 7.5; // Suponiendo que 1 USD = 7.5 GTQ
}

float dolaresAQuetzales(float dolares) {
    return dolares * 7.5;
}

float eurosAQuetzales(float euros) {
    return euros * 8.5; // Suponiendo que 1 EUR = 8.5 GTQ
}

float quetzalesAEuros(float quetzales) {
    return quetzales / 8.5;
}

float dolaresAEuros(float dolares) {
    // Primero convertimos a quetzales, luego a euros
    return dolaresAQuetzales(dolares) / 8.5;
}

float eurosADolares(float euros) {
    // Primero convertimos a quetzales, luego a dólares
    return eurosAQuetzales(euros) / 7.5;
}

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Conversor de monedas\n");
    printf("Opciones:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Euros a Quetzales\n");
    printf("4. Quetzales a Euros\n");
    printf("5. Dólares a Euros\n");
    printf("6. Euros a Dólares\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            resultado = quetzalesADolares(cantidad);
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
            break;
        case 2:
            printf("Ingrese cantidad en Dólares: ");
            scanf("%f", &cantidad);
            resultado = dolaresAQuetzales(cantidad);
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 3:
            printf("Ingrese cantidad en Euros: ");
            scanf("%f", &cantidad);
            resultado = eurosAQuetzales(cantidad);
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4:
            printf("Ingrese cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            resultado = quetzalesAEuros(cantidad);
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        case 5:
            printf("Ingrese cantidad en Dólares: ");
            scanf("%f", &cantidad);
            resultado = dolaresAEuros(cantidad);
            printf("%.2f Dólares = %.2f Euros\n", cantidad, resultado);
            break;
        case 6:
            printf("Ingrese cantidad en Euros: ");
            scanf("%f", &cantidad);
            resultado = eurosADolares(cantidad);
            printf("%.2f Euros = %.2f Dólares\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
