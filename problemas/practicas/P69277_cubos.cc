/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P69277.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve los cubos de 0 hasta n.
* @bug There are no known bugs
* @see https://jutge.org/problems/P69277
*/

#include <iostream>

int main() {
  int numero;  
  std::cin >> numero;

  std::cout << "0";
  for (int i = 1; i <= numero; i++) {
    int cubo = i * i * i;
    std::cout << "," << cubo;
  }
  std::cout << std::endl;
  return 0;
}
