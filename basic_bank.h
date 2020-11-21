#ifndef BASIC_BANK_H
#define BASIC_BANK_H
#include "BASIC_BANK.H"
#include<bits/stdc++.h>


class Bank
{
  /*  public:
        Basic_Bank();
        virtual ~Basic_Bank();

    protected:

    private:*/
    protected:
    int ac_no,account;
    float balance;
   std::string name;
    std::string account_type;
    long int phone_no;
    std::string email;
    std::string date_of_birth;
    std::string address;

public:

    Bank();
    //{ }
//Constructor was suppose to be used for creating account but I got an error in main while trying to use it
//Kinda redundant now
   // Bank(int acn,float bl,std::string nme,std::string ac_tp,long int phn,std::string em,std::string d_o_b,std::string add):account(acn),balance(bl),name(nme),account_type(ac_tp),phone_no(phn),email(em),date_of_birth(d_o_b),address(add)
   // { }



    virtual void open(int);
    virtual void deposit(int);//inherited,virtual function
    void withdraw(int);
    virtual void display(int);
    void display_all();
    virtual void update(int);
    virtual void ac_delete(int);

    //get_and set functions

    void set_account(int);
    void set_balance(float);
    void set_name(std::string);
    void set_account_type(std::string);
    void set_phone_no(long int);
    void set_email(std::string);
    void set_date_of_birth(std::string);
    void set_address(std::string);

    int get_account();
    float get_balance();
    std::string get_name();
    std::string get_account_type();
    long int get_phone_no();
    std::string get_email();
    std::string get_date_of_birth();
    std::string get_address();
};

#endif // BASIC_BANK_H
