#ifndef DEPO_ACC_H
#define DEPO_ACC_H
#include<bits/stdc++.h>
#include "BASIC_BANK.H"


class depo_acc : public Bank
{
    public:
         int get_money(int,float);
         void deposit(int);
        void open(int);//overloaded from main bank class
        void update(int);//overloaded from main bank class
        void ac_delete(int);
        void display(int);
    protected:

    private:
      int no_of_years=3;
      int year_made;
      int amount_per_year;
      float interest_in_percentage;
      float tax=26;
};

#endif // DEPOSIT_H

