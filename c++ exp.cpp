#include <iostream>
#include <cmath>

using namespace std;

class ScientificCalculator {
public:
    double add(double a, double b) {
        return a + b;
    }
    double subtract(double a, double b) {
        return a - b;
    }
    double multiply(double a, double b) {
        return a * b;
    }
    double divide(double a, double b) {
        if (b == 0) {
            cerr << "Error: Division by zero is not allowed." << endl;
            return 0.0; // You can handle this error more gracefully in a real application.
        }
        return a / b;
    }
    double power(double base, double exponent) {
        return pow(base, exponent);
    }
    double squareRoot(double value) {
        if (value < 0) {
            cerr << "Error: Square root of a negative number is not allowed." << endl;
            return 0.0; // You can handle this error more gracefully in a real application.
        }
        return sqrt(value);
    }
    double sine(double angle) {
        return sin(angle);
    }
    double cosine(double angle) {
        return cos(angle);
    }
    
    double tangent(double angle) {
        return tan(angle);
    }

    double logarithm(double value) {
        if (value <= 0) {
            cerr << "Error: Logarithm of a non-positive number is not allowed." << endl;
            return 0.0; // You can handle this error more gracefully in a real application.
        }
        return log(value);
    }

    double exponential(double value) {
        return exp(value);
    }
};

int main() {
    ScientificCalculator calculator;
    int choice;
    double a, b;

    while (true) {
        cout << "Scientific Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Square Root" << endl;
        cout << "7. Sine" << endl;
        cout << "8. Cosine" << endl;
        cout << "9. Tangent" << endl;
        cout << "10.Logarithm" << endl;
        cout << "11.Exponential" << endl;
        cout << "12.Exit" << endl;
        cout << "Enter your choice (1-12): ";
        cin >> choice;

        if (choice == 12) {
            // Exit the loop and terminate the program
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the first number for addition: ";
                cin >> a;
                cout << "Enter the second number: ";
                cin >> b;
                cout << "Addition result: " << calculator.add(a, b) << endl;
                break;
            case 2:
                cout << "Enter the first number for subtraction: ";
                cin >> a;
                cout << "Enter the second number: ";
                cin >> b;
                cout << "Subtraction result: " << calculator.subtract(a, b) << endl;
                break;
            case 3:
                cout << "Enter the first number for multiplication: ";
                cin >> a;
                cout << "Enter the second number: ";
                cin >> b;
                cout << "Multiplication result: " << calculator.multiply(a, b) << endl;
                break;
            case 4:
                cout << "Enter the dividend for division: ";
                cin >> a;
                cout << "Enter the divisor: ";
                cin >> b;
                cout << "Division result: " << calculator.divide(a, b) << endl;
                break;
            case 5:
                cout << "Enter the base for power: ";
                cin >> a;
                cout << "Enter the exponent: ";
                cin >> b;
                cout << "Power result: " << calculator.power(a, b) << endl;
                break;
            case 6:
                cout << "Enter a number for square root: ";
                cin >> a;
                cout << "Square Root result: " << calculator.squareRoot(a) << endl;
                break;
            case 7:
                cout << "Enter an angle (in radians) for sine: ";
                cin >> a;
                cout << "Sine result: " << calculator.sine(a) << endl;
                break;
            case 8:
                cout << "Enter an angle (in radians) for cosine: ";
                cin >> a;
                cout << "Cosine result: " << calculator.cosine(a) << endl;
                break;
            case 9:
                cout << "Enter an angle (in radians) for tangent: ";
                cin >> a;
                cout << "Tangent result: " << calculator.tangent(a) << endl;
                break;
            case 10:
                cout << "Enter a positive number for logarithm: ";
                cin >> a;
                cout << "Logarithm result: " << calculator.logarithm(a) << endl;
                break;
            case 11:
                cout << "Enter a number for exponential: ";
                cin >> a;
                cout << "Exponential result: " << calculator.exponential(a) << endl;
                break;
            default:
                cerr << "Invalid choice. Please select a valid operation or choose 'Exit' to quit." << endl;
        }
	
        cout << "-----------------------------------" << endl; 
        cout <<""<< endl;
    }

    return 0;
}

