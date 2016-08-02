#include<iostream>
using namespace std;

#define BUY 'B'
#define SELL 'S' 

int get_trade_status (char * trade ){

    if(trade[0] != BUY && trade[0] != SELL ){
        return -1;
    }
    return 0;
} 


int main(){
    
    char test_trade_1[] = { BUY,'b','c','d','e'};
    char test_trade_2[] = { SELL,'b','c','d','e'};
    char test_trade_3[] = {'Z','b','c','d','e'};
    
    int status;

    status = get_trade_status(test_trade_1);
    cout<<"The status is: " << status << "\n";
    
    status = get_trade_status(test_trade_2);
    cout<<"The status is: " << status << "\n";
    
    status = get_trade_status(test_trade_3);
    cout<<"The status is: " << status << "\n";
}
