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
  std::cout << "Este programa calcula el coeficiente binomial de dos valores enteros" << std::endl;
  std::cout << "n ≥ 0 y k > 0" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El programa se ha ejecutado con el número incorrecto de parámetros" << std::endl << std::endl;
    return false;
  }
  return true;
}

unsigned long long Factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
      result *= i;
    }
    return result;
  }
}

unsigned long long BinomialCoefficient(int n, int k) {
  if (n < k || n < 0 || k < 0) {
    return 0;
  }

  unsigned long long numerator = Factorial(n);
  unsigned long long denominator = Factorial(k) * Factorial(n - k);

  return numerator / denominator;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Este programa debe ser llamado con dos números enteros: n y k." << std::endl;
    return 1;
  }

  int n = std::atoi(argv[1]);
  int k = std::atoi(argv[2]);

  if (n < 0 || k <= 0) {
    std::cout << "Los valores de n y k deben ser n >= 0 y k > 0." << std::endl;
    return 1;
  }

  unsigned long long result = BinomialCoefficient(n, k);
  std::cout << "El coeficiente binomial C(" << n << ", " << k << ") es: " << result << std::endl;
  return 0;
}
