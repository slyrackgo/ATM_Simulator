// ATM PROGRAM!
#include <iostream>

using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Wuthdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "********************" << endl;
}

int main()
{
    int option;
    double balance = 1000;
    // This program has 4 options: Check balance, withdraw, deposit and exit program.
    do
    {
        showMenu();

        cout << "Please choose an option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Your balance is: " << balance << "$" << endl;
            break;
        case 2:
            double depositAmount;
            cout << "Deposit amount: ";
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {

                cout << "Withdraw amount: ";
                balance -= withdrawAmount;
                break;
            }
            else
            {
                cout << "You can not withdraw more than you have in your balance!" << endl;
            }
        }
    } while (option != 4);

    return 0;
}
