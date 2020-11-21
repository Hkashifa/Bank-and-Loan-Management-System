#include "DEPO_ACC.H"
#include "BASIC_BANK.H"
#include<bits/stdc++.h>
using namespace std;
/*deposit::deposit()
{
    //ctor
}

deposit::~deposit()
{
    //dtor
}*/
void depo_acc::open(int z)
{
    int a;
    float bl;
    long int ph;
    string n,t,d2,e,ads;
    int yr_md;
    int amount;
    float interest;
//start
    Bank b;
    depo_acc d[20];
    fstream File;
    File.open("Deposit.txt");
//saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d2>>ads>>yr_md>>amount>>interest)
    {
        d[i].ac_no=a;
        d[i].balance=bl;
        d[i].name=n;
        d[i].account_type=t;
        d[i].phone_no=ph;
        d[i].email=e;
        d[i].date_of_birth=d2;
        d[i].address=ads;
        d[i].year_made=yr_md;
        d[i].amount_per_year=amount;
        d[i].interest_in_percentage=interest;
        i++;
    }
    File.close();
//end
    ofstream Customer_Records("Deposit.txt");
//int acc_num=10002;

    fstream Filea;
    Filea.open("account_track_1.txt");

    int track, acc_num, new_track;
    while(Filea>>track)
    {
        acc_num=track;
    }
    Filea.close();
    new_track=track+z;
    ofstream File1;
    File1.open("account_track_1.txt",ios::trunc);

    File1<<new_track<<endl;

    File1.close();
   // int again=i;

    int j;
    for(j=0; j<z; j++)
    {
        //  cout<<"PRESS CTRL Z WHEN DONE"<<endl;

        //changed i to j
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
        cin>>d2;
        cout<<"ADDRESS"<<endl;
        cin>>ads;
        cout<<"ACCOUNT MADE IN YEAR"<<endl;
        cin>>yr_md;
        /*cout<<"AMOUNT TO BE GIVEN"<<endl;
        cin>>amount;*/
        cout<<"INTEREST"<<endl;
        cin>>interest;

        amount=get_money(bl,interest);

        d[i].ac_no=a;
        d[i].balance=bl;
        d[i].name=n;
        d[i].account_type=t;
        d[i].phone_no=ph;
        d[i].email=e;
        d[i].date_of_birth=d2;
        d[i].address=ads;
        d[i].year_made=yr_md;
        d[i].amount_per_year=amount;
        d[i].interest_in_percentage=interest;
        i++;
    }

    ofstream File2;
    File2.open("Deposit.txt",ios::trunc);

    for (int m=0; m<i; m++)
    {

        File2<<d[m].ac_no<<" "<<d[m].balance<<" "<<d[m].name<<" "<<d[m].account_type<<" "<<d[m].phone_no<<" "<<d[m].email<<" "<<d[m].date_of_birth<<" "<<d[m].address<<" "<<d[m].year_made<<" "<<d[m].amount_per_year<<" "<<d[m].interest_in_percentage<<endl;
    }
    File2.close();
}

