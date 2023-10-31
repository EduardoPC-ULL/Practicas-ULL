/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file horas.cc
* @author Eduardo Padrón Casas alu0101626659@ull.edu.es
* @date Oct 22 2023
* @brief El programa devuelve una cantidad de términos de la sucesión de Fibonacci.
* @bug There are no known bugs
* @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit?usp=sharing
*/

#include <iostream>

int main() {
  int cantidad, serie;
  int termino1 = 0;
  int termino2 = 1;
  std::cout << "Introduzca la cantidad de terminos de la serie de Fibonacci: ";
  std::cin >> cantidad;
  
  if (cantidad >= 1) {
    std::cout << termino1;
    
    for (int i = 2; i<= cantidad; i++) {
      serie = termino2;
      std::cout << ", " << termino2;
      termino2 = termino1 + termino2;
      termino1 = serie;   
  
    }

  }

  else {
    std::cout << "Debe introducir un número entero positivo";

  } 

  return 0;
}
