/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P73501.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve la cantidad de numeros pares de una secuencia.
* @bug There are no known bugs
* @see https://jutge.org/problems/P73501
*/

#include <iostream>

int main() {
  int krepeticion;
  std::cin >> krepeticion;
  int knumero{0};
  int aux{0};
  for (int i = 0; i < krepeticion; i++) {
    int suma{0};
    bool increase = false;
    while (cin >> knumero && knumero != 0) {
      if (increase) {
        if (aux < knumero) {
          suma++;
        }
      }
      aux = knumero;
      increase = true;
    }
    std::cout << suma << std::endl;
  }
}
