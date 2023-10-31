/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P15613.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve un mensaje segun la temperatura.
* @bug There are no known bugs
* @see https://jutge.org/problems/P34279
*/

#include <iostream>

int main() {
  int temperatura;  
  std::cin >> temperatura;

  if (temperatura > 30) {
    std::cout << "it's hot" << std::endl;
  } else if (temperatura < 10) {
    std::cout << "it's cold" << std::endl;
  } else {
    std::cout << "it's ok" << std::endl;
  }
  if (temperatura >= 100) {
    std::cout << "water would boil" << std::endl;
  } else if (temperatura <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  return 0;
}
