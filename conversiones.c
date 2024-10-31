// conversiones.c
#include "conversiones.h"

// Conversiones de longitud
double metros_a_kilometros(double metros) {
    return metros / 1000.0;
}

double kilometros_a_millas(double kilometros) {
    return kilometros * 0.621371;
}

double pulgadas_a_centimetros(double pulgadas) {
    return pulgadas * 2.54;
}

// Conversiones de temperatura
double celsius_a_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheit_a_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double celsius_a_kelvin(double celsius) {
    return celsius + 273.15;
}

// Conversiones de peso
double kilogramos_a_libras(double kilogramos) {
    return kilogramos * 2.20462;
}

double libras_a_kilogramos(double libras) {
    return libras / 2.20462;
}
