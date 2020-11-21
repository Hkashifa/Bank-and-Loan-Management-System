#include "BASIC_BANK.H"
#include<bits/stdc++.h>
using namespace std;

/*Basic_Bank::Basic_Bank()
{
    //ctor
}

Basic_Bank::~Basic_Bank()
{
    //dtor
}*/
Bank::Bank():account(0),balance(0.0),name(" "),account_type(" "),phone_no(0),email(" "),date_of_birth(" "),address(" ")
{

}
void Bank::set_account(int n)
{
    account=n;
}
void Bank::set_balance(float b)
{
    balance=b;
}
void Bank::set_name(std::string nm)
{
    name=nm;
}
void Bank::set_account_type(std::string acc_type)
{
    account_type=acc_type;
}
void Bank::set_phone_no(long int ph_no)
{
    phone_no=ph_no;
}
void Bank::set_email(std::string em)
{
    email=em;
}
void Bank::set_date_of_birth(std::string dob)
{
    date_of_birth=dob;
}
void Bank::set_address(std::string add)
{
    address=add;
}

//get functions
int Bank::get_account()
{
    return account;
}
float Bank::get_balance()
{
    return balance;
}
std::string Bank::get_name()
{
    return name;
}
std::string Bank::get_account_type()
{
    return account_type;
}
long int Bank::get_phone_no()
{
    return phone_no;
}
std::string Bank::get_email()
{
    return email;
}
std::string Bank::get_date_of_birth()
{
    return date_of_birth;
}
std::string Bank::get_address()
{
    return address;
}


