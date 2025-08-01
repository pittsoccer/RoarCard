#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double balance = 0.0;
    double amount = 0.0;
    char choice = ' ';

    // input beginning balance
    do
    {
        cout << "Enter your beginning balance: ";
        cin >> balance;
    } while (balance < 0 || balance > 1000);

    do
    {
        // output startup menu
        cout << "P - Purchase food" << endl;
        cout << "A - Add funds to balance" << endl;
        cout << "M - Monthly service fee" << endl;
        cout << "Q - Quit the program" << endl;

        do
        {
            // input user choice
            cout << "Enter your choice: ";
            cin >> choice;
        } while (choice != 'P' && choice != 'p' && choice != 'A' && choice != 'a' && choice != 'M' && choice != 'm' && choice != 'Q' && choice != 'q');

        // break between inputs/outputs
        cout << endl;

        // switch statement
        switch (choice)
        {
        case 'P': // purchase food
        case 'p':
            do
            {
                cout << "Enter food purchase amount: ";
                cin >> amount;
            } while (amount < 0 || amount > 100);
            balance -= amount;
            cout << fixed << setprecision(2) << "New balance: $" << balance << endl;
            cout << endl;
            break;
        case 'A': // add funds
        case 'a':
            do
            {
                cout << "Enter deposit amount: ";
                cin >> amount;
            } while (amount < 0 || amount > 200);
            balance += amount;
            cout << fixed << setprecision(2) << "New balance: $" << balance << endl;
            cout << endl;
            break;
        case 'M': // monthly service fee
        case 'm':
            balance -= 2.35;
            cout << fixed << setprecision(2) << "Monthly service fee: $2.35" << endl;
            cout << fixed << setprecision(2) << "New balance: $" << balance << endl;
            cout << endl;
            break;
        case 'Q': // quit the program
        case 'q':
            cout << "Program Terminated" << endl;
            cout << endl;
            break;
        default: // invalid choice
            cout << "ERROR: Invalid choice" << endl;
            cout << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}
