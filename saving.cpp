#include "SAVING.H"
#include "BASIC_BANK.H"
#include<bits/stdc++.h>
using namespace std;
/*saving::saving()
{
    //ctor
}*/
void saving::total_money(int m)
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

                   cout << "AMOUNT  IN  SAVINGS:              " <<bl<<"\n"<<endl;

       }
    }
    if(flag!=1)
    {
        cout<<"Account does not exist"<<endl;
    }
}
}//saving::~saving()
//{
    //dtor
//}
