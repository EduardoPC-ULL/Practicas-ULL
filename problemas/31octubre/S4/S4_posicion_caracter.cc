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

void PrintProgramPurpose() {
  std::cout << "Este programa determina la primera posición de un carácter en una cadena." << std::endl;
  std::cout << "Después de proporcionar la cadena y el carácter, el programa mostrará el resultado." << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un número incorrecto de parámetros." << std::endl << std::endl;
  return false;
  }
  return true;
}

int FindCharacterPosition(const std::string& cadena, char caracter) {
  for (int i = 0; i < cadena.length(); i++) {
    if (cadena[i] == caracter) {
      return i;
    }
  }
  return -1;  
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();

  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 345;
  }

  std::string cadena = argv[1];
  char caracter = argv[2][0]; 

  int posicion = FindCharacterPosition(cadena, caracter);

  if (posicion != -1) {
    std::cout << "La cadena de texto: " << cadena << std::endl;
    std::cout << "El carácter '" << caracter << "' se encuentra en la posición " << posicion << std::endl;
  } else {
    std::cout << "La cadena de texto: " << cadena << std::endl;
    std::cout << "El carácter '" << caracter << "' no se encuentra en la cadena." << std::endl;
  }

  return 0;
}
