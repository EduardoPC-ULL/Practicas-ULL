/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file horas.cc
* @author Eduardo Padrón Casas alu0101626659@ull.edu.es
* @date Oct 22 2023
* @brief El programa devuelve todos los divisores de un número entero introducido.
* @bug There are no known bugs
* @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit?usp=sharing
*/

#include <iostream>

int main() {
  int numero;

  std::cout << "Introduzca un número entero: ";
  std::cin >> numero;
  std::cout << "Los divisores de " << numero << " son: " << std::endl;

  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      std::cout << i << ' ';
    
    }

  }

  return 0;

}
