#include<iostream>
#include<fstream>
#include<string>
#include"trade_order.h"
using namespace std;


struct call_option {
    string security;
    double price;
    double strike;
    double value;
    int expiry;
    int quantity;
};

bool is_out_of_the_money(double price, double strike){

    return strike > 1.15 * price;
}

bool is_imminent(int expiry){

    return expiry < 50;
}


int main(){

    string line;
    string security;
    double price, strike, value;
    int expiry;
    struct call_option options[10];
    
    ifstream inputfile ("./market_data/test_data_001");
    if (inputfile.is_open()){
       /* while ( getline (inputfile,line) ){
           cout << line << '\n';
        } */
        while(inputfile>>security>>price>>strike>>value>>expiry){
            cout << "Read Line from File:" << security << " , " << price << " , " << strike << " , " << value << " , " <<  expiry << "\n";

            // We have an option, now decide whether it's valid and if so add it to our array of struct
            // if( is_out_of_the_money() && is_imminent() ){
            //    // add to struct here  
            // }


        }
        inputfile.close(); 
    }
    else cout << "Unable to open file";

    return 0;
}
