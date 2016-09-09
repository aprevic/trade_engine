#include<fstream>
#include<iostream>
#include"market_tracker.h"
using namespace std;

const int MAX_TRIALS = 20000;

void test_validation(){  
    
    string line;
    string security;
    double price, strike, value;
    int expiry, out_of_the_money, imminent;
    int num_out_of_the_money_failures, num_is_imminent_failures, num_trials;
    int num_out_of_the_money_successes, num_is_imminent_successes;
    ifstream input_file;

    num_out_of_the_money_failures = num_is_imminent_failures = num_trials = 0;
    num_out_of_the_money_successes = num_is_imminent_successes = 0;
    ifstream inputfile ("./market_data/test_data_with_feedback");
    if (inputfile.is_open()){
        while(inputfile>>security>>price>>strike>>value>>expiry>>out_of_the_money>>imminent){
            cout << "Read: " << security << "," << price << "," << strike << "," << value << "," << expiry << "," << out_of_the_money << "," << imminent << "\n";
            num_trials++;
            if(is_out_of_the_money(price, strike) && out_of_the_money==1){
                cout << "out success ";
                num_out_of_the_money_successes++;
            } else if( ! is_out_of_the_money(price, strike) && out_of_the_money==0) {
                cout << "out success ";
                num_out_of_the_money_successes++;
            } else {
                cout << "out failure ";
                num_out_of_the_money_failures++;
            }
            if(is_imminent(expiry) && imminent==1){
                cout << "imminent success\n";
                num_is_imminent_successes++;
            } else if( ! is_imminent(expiry) && imminent==0){
                cout << "imminent success\n";
                num_is_imminent_successes++;
            } else {
                cout << "imminent failure\n";
                num_is_imminent_failures++;
            }
            if(num_trials>MAX_TRIALS){
                break;
            }
        }
        cout << "Number of options read: " << num_trials << "\n";
        cout << "Number of out of the money failures: " << num_out_of_the_money_failures << "\n";
        cout << "Number of out of the money successes: " << num_out_of_the_money_successes << "\n";
        cout << "Number of is imminent failures: " << num_is_imminent_failures << "\n";
        cout << "Number of is imminent successes: " << num_is_imminent_successes << "\n";
    }
}

int main(){
    
    test_validation();
    return 0;
}
