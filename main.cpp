#include <bits/stdc++.h>
#include "BASIC_BANK.H"
#include "LOAN.H"
#include "SAVING.H"
#include "DEPO_ACC.H"
using namespace std;

int main()
{
    cout<<"\n"<<endl;
    cout<<"*********************BANK MANAGEMENT SYSTEM*********************"<<endl;
    cout<<"\n\n"<<endl;
    int i,j,w,m,y=0,o,ad;
    i=0;
    depo_acc dp[20];
    Loan Lo[20];
    Bank b[20];
    saving s[20];

    int index;
    do
    {
        cout<<"______________________________________________________________\n"<<endl;
        cout<<"  PRESS 1    TO   OPEN ACCOUNT       "<<endl;
        cout<<"  PRESS 2    TO   DEPOSIT MONEY"<<endl;
        cout<<"  PRESS 3    TO   WITHDRAW MONEY"<<endl;
        cout<<"  PRESS 4    TO   DISPLAY  INFORMATION  OF ALL ACCOUNTS"<<endl;
        cout<<"  PRESS 5    TO   DISPLAY INFORMATION   OF  A SPECIFIC ACCOUNT"<<endl;
        cout<<"  PRESS 6    TO   UPDATE ACCOUNT INFORMATION"<<endl;
        cout<<"  PRESS 7    TO   CLOSE AN ACCOUNT"<<endl;
        cout<<"  PRESS 8    TO   TAKE LOAN"<<endl;
        cout<<"  PRESS 9    TO   EXIT"<<endl;


        cin>>index;

        switch(index)
        {

        case 1:
        {

            cout<<"HOW MANY ACCOUNTS DO YOU WANT TO OPEN(CAN MAKE ONE KIND OF MULTIPLE ACCOUNTS)"<<endl;
            cin>>y;

            // for(i=0; i<y; i++)*/
            {
                cout<<"PICK TYPE OF ACCOUNTS:"<<endl;
                cout<<"D for DEPOSIT ACCOUNT"<<endl;
                cout<<"N for NORMAL ACCOUNT"<<endl;
                char c;
                cin>>c;
                if(c=='D'||c=='d')
                {
                    dp[i].open(y);
                }
                else if(c=='N'||c=='n')
                {
                    s[i].open(y);
                }
                    // break;


                    //Bank c[i].(a,b,n,t,ph,e,d,ads);
                    //tried using above constructor but got error saying ''expected initializer before '.' token
                }
            cout<<"Account Creation Successful"<<endl;
            break;
        }

        case 2:
        {
            char t;
            cout<<"ENTER ACCOUNT TYPE: "<<endl;
            cout<<"S FOR SAVINGS"<<endl;
            cout<<"D FOR DEPOSIT"<<endl;
            cin>>t;

            cout<<"ENTER ACCOUNT NUMBER"<<endl;
            cin>>j;
            if(t=='S' || t=='s')
            {
                b[i].deposit(j);
                s[i].total_money(j);
            }
            else if(t=='D'||t=='d')
            {
                b[i].deposit(j);
            }
            break;
        }
        case 3:
        {
           char t;
            cout<<"ENTER ACCOUNT TYPE: "<<endl;
            cout<<"S FOR SAVINGS"<<endl;
            cout<<"D FOR DEPOSIT"<<endl;
            cin>>t;

            cout<<"ENTER ACCOUNT NUMBER"<<endl;
            int num;
            cin>>num;
            if(t=='S' || t=='s')
            {
                s[i].withdraw(num);
            }

        }
        case 4:
        {

            //for(i=0; i<y; i++)
            //{
            b[i].display_all();
            //}
            break;

        }
        case 5:
        {
             char t;
            cout<<"ENTER ACCOUNT TYPE: "<<endl;
            cout<<"S FOR SAVINGS"<<endl;
            cout<<"D FOR DEPOSIT"<<endl;
            cin>>t;

            cout<<"ENTER ACCOUNT NUMBER"<<endl;
            int m;
            cin>>m;
            if(t=='S' || t=='s')
            {
                s[i].display(m);
            }
            else if(t=='D'||t=='d')
            {
                dp[i].display(m);
            }
            break;
            }

        case 6:
        {
            cout<<"ENTER ACCOUNT NUMBER"<<endl;
            cin>>o;
            cout<<"TYPE OF ACCOUNT:"<<endl;
                cout<<"D for DEPOSIT ACCOUNT"<<endl;
                cout<<"N for NORMAL ACCOUNT"<<endl;
                char c;
                cin>>c;
                if(c=='D'||c=='d')
                {
                    dp[i].update(o);
                }
                else if(c=='N'||c=='n')
                {
                    s[i].update(o);
                }
                break;
        }
        case 7:
        {
            cout<<"ENTER ACCOUNT NUMBER"<<endl;
            cin>>ad;
                cout<<"TYPE OF ACCOUNT:"<<endl;
                cout<<"D for DEPOSIT ACCOUNT"<<endl;
                cout<<"N for NORMAL ACCOUNT"<<endl;
                char c;
                cin>>c;
                if(c=='D'||c=='d')
                {
                    dp[i].ac_delete(ad);
                }
                else if(c=='N'||c=='n')
                {
                    s[i].ac_delete(ad);
                }
                break;
        }
        case 8:
        {

            long int inc;
            int flag;
            cout<<"ENTER MONTHLY INCOME"<<endl;
            cin>>inc;
            flag=Lo[i].tests_qualification_for_loan(inc);
            if(flag==0)
            {
                cout<<"***"<<endl;
            }
            else
            {
                Lo[i].take_loan();
            }
        }
        case 9:
        {

            exit(0);
        }
        default:
        {
            cout<<"WRONG KEY.PLEASE TRY AGAIN"<<endl;
            break;
        }
        }
        i++;
    }
    while(1);

    return 0;
}
