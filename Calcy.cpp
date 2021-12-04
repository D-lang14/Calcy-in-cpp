
#include <iostream>
#include <cmath>

using namespace std;

// Main function
int main()
{
    // Variables
    int num1, num2;
    char redo;
    int choice;

    // Welcome to everyone
    cout << "\n|| Welcome to the calculater program ||\n\n"
         << endl;

    // Do while loop is used to loop menu function
    do
    {
        // Menu of the operations
        cout << "\n------------OPERATIONS----------";
        cout << "\n\t1. Addition";
        cout << "\n\t2. Subtraction";
        cout << "\n\t3. Multiplication";
        cout << "\n\t4. Division";
        cout << "\n\t5. Swaping";
        cout << "\n\t6. Modulus";
        cout << "\n\t7. Exit";

        // Taking choice here from 1 to 7
        cout << "\nEnter choice (1 to 7): ";
        cin >> choice;

        // Taking input of numbers
        cout << "\n\tFirst number:";
        cin >> num1;
        cout << "\n\tSecond number:";
        cin >> num2;
        cout << endl;

        // Switch case
        switch (choice)
        {

        // Addition Operation
        case 1:
            cout << "\nThe addition of two numbers (" << num1 << "," << num2 << "):\n";
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;

        // Sbtraction Operation
        case 2:
            cout << "\nThe substraction of two numbers (" << num1 << "," << num2 << "):\n";
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;

        // Multiplication Operation
        case 3:
            cout << "\nThe multiplication of two numbers (" << num1 << "," << num2 << "):\n";
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;

        // Division Operation
        case 4:
            double numb1, numb2;

            cout << "\nThe division of two numbers (" << numb1 << "," << numb2 << "):\n";
            if (numb2 == 0)
            {
                cout << "Not valid" << endl;
            }

            cout << numb1 << "/" << numb2 << "=" << (numb1 / numb2) << endl;
            break;

        // Swaping Operation
        case 5:
            cout << "The swap of two numbers (" << num1 << "," << num2 << "):\n";
            swap(num1, num2);
            cout << "First number=" << num1 << "\tSecond number=" << num2 << endl;
            break;

        // Modulus Operation
        case 6:
            cout << "The remainder of two numbers (" << num1 << "," << num2 << "):\n";
            if (num2 == 0)
            {
                cout << "Not valid" << endl;
            }
            cout << num1 << "%" << num2 << "=" << (num1 % num2) << endl;
            break;
        
        // Exit
        case 7:
            exit(0);

        default:
            cout << "Invalid command" << endl;
        }

        // Taking choice for re doing the operation
        cout << "Do you want to continue (y/n) ?: ";
        cin >> redo;
        cout << endl;

    } while (redo == 'y' || redo == 'Y');

    return 0;
    // Here the program ends
}
