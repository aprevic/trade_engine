#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

const int MIN_PRICE = 0, MAX_PRICE = 1000;
const int MIN_STRIKE = 0, MAX_STRIKE = 1000;
const int MIN_VALUE = 0, MAX_VALUE = 100;
const int MIN_EXPIRY = 0, MAX_EXPIRY = 365;
const int NUM_LINES = 1000;
const double STRIKE_THRESHOLD = 1.15;

void generate(int num_lines){

    string security;
    double price, strike, value;
    int expiry, is_out_of_the_money, is_imminent, i;
    ofstream output_file;

    output_file.open("./market_data/test_data_with_feedback");
    security = "XYZ";

    for(i = 0; i < num_lines; i++){
        price = (double)(rand() % MAX_PRICE);
        strike = (double)(rand() % MAX_STRIKE);
        value = (double)(rand() % MAX_VALUE);
        expiry = rand() % MAX_EXPIRY;
        is_out_of_the_money = (strike > STRIKE_THRESHOLD * price) ? 1 : 0;
        is_imminent = (expiry < 50) ? 1 : 0;
        output_file << security << " " << price << " " << strike << " " << value << " " <<  expiry << " " << is_out_of_the_money << " " << is_imminent << "\n";
    }
    output_file.close();
}

int main(){

    generate(NUM_LINES);
    return 0;
}
