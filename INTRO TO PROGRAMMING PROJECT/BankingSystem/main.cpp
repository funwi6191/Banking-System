#include <iostream>

using namespace std;

string username = "hazard";
int Password = 1234;
string USERNME;
int PASSWRD;
string AccountName = "Hazard Blaze";
int option;
double AvailableBalance = 10000.00;
double DepositMoney;
double WithdrawMoney;
string RecipientsName;
int AmountSend;
bool running = true;

void login(){
    cout << "Welcome To DEEZ-BANK" <<endl;
    cout <<endl;
    cout << "===== Login =====" <<endl;
    cout << "Enter Your Username: ";
    cin >> USERNME;
    cout << "Enter Your Password: ";
    cin >> PASSWRD;
    if (USERNME == username && PASSWRD == Password ){
        cout << "Login Successful" <<endl;
        cout <<endl;
    }
    else if (USERNME != username && PASSWRD != Password){
        cout << "Invalid Username or Password" <<endl;
        exit(1);
    }
}
void checkBalance(){
     cout <<endl;
     cout << "===== Account Details ===== "<<endl;
     cout << "Available Balance: R" <<AvailableBalance << "         "<<"Account: "<<AccountName<<endl;
     cout <<endl;
}
void Deposit(){
        cout <<endl;
        cout << "===== Deposit Money ===== "<<endl;
        cout << "Enter Amount: ";
        cin >> DepositMoney;
        cout << "Deposit Successful"<<endl;
        cout << "Updated Balance = R" << DepositMoney + AvailableBalance <<endl;
        cout <<endl;
}
void withdraw(){
        cout <<endl;
        cout << "===== Withdraw Money ===== "<<endl;
        cout << "Enter Amount: ";
        cin >>WithdrawMoney;
        if (WithdrawMoney <= AvailableBalance ){
            cout << "Withdrawal Successful"<<endl;
            cout<<"Amount: R" <<WithdrawMoney<<endl;
            cout << "Updated Balance = R"<<AvailableBalance - WithdrawMoney<<endl;
            cout <<endl;

        }
        else if(WithdrawMoney > AvailableBalance){
             cout << "Insufficient Funds, Please Recharge Your Account And Try Again"<<endl;
             cout <<endl;
        }
}
void sendMoney(){
        cout <<endl;
        cout << "===== Send Money ===== "<<endl;
        cout << "Enter Recipients Name: ";
        cin >>RecipientsName;
        cout << "Enter Amount: ";
        cin >>AmountSend;
        if (AmountSend < AvailableBalance){
            cout << "Money Sent Successful"<<endl;
            cout << "===== Details ====="<<endl;
            cout << "Amount Sent: R"<<AmountSend<<endl;
            cout << "From: "<<AccountName<<endl;
            cout << "To: "<<RecipientsName<<endl;
            cout << "Updated Balance = R"<<AvailableBalance - AmountSend<<endl;
            cout <<endl;
        }
        else if (AmountSend > AvailableBalance){
             cout << "Insufficient Funds, Please Recharge Your Account And Try Again"<<endl;
             cout <<endl;
        }
}
void DisplayMenu(){
    while(running){
    cout <<"===== MAIN MENU =====" <<endl;
    cout << "1. Check Balance"<<endl;
    cout << "2. Deposit Money"<<endl;
    cout << "3. Withdraw Money"<<endl;
    cout << "4. Send Money"<<endl;
    cout << "5. Exit"<<endl;
    cout << "Enter Option: ";
    cin >> option;

    switch(option){
    case 1:
        checkBalance();
        break;
    case 2:
        Deposit();
        break;
    case 3:
       withdraw();
        break;
    case 4:
        sendMoney();
        break;
    case 5:
        cout << "THANKS FOR USING DEEZ-BANK"<<endl;
        exit(1);
        break;
    default:
        cout << "INVALID INPUT"<<endl;
        break;
    }
    }
}


int main()
{
    login();
    DisplayMenu();
    checkBalance();
    Deposit();
    withdraw();
    sendMoney();

    return 0;


}



