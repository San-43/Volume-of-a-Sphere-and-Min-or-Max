#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "cs50.h"

/// Declaración de funciones

void volumeCalculator(); /// Calcular volumen
void minOrMax(); /// Mínimo o máximo

int main() {
    int option;

    /// Idioma español y color verde
    setlocale(LC_CTYPE, "spanish");
    system("cls");
    system("color 02");


    /// Opciones para escoger.
    printf("******Seleccione una opción.******\n");
    printf("Para calcular el volumen de una esfera use 1.\n");
    printf("Para saber el mayor entre dos números use 2.\n");
    printf("Use 0 para salir.\n");

    do {
        option = get_int("Opción: ");
    } while (option != 1 && option != 2 && option != 0);

    printf("\n");

    switch (option) {
        case 1:
            volumeCalculator();
            break;
        case 2:
            minOrMax();
            break;
        case 0:
            printf("Good Bye!!");
            break;
        default:
            return 0;
    }
    return 0;
}

/// Implementación de funciones

void minOrMax() {
    double a;
    double b;

    printf("Introduzca a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Introduzca un valor correcto.");
        return;
    }
    printf("Introduzca b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Introduzca un valor correcto.");
        return;
    }

    if (a == b) {
        printf("***** a igual a b *****");
        return;
    } else if (a > b) {
        printf("***** a mayor que b *****");
        return;
    } else {
        printf("***** b mayor que a *****");
    }
}

void volumeCalculator() {
    double r;
    double volumen = 0;

    printf("*** CÁLCULO DEL VÓLUMEN DE UNA ESFERA ***\n");

    printf("Ingrese el radio r: ");
    if (scanf("%lf", &r) != 1) {
        printf("Por favor introduzca un valor correcto. \n");
        return;
    } else if (r == 0) {
        printf("El radio no puede ser 0.");
        return;
    } else if (r < 0) {
        printf("El radio no puede ser negativo");
        return;
    }

    volumen = 4 * M_PI * pow(r, 3) / 3;

    printf("\n**** EL RESULTADO ES: %.2f *****", volumen);
}
