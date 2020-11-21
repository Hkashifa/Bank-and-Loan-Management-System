#ifndef LOAN_H
#define LOAN_H
#include<bits/stdc++.h>
#include "BASIC_BANK.H"


class Loan : public Bank
{
    protected:

        int loan_amount;
        int term;
        int interest;
    public:

            void pending();
            void calculates_interest(int,int,int);
            int tests_qualification_for_loan(long int);
            void take_loan();

    private:
};

#endif // LOAN_H
