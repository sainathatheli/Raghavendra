#include<iostream>
using namespace std;

class BankAccount{
   int accno;
   string name;
   char type;
   int balance;

    public:
         void create_account();  //function declaration
         void depost_amount(int dept);
         void withdraw_amount(int wt);
         void show_Accountdetails();
};

void BankAccount :: create_account(){
    cout<<"Enter the accountNo: "<<endl;
    cin>>accno;
    cout<<"Enter the Account HolderName :"<<endl;
    //getline(cin,name);
    cin>>name;
    cout<<"Enter the AccountType For Saving (s)/Current (c) :"<<endl;
    cin>>type;
    cout<<"Enter the initialAmount For(Saving is>= 500) and Current >=1000"<<endl;
    cin>>balance;
    cout<<"Your Bank Account Created Successfully...!"<<endl;
}

void BankAccount ::show_Accountdetails(){
    cout<<"Account Holder Information : "<<endl;
    cout<<"Account No: "<<accno<<endl;
    cout<<"Account Name : "<<name<<endl;
    cout<<"Account Type : "<<type<<endl;
    cout<<"Balance Amount : "<<balance<<endl;
}

void BankAccount ::depost_amount(int dept){
    balance=balance+dept;
    cout<<"Amount deposited successfully and Total Balance is:  "<<balance<<endl;
}

void BankAccount ::withdraw_amount(int wt){
    balance=balance-wt;
    cout<<"Amount Withdrawal successfull...! "<<endl;
    cout<<"after withdrawal the balance amount is : "<<balance<<endl;
}

void intro(){
  cout<<"*******************************************"<<endl;
   cout<<"Bank Management Systemt "<<endl;
   cout<<"*******************************************"<<endl;
}



int main(){
      int deposit;
      int wthd;
      intro();
      char choice;
      BankAccount bacobj;

    do{
    cout<<"Main Menu :"<<endl;
    cout<<"1.OpenNewAccount : "<<endl;
    cout<<"2.Deposit Amount: "<<endl;
    cout<<"3.Withdraw Amount:"<<endl;
    cout<<"4.Show_Account_Details:"<<endl;
    cout <<"5.exit"<<endl;
    cout<<"Enter the Choice :"<<endl;
    cin>>choice;
    switch (choice)
    {
    case '1': cout<<"Opening New Account :"<<endl;
                bacobj.create_account();
               break;
    case '2':cout<<"Enter the amount to deposit : "<<endl;
             cin>>deposit;
              bacobj.depost_amount(deposit);
              break;
    case '3':cout<<"Enter the amount to Withdraw :"<<endl;
             cin>>wthd;
             bacobj.withdraw_amount(wthd);
             break;
    case '4': bacobj.show_Accountdetails();
              cout<<"\n";
              break;
    case '5':cout<<"\n Thank You For Using BankManagementSystem : "<<endl;
             break;              
    
    default:
        break;
    }

    }while(choice!='5');

}