#include<iostream>
using namespace std ;

class Bdetails
{
    string name ;
    int intial_ammount ;
    static int count;

public:



    void withdrawal(int amount )//Member function for WITHDRWAING amount
    {
        do
        {
            if(amount<=0)
            {
                cout<<"\n  Please enter the valid amount : ";
                cin>>amount;
            }
            intial_ammount-=amount;
            cout<<"\n YOUR AMOUNT AFTER WITHDRAWAL IS : "<<intial_ammount;

        }
        while(amount<=0);

    }

    void Deposit(int amount)  // Member function for depositing amount
    {
        do
        {
            if(amount<=0)
            {
                cout<<"\n  Please enter the valid amount : ";
                cin>>amount;
            }
            intial_ammount+=amount;
            cout<<"\n YOUR AMOUNT AFTER DEPOSIT IS : "<<intial_ammount;

        }
        while(amount<=0);
    }

    void Check(){
         cout<<"\n YOUR AMOUNT  IS : "<<intial_ammount;

    }

    void getdata()
    {
        cout<<" \n Enter the name of the user : " ;
        cin.ignore();
        getline(cin,name);

        do
        {

            cout<<"\n Enter the  intial amount you want to deposits : ";
            cin>>intial_ammount;
            if(intial_ammount<=500)
                cout<<" \n Enter Amount greater  than 500  : ";

        }
        while(intial_ammount<=500);

        count ++ ;
    }

    void showdata()
    {

        cout<<"\n Your name is : "<<name<<endl;
        cout<<" Your bank balace is : "<<intial_ammount<<endl;

    }

    static void total()
    {
        cout<<"\n Total accounts created : "<<count;

    }

};

int Bdetails :: count =0; // USING STATIC VARIABLE AND INTAILIZING IT
int main()
{
    int n;
    cout<<"\n Enter the no of objects you want to create :";
    cin>>n;

    Bdetails s[n];

    for(int i=0; i<n; i++) // LOOP FOR GETTING DATA

    {
        cout<<"\n                    -----------Enter data for  Customer NO : "<<i+1<<"---------------";
        s[i].getdata(); // CALLING FUNCTION OF getdata

    }

    for(int i =0; i<n; i++)// loop for showing data on the screen
    {
        cout<<"\n                   -----------Customer NO : "<<i+1<<"---------------";

        s[i].showdata();//CALLING FUNCTION OF showdata

    }

    Bdetails :: total(); // Calling static function . while calling static function we dont have to call it with object of class.


    int choice,Accno,amount;
      cout<<"\n 1. withdrawal \n 2.Depositing balance \n 3.checking Balance "<<endl; // MENU
    cout<<"\n Enter the choice ";
    cin>>choice ;

    do
    {


        if(choice<1||choice>4)
           { cout<<"\nPlease Enter the correct choice ";
            cin>>choice;
           }

        switch(choice)
        {
        case 1:
            cout<<"\n Enter the account no : ";
            cin>>Accno;
            cout<<"\n Enter the withdrawal Amount ";
            cin>>amount;
            s[Accno -1].withdrawal(amount);
            break;
        case 2:
            cout<<"\n Enter the account no : ";
            cin>>Accno;
            cout<<"\n Enter the Deposit Amount ";
            cin>>amount;
            s[Accno -1].Deposit(amount);
            break ;

        case 3:
            cout<<"\n Enter the account no : ";
            cin>>Accno;
            s[Accno -1].Check();
            break;

        case 4 :
            cout<<"\n EXITING program ";
            break;



        }


    }
    while(choice<1||choice>4);


    return 0;


}
// IN this program i used do while loop for input validation which makes the program more profeesional.
