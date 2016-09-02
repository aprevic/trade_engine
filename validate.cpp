#include<iostream>
#include"validate.h"
using namespace std;

int get_trade_status (char * trade ){

    if(trade[0] != BUY && trade[0] != SELL ){
        return -1;
    }
    return 0;
} 



