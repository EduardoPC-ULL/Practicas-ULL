/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo Padrón Casas
 * @date Oct 30 2022
 * @brief Check the correct number of parameters for a program
 *
 */

#include <iostream>
#include <string>

int CountVowels(const std::string& texto) {
  int count = 0;
  for (char c : texto) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      count++;
    }
  }
  return count;
}

void PrintProgramPurpose() {
  std::cout << "Este programa cuenta el número de vocales en una cadena de texto." << std::endl;
  std::cout << "Después de proporcionar la cadena, el programa mostrará el resultado." << std::endl;
  std::cout << "Ejemplo de uso: " << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un número incorrecto de parámetros." << std::endl << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();

  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  std::string texto = argv[1];
  int numerodevocales = CountVowels(texto);

  std::cout << "La cadena de texto: " << texto << std::endl;
  std::cout << "Tiene " << numerodevocales << " vocales" << std::endl;

  return 0;
}
