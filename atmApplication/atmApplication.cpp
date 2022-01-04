//ATM Machine that lets user check balance, deposit, withdraw, and exit.
// created by Luke Coty 1.4.2022

#include <iostream>

using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}


int main()
{

    //Functions checkBalance, deposit, withdraw, showMenu

    int option;
    double balance = 500;
    double depositAmount = 0;
    double withdrawAmount = 0;


    do { //do while loop to repeat these instructions until user enters 4. Exit
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls"); //clears the CMD every time to make it more readable


        switch (option)
        {
        case 1: cout << "Balance is: $" << balance << endl;
            break;
        case 2: cout << "Deposit amount: $";
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: $";
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Insufficent Funds." << endl;
            break;
        case 4: cout << "Thank you have a good day!" << endl; //Lets user leave as well as gives a nice message.
            break;
        default: cout << "Incorrect option. Please select a valid option." << endl;
        }
    } while (option!=4); // exits user
   

    return 0;
}