/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file horas.cc
* @author Eduardo Padrón Casas alu0101626659@ull.edu.es
* @date Oct 22 2023
* @brief El programa devuelve las potencias de 2 desde 0 a 2^n que ingrese el usuario
* @bug There are no known bugs
* @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit?usp=sharing
*/

#include <iostream>

int main() {
    int numero = 1;
    int potencia;

    std::cout << "Introduzca el valor para generar las potencias de 2 que desee: " << std::endl;
    std::cin >> potencia;

    if (potencia < 0) {
        std::cout << "El valor de la potencia debe ser positivo" << std::endl;
    } 
    else {
      std::cout << "Potencias de 2 desde 2^0 hasta 2^" << potencia << ":" << std::endl;
      for (int i = 0; i <= potencia; i++) {
        std::cout << numero << ' ';
        numero *= 2;
        }
    }

    return 0;
}
