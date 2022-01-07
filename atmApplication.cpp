//ATM Machine that lets user check balance, deposit, withdraw, and exit.
// created by Luke Coty 1.4.2022
//Updated on 1.6.2022 by adding two users and a way to transfer between them.

#include <iostream>

using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Exit" << endl;
    cout << "************************" << endl;
}


int main()
{

    //Functions checkBalance, deposit, withdraw, showMenu

    int option, user;
    double balance1 = 500;
    double balance2 = 550;
    double depositAmount = 0;
    double withdrawAmount = 0;


    do { //do while loop to repeat these instructions until user enters 4. Exit
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls"); //clears the CMD every time to make it more readable


        switch (option)
        {
        case 1: cout << "Please select User 1 or User 2" << endl;
            cin >> user;
            if (user == 1)
                cout << "Balance is: $" << balance1 << endl;
            else if (user == 2)
                cout << "Balance is: $" << balance2 << endl;
            else
                cout << "Please select a valid number" << endl;
            break;
        case 2: cout << "Please select User 1 or User 2" << endl;
            cin >> user;
            if (user == 1) {
                cout << "Deposit amount: $";
                cin >> depositAmount;
                balance1 += depositAmount;
            }
            else if (user == 2) {
                cout << "Deposit amount: $";
                cin >> depositAmount;
                balance2 += depositAmount;
            }
            else
                cout << "Please select a valid number" << endl;
            break;
        case 3:cout << "Please select User 1 or User 2" << endl;
            cin >> user;
            cout << "Withdraw amount: $";
            cin >> withdrawAmount;
            if (user == 1) {
                if (withdrawAmount <= balance1)
                    balance1 -= withdrawAmount;
                else
                    cout << "Insufficent Funds." << endl;
            }
            else if (user == 2) {
                    if (withdrawAmount <= balance2)
                        balance2 -= withdrawAmount;
                    else
                        cout << "Insufficent Funds." << endl;
            }
            break;
        case 4:cout << "Please select User 1 or User 2" << endl;
            cin >> user;
            cout << "Transfer amount: $";
            cin >> withdrawAmount;
            if (user == 1) {
                if (withdrawAmount <= balance1) {
                    balance1 -= withdrawAmount;
                    balance2 += withdrawAmount;
                }
                else
                    cout << "Insufficent Funds." << endl;
            }
            else if (user == 2) {
                if (withdrawAmount <= balance2) {
                    balance2 -= withdrawAmount;
                    balance1 += withdrawAmount;
                }
                else
                    cout << "Insufficent Funds." << endl;
            }
            break;
        case 5: cout << "Thank you have a good day!" << endl; //Lets user leave as well as gives a nice message.
            break;
        default: cout << "Incorrect option. Please select a valid option." << endl;
        }
    } while (option!=5); // exits user
   

    return 0;
}