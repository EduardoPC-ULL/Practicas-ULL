/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file P29448.cc
* @author Eduardo Padron Casas alu0101626659@ull.edu.es
* @date Oct 25 2023
* @brief El programa devuelve si la fecha introducida esta bien o mal.
* @bug There are no known bugs
* @see https://jutge.org/problems/P29448
*/

#include <iostream>

int main() {
  int year, month, day, repetitions;

  for (int i = 0; i <= repetitions; i++) {
    std::cin >> day >> month >> year;
    if (year < 1800 || year > 9999 || month > 12 || day > 31 || month < 0 || day < 0){
      std::cout << "Incorrect Date" << std::endl;
    } if (month = 2 && day > 28){
      std::cout << "Incorrect Date" << std::endl;
    } else {
      std::cout << "Correct Date" << std::endl;
    }
  }
  return 0;
}


