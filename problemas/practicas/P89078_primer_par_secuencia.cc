/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P89078.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve la posicion del primer numero par de una secuencia.
* @bug There are no known bugs
* @see https://jutge.org/problems/P89078
*/

#include <iostream>

int main() {
  int numero;
  int posicion = 0;
  bool encontrado = false;

  while (std::cin >> numero) {
    posicion++;

      if (numero <= 0) {
        break;
      }

      if (numero % 2 == 0) {
        if (encontrado) {
          std::cout << ", " << posicion;
        } else {
          std::cout << posicion;
            encontrado = true;
        }
      }
  }
  return 0;
}
