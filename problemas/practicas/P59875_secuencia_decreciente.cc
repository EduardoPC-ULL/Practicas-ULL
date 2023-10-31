/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P59875.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve una secuencia de numeros de forma decreciente.
* @bug There are no known bugs
* @see https://jutge.org/problems/P59875
*/

#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  if (a == b) {
    std::cout << a << std::endl;
  } else if (a > b) {
    do {
      std::cout << a << std::endl;
      a = a - 1;
    } while (a != b); {
      std::cout << b << std::endl;
    }
  } else {
    do {
      std::cout << b << std::endl;
      b = b - 1;
    } while (b != a); {
      std::cout << a << std::endl;
    }
  }
  return 0;
}