void depo_acc::deposit(int j)
{
    int a;
    float bl;
    long int ph;
    string n,t,d2,e,ads;
    int yr_md=0;
    int amount=0;
    float interest=0.0;
    int bnc=0;
    depo_acc d[20];
    //cout<<"ENTER THE AMOUNT OF MONEY:BDT"<<endl;
    //cin>>bnc;
    //opens file to save info
    fstream File;
    File.open("Deposit.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d2>>ads)
    {
        d[i].ac_no=a;
        d[i].balance=bl;
        d[i].name=n;
        d[i].account_type=t;
        d[i].phone_no=ph;
        d[i].email=e;
        d[i].date_of_birth=d2;
        d[i].address=ads;
        d[i].year_made=yr_md;
        d[i].amount_per_year=amount;
        d[i].interest_in_percentage=interest;
        i++;
    }
    File.close();

    for(int k=0; k<i; k++)
    {
        if(d[k].ac_no==j)
        {
            d[k].balance=d[k].balance+bnc;
        }
    }
    //clear file and put new info into file
    ofstream File1;
    File1.open("Deposit.txt",ios::trunc);

    for (int m=0; m<i; m++)
    {

        File1<<d[m].ac_no<<" "<<d[m].balance<<" "<<d[m].name<<" "<<d[m].account_type<<" "<<d[m].phone_no<<" "<<d[m].email<<" "<<d[m].date_of_birth<<" "<<d[m].address<<" "<<d[m].year_made<<" "<<d[m].amount_per_year<<" "<<d[m].interest_in_percentage<<endl;
    }
    File1.close();
}


void depo_acc::update(int op)
{
    int a;
    float bl;
    long int ph;
    string n,t,d2,e,ads;
    depo_acc d[20];
    int yr_md;
    int amount;
    float interest;

    string nm1;
    long int phone_num;
    string email1,address1;
    int choice;
    //opens file to save info
    fstream File;
    File.open("Deposit.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d2>>ads>>yr_md>>amount>>interest)
    {
        d[i].ac_no=a;
        d[i].balance=bl;
        d[i].name=n;
        d[i].account_type=t;
        d[i].phone_no=ph;
        d[i].email=e;
        d[i].date_of_birth=d2;
        d[i].address=ads;
        d[i].year_made=yr_md;
        d[i].amount_per_year=amount;
        d[i].interest_in_percentage=interest;
        i++;
    }
    File.close();

    //Edits info
    for(int q=0; q<i; q++)
    {
        if(d[q].ac_no==op)
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
                d[q].name=nm1;
            }
            else if(choice==2)
            {
                cout<<"ENTER NEW NUMBER"<<endl;
                cin>>phone_num;
                d[q].phone_no=phone_num;
            }
            else if(choice==3)
            {
                cout<<"ENTER NEW EMAIL ADDRESS"<<endl;
                cin>>email1;
                d[q].email=email1;
            }
            else if(choice==4)
            {
                cout<<"ENTER NEW EMAIL ADDRESS"<<endl;
                cin>>address1;
                d[q].address=address1;
            }
            else
            {
                cout<<"INVALID ENTRY"<<endl;
            }
        }

    }

    //clear file and put new info into file
    ofstream File1;
    File1.open("Deposit.txt",ios::trunc);

    for (int m=0; m<i; m++)
    {

        File1<<d[m].ac_no<<" "<<d[m].balance<<" "<<d[m].name<<" "<<d[m].account_type<<" "<<d[m].phone_no<<" "<<d[m].email<<" "<<d[m].date_of_birth<<" "<<d[m].address<<" "<<d[m].year_made<<" "<<d[m].amount_per_year<<" "<<d[m].interest_in_percentage<<endl;
    }
    File1.close();

}


int depo_acc::get_money(int blance,float inrest)
{  /* int a;
    float bl;
    long int ph;
    string n,t,d2,e,ads;
    int yr_md;
    int amount;
    float interest;
    depo_acc d[20];

    // int total;
    //opens file to save info
    fstream File;
    File.open("Deposit.txt");
    //saves info into objects
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d2>>ads>>yr_md>>amount>>interest)
    {
        d[i].ac_no=a;
        d[i].balance=bl;
        d[i].name=n;
        d[i].account_type=t;
        d[i].phone_no=ph;
        d[i].email=e;
        d[i].date_of_birth=d2;
        d[i].address=ads;
        d[i].year_made=yr_md;
        d[i].amount_per_year=amount;
        d[i].interest_in_percentage=interest;
        i++;
    }
    File.close();

    for(int k=0; k<i; k++)
    {
        if(d[k].ac_no==j)
        { */
            float total;
            float total_2;
            //cout<<"balance"<<d[k].balance<<endl;
            total_2=blance*3*inrest;
            //cout<<"total_2"<<total_2<<endl;
            total=total_2+(total_2*0.27);
           // cout<<"total"<<total<<endl;
            return blance+inrest;
   /*     }
    }
    //clear file and put new info into file
    ofstream File1;
    File1.open("Deposit.txt",ios::trunc);
    int m;
    for (m=0; m<i; m++)
    {

        File1<<d[m].ac_no<<" "<<d[m].balance<<" "<<d[m].name<<" "<<d[m].account_type<<" "<<d[m].phone_no<<" "<<d[m].email<<" "<<d[m].date_of_birth<<" "<<d[m].address<<" "<<d[m].year_made<<" "<<d[m].amount_per_year<<" "<<d[m].interest_in_percentage<<endl;
    }
    File1.close();*/

}

