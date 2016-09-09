#include <iostream>
#include "account_manager.h"

#define DEBUG_ACCOUNT_MANAGER  
#define CAREFUL_ACCOUNT_MANAGER  
using namespace std;

struct account_details
{

    int id, status;
    double balance, margin;
    
};

struct account_details *accounts;
int NUM_ACCOUNTS = 5;

int initialize_account_manager(){

    accounts = new account_details[NUM_ACCOUNTS];
    accounts[0].id = 1234;
    accounts[0].status = 0;
    accounts[0].balance = 1000.0;
    accounts[0].margin = 1.5;
    accounts[1].id = 2345;
    accounts[1].status = 1;
    accounts[1].balance = 1000.0;
    accounts[1].margin = 1.5;
    accounts[2].id = 3456;
    accounts[2].status = 2;
    accounts[2].balance = 1000.0;
    accounts[2].margin = 1.5;
    accounts[3].id = 4567;
    accounts[3].status = 3;
    accounts[3].balance = 1000.0;
    accounts[3].margin = 1.5;
    accounts[4].id = 5678;
    accounts[4].status = 4;
    accounts[4].balance = 1000.0; 
    accounts[4].margin = 1.5;
    return 0;
}

int get_position_hashing(int account_number){

    // apply hashing function on input account_number      h = some_hash_function(account_number)
    // obtain initial search                               pos = h % NUM_ACCOUNTS
    // use linear probe to find item starting at pos
}

int get_position(int account_number){

    int g;
    
    for(g=0; g<NUM_ACCOUNTS; g++){
        if(accounts[g].id==account_number){
            return g;
        }
    }
    return -1;
}

int get_account_status(int account_number){

    int pos;

    pos = get_position(account_number);
    #ifdef DEBUG_ACCOUNT_MANAGER
    cout << "get_account_status for " << account_number << ", position=" << pos << endl;
    #endif
    if(pos >= 0){
        return accounts[pos].status;
    }
    #ifdef CAREFUL_ACCOUNT_MANAGER
    else {
        return -1;
    }
    #endif
}

double get_account_balance(int account_number){

    int pos;

    pos = get_position(account_number);
    if(pos >= 0){
        return accounts[pos].balance;
    } else {
        return -1;
    }
}

double get_margin_ammount(int account_number){

    int pos;

    pos = get_position(account_number);
    if(pos >= 0){
        return accounts[pos].status;
    } else {
        return -1;
    }
}

