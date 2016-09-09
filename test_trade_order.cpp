#include<iostream>
#include"trade_order.h"

using namespace std;

void display_trade(struct generic_trade_order trade_order){

    cout<< trade_order.trade_type << "," << trade_order.security << "," << trade_order.size << "," << trade_order.price <<

int main(){

    struct generic_trade_order order_1;
    order_1.trade_type = BUY;
    order_1.security = 'IBM';
    order_1.size = 100;
    order_1.price = 15.0;
    order_1.commission == (double)size * price * .02;
 
    display_trade(order_1); 
}
