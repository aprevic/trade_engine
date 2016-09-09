#include <string>

#define BUY 0
#define Sell 1

struct generic_trade_order {
    int trade_type;
    //char security [4];
    int size;
    double price;
    double commission;

};

struct call_option {
    string security;
    double price;
    double strike;
    double value;
    int expiry;
    int quantity;
};
