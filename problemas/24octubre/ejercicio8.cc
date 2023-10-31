/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file horas.cc
* @author Eduardo Padrón Casas alu0101626659@ull.edu.es
* @date Oct 22 2023
* @brief El programa devuelve la hora que habrá dentro de x horas a partir de la hora introducida.
* @bug There are no known bugs
* @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit?usp=sharing
*/

#include <iostream>

int main() {

  int hora_actual, cantidad_horas;

  std::cout << "Introduzca la hora actual y las horas añadidas" << std::endl;
  std::cin >> hora_actual >> cantidad_horas;
  std::cout << "Dentro de " << cantidad_horas << " horas serán las " 
            << hora_actual + cantidad_horas % 24 << std::endl;
  return 0;

}
