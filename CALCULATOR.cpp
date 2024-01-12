#include <iostream>

// Function to perform the calculation
double performCalculation(double num1, double num2, char operation) 
{
     // Function prototypes
    double add(double x, double y);
    double subtract(double x, double y);
    double multiply(double x, double y);
    double divide(double x, double y);

    // Perform the calculation based on the operatorm
    switch (operation)
    {
        case '+':
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            if (num2 != 0) 
            {
                std::cout << "Result: " << divide(num1, num2) << std::endl;
            } 
            else 
            {
                std::cerr << "Cannot divide by zero\n";
            }
            break;
        default:
            std::cerr << "Invalid operator\n";
            break;
    }
}

// Function definitions
double add(double x, double y)
{
    double sum = 0.0;
    sum = x + y;
    return sum;
}

double subtract(double x, double y) 
{
    double sum = 0.0;
    sum = x - y;
    return sum;
}

double multiply(double x, double y)
{
    double sum = 0.0;
    sum = x * y;
    return sum;
}

double divide(double x, double y) 
{
    double sum = 0.0;
    sum = x / y;
    return sum;
}

// Main function
int main() 
{
    double ivalue1 = 0.0;
    double ivalue2 = 0.0;
    char operation;

    // Get user input
    std::cout << "Enter first number:\n ";
    std::cin >> ivalue1;

    std::cout << "Enter operator (+, -, *, /):\n";
    std::cin >> operation;

    std::cout << "Enter second number:\n ";
    std::cin >> ivalue2;

    // Call the function to perform the calculation
    performCalculation(ivalue1,ivalue2,operation);

    return 0;
}