void depo_acc::ac_delete(int del)
{

    int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    depo_acc dp[20];

    int yr_md=0;
    int amount=0;
    float interest=0.0;

    //Bank b[20];
    //opens file to save info
    fstream File;
    File.open("Deposit.txt");

    //saves info into objects
    //int acc_num=2031;
    int i=0;
    while(File>>a>>bl>>n>>t>>ph>>e>>d>>ads>>yr_md>>amount>>interest)
    {
//        if()
        dp[i].ac_no=a;
        dp[i].balance=bl;
        dp[i].name=n;
        dp[i].account_type=t;
        dp[i].phone_no=ph;
        dp[i].email=e;
        dp[i].date_of_birth=d;
        dp[i].address=ads;
        dp[i].year_made=yr_md;
        dp[i].amount_per_year=amount;
        dp[i].interest_in_percentage=interest;
        i++;
    }
    File.close();

    fstream Deactive;
    Deactive.open("Deactivated.txt");
    //Deactive<<"test";
    for(int k=0; k<i; k++)
    {
        //Deactive<<"  tst";
        if(dp[k].ac_no==del)
        {
            Deactive<<dp[k].ac_no<<" "<<dp[k].balance<<" "<<dp[k].name<<" "<<dp[k].account_type<<" "<<dp[k].phone_no<<" "<<dp[k].email<<" "<<dp[k].date_of_birth<<" "<<dp[k].address<<" "<<dp[k].year_made<<" "<<dp[k].amount_per_year<<" "<<endl;
        }
        //  Deactive<<b[k].ac_no<<b[k].balance<<b[k].name<<b[k].account_type<<b[k].phone_no<<b[k].email<<b[k].date_of_birth<<b[k].address;
        dp[k].ac_no='\0';
        dp[k].balance='\0';
        dp[k].name=" ";
        dp[k].account_type=" ";
        dp[k].phone_no='\0';
        dp[k].email=" ";
        dp[k].date_of_birth=" ";
        dp[k].address=" ";
        dp[k].year_made=0;
        dp[k].amount_per_year=0;
        dp[k].interest_in_percentage=0;
        //i++;
    }

    Deactive.close();
    //clear file and put new info into file
    ofstream File1;
    File1.open("Deposit.txt",ios::trunc);

    for (int m=0; m<i; m++)
    {

        File1<<dp[m].ac_no<<" "<<dp[m].balance<<" "<<dp[m].name<<" "<<dp[m].account_type<<" "<<dp[m].phone_no<<" "<<dp[m].email<<" "<<dp[m].date_of_birth<<" "<<dp[m].address<<" "<<dp[m].year_made<<" "<<dp[m].amount_per_year<<" "<<endl;
    }
    File1.close();
}

void depo_acc::display(int m)
{


 fstream theFile("Deposit.txt");

    //if(account==m)
    {
       ifstream theFile("Deposit.txt");

        int a;
    float bl;
    long int ph;
    string n,t,d,e,ads;
    bool flag;
        int yr_md=0;
    int amount=0;
    float interest=0.0;


       while(theFile>>a>>bl>>n>>t>>ph>>e>>d>>ads>>yr_md>>amount>>interest)
       {

            if(a==m)
           {flag=1;
               cout  <<"ACCOUNT:                    "<<a<<"\n"
                    << "BALANCE:                        " <<bl<<"\n"
                    <<"NAME:                              " <<n<<"\n"
                     <<"ACCOUNT TYPE:             " <<t<<"\n"
                     <<"PHONE NUMBER:            " <<ph<<"\n"
                     <<"EMAIL ADDRESS:           "<<e<<"\n"
                     <<"DATE FO BIRTH:            "<<d<<"\n"
                     <<"ADDRESS:                       "<<ads<<"\n"
                     <<"YEAR:                              "<<yr_md<<"\n"
                     <<"AMOUNT TO BE GIVEN  "<<amount<<"\n"
                     <<"INTEREST                      "<<interest<<"\n"
                     <<endl;
       }
    }
    if(flag!=1)
    {
        cout<<"Account does not exist"<<endl;
    }
}}
