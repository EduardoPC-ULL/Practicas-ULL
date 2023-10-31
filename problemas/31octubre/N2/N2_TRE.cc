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

void PrintProgramPurpose() {
  std::cout << "Este programa devuelve los TRE correspondientes a los primeros N números enteros" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa se ha ejecutado con el número de parámetros incorrecto." << std::endl << std::endl;
    return false;
  }
  return true;
}

void GenerateAndPrintTRE(int N) {
  for (int a = 1; a <= N; a++) {
    int b, c;

    if (a % 2 == 1) {
      int k = (a - 1) / 2;
      b = 2 * k * (k + 1);
      c = b + 1;
    } else {
      int k = a / 2;
      b = k * k - 1;
      c = k * k + 1;
    }

    std::cout << a << " " << b << " " << c << std::endl;
  }
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2) {
    return 345;
  }

  int N = std::atoi(argv[1]);

  if (N <= 0) {
    std::cout << "N debe ser un número entero positivo." << std::endl;
    return 1;
    }

  GenerateAndPrintTRE(N);

  return 0;
}
