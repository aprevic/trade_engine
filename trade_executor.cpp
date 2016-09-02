//execute trade
#include<iostream>

using namespace std;

const double COMMISSION = .05;


int execute_trade(int account_number, double price, double strike, double value, double quantity, string security, int transaction_type){

    //check that the account is_valid
    int account_status;
    double account_balance, trade_commission, value_total, value_added;
    if((account_status = get_account_status(account_number)!= 0){
        return -1;
    }
    account_balance = get_account_balance(account_number);
    value_total = value*quantity;
    trade_commission = value_total*COMMISSION;

    value_added = value_total - trade_commission;
    


    //check that the account can support the transaction

    if(account_)
    

    //check that compliance approves

} 
string security;
double price, strike, value, quantity;


