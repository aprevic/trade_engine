#include<cstring>
#include<iostream>
#include<fstream>
#include<string>
//#include"trade_order.h"
#include"market_tracker.h"
using namespace std;

const double STRIKE_THRESHOLD = 1.15;
const int EXPIRY_THRESHOLD = 50;

struct call_option {
    string security;
    double price;
    double strike;
    double value;
    int expiry;
    int quantity;
};

bool is_out_of_the_money(double price, double strike){

    return strike > STRIKE_THRESHOLD * price;
}

bool is_imminent(int expiry){

    return expiry < EXPIRY_THRESHOLD;
}

/*
int main(){

    string line;
    string security;
    double price, strike, value;
    int expiry, num_options_saved, num_options_read;
    struct call_option options[10];
    
    ifstream inputfile ("./market_data/test_data_001");
    if (inputfile.is_open()){
        num_options_saved = num_options_read = 0;
        while(inputfile>>security>>price>>strike>>value>>expiry){
            cout << "Read Line from File:" << security << " , " << price << " , " << strike << " , " << value << " , " <<  expiry << "\n";
            cout << "Number of options read: " << num_options_read << "\n";
            if(is_out_of_the_money(price, strike)){
                cout << "Is out of the money\n";
            } else {
                cout << "Is in the money\n";
            }
            if(is_imminent(expiry)){
                cout << "Is imminent\n";
            } else {
                cout << "Is not imminent\n";
            }
            if(is_out_of_the_money(price, strike) && is_imminent(expiry)){
                cout << "Adding this option to our list\n";
                options[num_options_saved].security = security;
                options[num_options_saved].price = price;
                options[num_options_saved].strike = strike;
                options[num_options_saved].value = value;
                options[num_options_saved].expiry = expiry;

                cout << "saved option [" << num_options_saved << "]:";
                cout << options[num_options_saved].security << ",";
                cout << options[num_options_saved].price << ",";
                cout << options[num_options_saved].strike << ",";
                cout << options[num_options_saved].value << ",";
                cout << options[num_options_saved].expiry << "\n";
                num_options_saved++;
            }
            num_options_read++; // equivalent to:    num_options_read = num_options_read + 1;
                                // another example:  x++;   is also    x = x + 1;
                                // however:          x+=10  is also    x = x + 10;
                                // or:               x+=amt is also    x = x + amt;
        }
    } else {
        cout << "Unable to open file";
    }
    inputfile.close();
    return 0;
}
*/
