#include <iostream>
#include <stdexcept>  // Para manejar errores con excepciones
#include "MyMathLib.h"
#include "BasicMath.h"
#include "AdvancedMath.h"

int main() {
    std::cout << "==== Math Library Tests ====\n";

    // Prueba de raíz cuadrada
    try {
        std::cout << "Sqrt(9) = " << mySqrt(9) << std::endl;
        std::cout << "Sqrt(16) = " << mySqrt(16) << std::endl;
        std::cout << "Sqrt(-4) = " << mySqrt(-4) << std::endl;  // Esto generará un error
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in sqrt: " << e.what() << std::endl;
    }

    // Pruebas de operaciones básicas
    std::cout << "\n==== Basic Math Operations ====\n";
    std::cout << "Addition (5 + 3): " << BasicMath::add(5, 3) << std::endl;
    std::cout << "Subtraction (5 - 3): " << BasicMath::subtract(5, 3) << std::endl;
    std::cout << "Multiplication (5 * 3): " << BasicMath::multiply(5, 3) << std::endl;
    
    try {
        std::cout << "Division (6 / 3): " << BasicMath::divide(6, 3) << std::endl;
        std::cout << "Division (6 / 0): " << BasicMath::divide(6, 0) << std::endl;  // Error esperado
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in division: " << e.what() << std::endl;
    }

    // Pruebas de operaciones avanzadas
    std::cout << "\n==== Advanced Math Operations ====\n";
    try {
        std::cout << "Factorial of 5: " << AdvancedMath::factorial(5) << std::endl;
        std::cout << "Factorial of -3: " << AdvancedMath::factorial(-3) << std::endl;  // Error esperado
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in factorial: " << e.what() << std::endl;
    }

    try {
        std::cout << "Combination of (5 choose 3): " << AdvancedMath::combination(5, 3) << std::endl;
        std::cout << "Combination of (5 choose -1): " << AdvancedMath::combination(5, -1) << std::endl;  // Error esperado
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in combination: " << e.what() << std::endl;
    }

    std::cout << "\n==== Program Finished ====" << std::endl;
    return 0;
}
