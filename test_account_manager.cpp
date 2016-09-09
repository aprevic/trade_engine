#include <iostream>
#include "account_manager.h"

#define SUCCESS 1
#define FAILURE 0
#define DEBUG_TEST_ACCOUNT_MANAGER  

using namespace std;

const int DEBUG_MODE = 0;

void initialize_accounts(){

    initialize_account_manager();
}

int test_get_account_status(){

    int result;

    result = SUCCESS;
    if(get_account_status(1234)!=0) result = FAILURE;
    #ifdef DEBUG_TEST_ACCOUNT_MANAGER
    cout << "first trial done" << endl;
    #endif
    if(get_account_status(2345)!=1) result = FAILURE;
    if(get_account_status(3456)!=2) result = FAILURE;
    if(get_account_status(4567)!=3) result = FAILURE;
    if(get_account_status(5678)!=4) result = FAILURE;
    return result;
}

int main(){

    int num_trials, num_successes;

    num_trials = num_successes = 0;
    initialize_accounts();
    #ifdef DEBUG_TEST_ACCOUNT_MANAGER
    cout << "accounts are initialized" << endl;
    #endif
    num_trials++;
    if(test_get_account_status()){
        num_successes++;
    }
    cout << "Successes: " << num_successes << "/" << num_trials << "\n";
    return 0;
}

