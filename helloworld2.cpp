#include <iostream>
#include <cmath>

int main(){
    int choice;

    std::cout << "\nWelcome to the best calculator in the world!\nWhat could we get started for you today?\n[1] - Addition\n[2] - Subtraktion\n[3] - Multiplication\n[4] - Division\n[5] - To The Power\n[6] - Square root\n[7] - Absolute\n[8] - Round\n[9] - Biggest Number\n[10] - Smallest Number\n[0] - Escape\nEnter: ";
    std::cin >> choice;

    switch(choice){
        case 1:
        double a;
        double b;
        double A;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b;

        A = a + b;

        std::cout << a << " + " << b << " = " << A;
        break;
        case 2:

        double a1;
        double b1;
        double A1;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a1;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b1;

        A1 = a1 - b1;

        std::cout << a1 << " - " << b1 << " = " << A1;
        break;
        case 3:

        double a2;
        double b2;
        double A2;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a2;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b2;

        A2 = a2 * b2;

        std::cout << a2 << " * " << b2 << " = " << A2;
        break;
        case 4:
        double a3;
        double b3;
        double A3;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a3;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b3;

        A3 = a3 / b3;

        std::cout << a3 << " / " << b3 << " = " << A3;
        break;

        case 5:
        double a4;
        double b4;
        double A4;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a4;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b4;

        A4 = pow(a4, b4);

        std::cout << a4 << " To the power of " << b4 << " = " << A4;
        break;
        case 6:
        double a5;
        double A5;
        
        std::cout << "Please Enter the Number: ";
        std::cin >> a5;

        A5 = sqrt(a5);

        std::cout << "the square root of " << a5 << " = " << A5;
        break;
        case 7:
        double a6;
        double b6;
        double A6;
        
        std::cout << "Please Enter the Number: ";
        std::cin >> a6;

        A6 = abs(a6);

        std::cout << "the absolute of " << a6 << " = " << A6;
        break;
        case 8:
        double a7;
        double b7;
        double A7;
        
        std::cout << "Please Enter the Number: ";
        std::cin >> a7;

        A7 = round(a7);

        std::cout << a7 << " rounded" << " = " << A7;
        break;
        case 9:
        double a8;
        double b8;
        double A8;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a8;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b8;

        A8 = std::max(a8, b8);

        std::cout << "the bigger number between " << a8 << " and " << b8 << " = " << A8;
        break;
        case 10:
        double a9;
        double b9;
        double A9;
        
        std::cout << "Please Enter the first Number: ";
        std::cin >> a9;

        std::cout << "Please Enter the second Number: ";
        std::cin >> b9;

        A9 = std::min(a9, b9);

        std::cout << "the smaller number between " << a9 << " and " << b9 << " = " << A9;
        break;
        case 0:
        exit;
        break;
        default:
        std::cout << "Not a valid number in the range of 0 - 10";
        break;
        




    }
    
}

