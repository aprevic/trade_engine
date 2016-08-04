#define BUY 0
#define Sell 1

struct generic_trade_order {
    int trade_type;
    char security [4];
    int size;
    double price;
    double commission;

}
