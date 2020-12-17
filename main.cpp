#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    //system("color a");
    cout<<"\t\t\tWelcome To Ma3re2a ATM Bank"<<endl;
int pin,choice , balance , withdraw , depoit;
balance = 1000;
int try_again = true;

while(pin != 1234){
 cout<< "Enter You Pin : ";
     cin>>pin;
}
         if(pin == 1234){
            cout<<"\t\tWelcom Abdullatif Sanussi\n";
         }
     do{
        cout<<"0. View Your Account"<<endl;
        cout<<"1. Check account "<<endl;
        cout<<"2. Withdrow cash"<<endl;
        cout<<"3. Deposit Cash"<<endl;
        cout<<"4. Quick"<<endl;
        cout<<"Chose From The Menu : ";
        cin>>choice;

        switch(choice){
    case 1:
            system("color 7");
        cout<<"Your Balance is : $"<< balance << endl;
break;
    case 2:
            system("color 7");
        cout << "Enter The Amount to Withdrar :";
        cin >> withdraw ;
        if(withdraw > balance){
                system("color 4");
            cout<<"\a\aYou Don't Have Enough mony .....";
        }else{
        balance = balance - withdraw;
        system("color 7");
        cout<<"your balance is : $"<< balance << endl;
break;
        }
    case 3:
        system("color 7");
        cout<<"Enter The Amount : ";
        cin>>depoit;
        balance = balance + depoit;
        cout<<"your balance is : $"<< balance << endl;
break;
    case 0:
        cout<<"Name :\t\t Abdullatif Sanosse"<<endl;
        cout<<"Your Money is  : "<< balance<<endl;
        break;
    case 4:
        cout<<"***** Thank You To Use Mearefa B ATM"<<endl;
        try_again = false;
break;

default:
        system("color 4");
cout<<"\a\athe number does not exist .....>"<<endl;
break;
        }
     }while(try_again !=false);
}
