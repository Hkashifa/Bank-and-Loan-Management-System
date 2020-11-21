#include "LOAN.H"
#include "BASIC_BANK.H"
#include<bits/stdc++.h>
//Loan::Loan()
//{
    //ctor
//}

//Loan::~Loan()
//{
    //dtor
//}
void Loan::calculates_interest(int a,int y,int r)
{
           std::cout<<"INTEREST DUE:"<<std::endl;

           std::cout<<a*(r/100)*y<<std::endl;
}
Loan::tests_qualification_for_loan(long int income)
{
        if(income<1000)
        {
            std::cout<<"NOT ELIGIBLE FOR ANY PLAN"<<std::endl;
            return 0;

        }
        else if(income<2000)
        {
            std::cout<<"ELIGIBLE FOR PLAN_1 "<<std::endl;
            return 1;
        }
        else if(income<3000)
        {
            std::cout<<"ELIGIBLE FOR PLAN_1 AND PLAN_2 "<<std::endl;
            return 1;
        }
        else
        {
            std::cout<<"ELIGIBLE FOR ALL AVAILABLE PLANS "<<std::endl;
            return 1;
        }



}
void Loan::take_loan()
{

        int ac;
        long int am=0;
        int t;
        int in;
     //    int a=0;
         int plan;
        std::cout<<"ENTER ACCOUNT NUMBER"<<std::endl;
        std::cin>>ac;
        std::cout<<"CHOOSE PLAN:"<<std::endl;

        std::cout<<"PLAN_1                       PLAN_2                        PLAN_3"<<std::endl;
        std::cout<<"AMOUNT : 50,000 tk| AMOUNT : 150,000 tk|  AMOUNT : 200,000 tk"<<std::endl;
        std::cout<<"TERM : 2 YEARS       | TERM : 3 YEARS         |  TERM : 3.5 YEARS                "<<std::endl;
        std::cout<<"INTEREST RATE:2%|  INTEREST RATE:3%  |   INTEREST RATE:3.25%          "<<std::endl;
//        int plan;
        std::cin>>plan;
        if(plan==1)
        {
            am=50000;
            t=2;
            in=2;
                    }
        else if(plan==2)
        {
            am=150000;
            t=3;
            in=3;
                    }
                else if(plan==3)
        {
            am=200000;
            t=3.5;
            in=3.25;
                    }


          std::fstream Loan_Records;
           Loan_Records.open("Loan_record.txt");

          Loan_Records<<ac<<" "<<am<<" "<<t<<" "<<in;

                  Loan_Records.close();
}
void Loan::pending()
{

    int acc;
    int t;
    int l_a;
    int i_r;
    Loan l[20];

    int act;
    std::cout<<"ENTER ACCOUNT NUMBER:"<<std::endl;
    std::cin>>act;
    //opens file to save info
    std::fstream File;
    File.open("Loan_record.txt");
    //saves info into objects
    int i=0;
    while(File>>acc>>l_a>>t>>i_r)
    {
        l[i].ac_no=acc;
        l[i].loan_amount=l_a;
         l[i].term=t;
         l[i].interest=i_r;
        i++;
    }
    File.close();
     int flag=0;
    for(int k=0;k<i;k++)
    {
        if(l[k].ac_no==act)
        {
            flag=1;
            std::cout<<"LOAN AMOUNT:  "<<    l[k].loan_amount<<std::endl;
            std::cout<<"TERM: "<<  l[k].term<<std::endl;
            std::cout<<"INTEREST: "<<l[k].interest<<"per annum"<<std::endl;
        }
    }
    if(flag==0)
    {
        std::cout<<"NO LOAN PENDING"<<std::endl;
        std::cout<<"NO LOAN PENDING"<<std::endl;
    }

}