void Bank :: open(int z)
{

    int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    //start
    Bank b[20];
    fstream File;
    File.open("Customer.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads)
    {
        b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
    }
    File.close();


    //end
          ofstream Customer_Records("Customer.txt");
         //int acc_num=10002;

         fstream Filea;
    Filea.open("account_track.txt");

    int track, acc_num, new_track;
    while(Filea>>track)
    {
        acc_num=track;
    }
    Filea.close();
    new_track=track+z;
    ofstream File1;
    File1.open("account_track.txt",ios::trunc);

    File1<<new_track<<endl;

    File1.close();
    int again=i;

    int j;
           for(int j=0;j<z;j++)
                {
  //  cout<<"PRESS CTRL Z WHEN DONE"<<endl;


    cout<<"ACCOUNT NUMBER:"<<endl;
    if(i==0)
    {
        a=acc_num;
    }
    if(i>0)
    {
        acc_num++;
        a=acc_num;
    }



    cout<<a;
       cout<<"ENTER :"<<endl;
       cout<<"\n"<<endl;
    cout<<"BALANCE:"<<endl;
    cin>>bl;
    cout<<"NAME"<<endl;
    cin>>n;
    cout<<"ACCOUNT TYPE"<<endl;
    cin>>t;
    cout<<"PHONE NUMBER:"<<endl;
    cin>>ph;
    cout<<"EMAIL:"<<endl;
    cin>>e;
    cout<<"DATE OF BIRTH:"<<endl;
    cin>>d;
    cout<<"ADDRESS"<<endl;
     cin>>ads;
      b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
                }

        ofstream File2;
                 File2.open("Customer.txt",ios::trunc);

    for (int m=0;m<i;m++)
    {

        File2<<b[m].ac_no<<" "<<b[m].balance<<" "<<b[m].name<<" "<<b[m].account_type<<" "<<b[m].phone_no<<" "<<b[m].email<<" "<<b[m].date_of_birth<<" "<<b[m].address<<endl;
    }
    File2.close();
}
void Bank::deposit(int j)
{
    //get bank balance

        int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    Bank b[20];

    int bnc;
    cout<<"ENTER THE AMOUNT OF MONEY:BDT"<<endl;
    cin>>bnc;
    //opens file to save info
    fstream File;
    File.open("Customer.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads)
    {
        b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
    }
    File.close();

    for(int k=0;k<i;k++)
    {
        if(b[k].ac_no==j)
        {
            b[k].balance=b[k].balance+bnc;
        }
    }
    //clear file and put new info into file
    ofstream File1;
    File1.open("Customer.txt",ios::trunc);

    for (int m=0;m<i;m++)
    {

        File1<<b[m].ac_no<<" "<<b[m].balance<<" "<<b[m].name<<" "<<b[m].account_type<<" "<<b[m].phone_no<<" "<<b[m].email<<" "<<b[m].date_of_birth<<" "<<b[m].address<<endl;
    }
    File1.close();
   /* if(account == j)
    {

        balance=balance+bnc;
        cout<<"BALANCE UPDATED"<<endl;
    }
    else
    {
        cout<<"Account does not exist"<<endl;
    }*/
}


void Bank::update(int op)
{    int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    Bank b[20];

      string nm1;
        long int phone_num;
        string email1,address1;
        int choice;
    //opens file to save info
    fstream File;
    File.open("Customer.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads)
    {
        b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
    }
    File.close();

    //Edits info
    for(int q=0;q<i;q++)
    {
        if(b[q].ac_no==op)
    {

        cout<<"WHICH INFORMATION WOULD YOU LIKE TO CHANGE"<<endl;

        cout<<"1.NAME"<<endl;
        cout<<"2.PHONE NUMBER"<<endl;
        cout<<"3.EMAIL ADDRESS"<<endl;
        cout<<"4.ADDRESS"<<endl;
        cin>>choice;

          if(choice==1)
        {
            cout<<"ENTER NEW NAME"<<endl;
            cin>>nm1;
            b[q].name=nm1;
        }
       else if(choice==2)
        {
            cout<<"ENTER NEW NUMBER"<<endl;
            cin>>phone_num;
            b[q].phone_no=phone_num;
        }
       else if(choice==3)
        {
            cout<<"ENTER NEW EMAIL ADDRESS"<<endl;
            cin>>email1;
            b[q].email=email1;
        }
       else if(choice==4)
        {
            cout<<"ENTER NEW EMAIL ADDRESS"<<endl;
            cin>>address1;
            b[q].address=address1;
        }
       else
       {
           cout<<"INVALID ENTRY"<<endl;
       }
       }

    }

    //clear file and put new info into file
    ofstream File1;
    File1.open("Customer.txt",ios::trunc);

    for (int m=0;m<i;m++)
    {

        File1<<b[m].ac_no<<" "<<b[m].balance<<" "<<b[m].name<<" "<<b[m].account_type<<" "<<b[m].phone_no<<" "<<b[m].email<<" "<<b[m].date_of_birth<<" "<<b[m].address<<endl;
    }
    File1.close();

}



void Bank::withdraw(int w)
{
    float blnc,p;

        int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    Bank b[20];

    cout<<"ENTER AMOUNT OT BE WITHDRAWN"<<endl;
    cin>>p;
    //opens file to save info
    fstream File;
    File.open("Customer.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads)
    {
        b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
    }
    File.close();

    for(int k=0;k<i;k++)
    {
        if(b[k].ac_no==w)
        {

            blnc=b[k].balance-p;
            if(blnc<0)
            {
                cout<<"NOT ENOUGH MONEY IN ACCOUNT "<<endl;
            }
            else if(blnc>0)
            {
                b[k].balance=blnc;
            }

        }
    }
    //clear file and put new info into file
    ofstream File1;
    File1.open("Customer.txt",ios::trunc);

    for (int m=0;m<i;m++)
    {

        File1<<b[m].ac_no<<" "<<b[m].balance<<" "<<b[m].name<<" "<<b[m].account_type<<" "<<b[m].phone_no<<" "<<b[m].email<<" "<<b[m].date_of_birth<<" "<<b[m].address<<endl;
    }
    File1.close();

}
void Bank::display_all(void)
{

       ifstream theFile("Customer.txt");

        int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;

       while(theFile>>a>>bl>>n>>t>>ph>>e>>d>>ads)
       {

           cout   <<"ACCOUNT:               "<<a<<"\n"
                     << "BALANCE:              " <<bl<<"\n"
                     <<"NAME:                    " <<n<<"\n"
                     <<"ACCOUNT TYPE:   "  <<t<<"\n"
                     <<"PHONE NUMBER:  "  <<ph<<"\n"
                     <<"EMAIL ADDRESS: "   <<e<<"\n"
                     <<"DATE FO BIRTH:   "  <<d<<"\n"
                     <<"ADDRESS"<<ads<<endl;
                     cout<<"\n";
       }
theFile.close();



}


void Bank::display(int m)
{


 fstream theFile("Customer.txt");

    //if(account==m)
    {
       ifstream theFile("Customer.txt");

        int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    bool flag;

       while(theFile>>a>>bl>>n>>t>>ph>>e>>d>>ads)
       {

            if(a==m)
           {flag=1;
               cout  <<"ACCOUNT:           "<<a<<"\n"
                    << "BALANCE:              " <<bl<<"\n"
                    <<"NAME:                    " <<n<<"\n"
                     <<"ACCOUNT TYPE:   " <<t<<"\n"
                     <<"PHONE NUMBER:  " <<ph<<"\n"
                     <<"EMAIL ADDRESS:  "<<e<<"\n"
                     <<"DATE FO BIRTH:   "<<d<<"\n"
                     <<"ADDRESS:              "<<ads<<endl;
                     cout<<"\n";
       }
    }
    if(flag!=1)
    {
        cout<<"Account does not exist"<<endl;
    }
}

}
void Bank::ac_delete(int del)
{

     int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    Bank b[20];


    //Bank b[20];
    //opens file to save info
    fstream File;
    File.open("Customer.txt");

    //saves info into objects
    //int acc_num=2031;
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads)
    {
//        if()
        b[i].ac_no=a;
        b[i].balance=bl;
        b[i].name=n;
        b[i].account_type=t;
        b[i].phone_no=ph;
        b[i].email=e;
        b[i].date_of_birth=d;
        b[i].address=ads;
        i++;
    }
    File.close();

    fstream Deactive;
    Deactive.open("Deactivated.txt");
    //Deactive<<"test";
    for(int k=0;k<i;k++)
    {
        //Deactive<<"  tst";
        if(b[k].ac_no==del)
        {
            Deactive<<b[k].ac_no<<" "<<b[k].balance<<" "<<b[k].name<<" "<<b[k].account_type<<" "<<b[k].phone_no<<" "<<b[k].email<<" "<<b[k].date_of_birth<<" "<<b[k].address;
          //  Deactive<<b[k].ac_no<<b[k].balance<<b[k].name<<b[k].account_type<<b[k].phone_no<<b[k].email<<b[k].date_of_birth<<b[k].address;
        b[k].ac_no='\0';
        b[k].balance='\0';
        b[k].name=" ";
        b[k].account_type=" ";
        b[k].phone_no='\0';
        b[k].email=" ";
        b[k].date_of_birth=" ";
        b[k].address=" ";
        //i++;
        }
    }
    Deactive.close();
    //clear file and put new info into file
    ofstream File1;
    File1.open("Customer.txt",ios::trunc);

    for (int m=0;m<i;m++)
    {

        File1<<b[m].ac_no<<" "<<b[m].balance<<" "<<b[m].name<<" "<<b[m].account_type<<" "<<b[m].phone_no<<" "<<b[m].email<<" "<<b[m].date_of_birth<<" "<<b[m].address<<endl;
    }
    File1.close();
}
