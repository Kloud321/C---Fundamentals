#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

double order(string product, double quantity){
    
    if (product == "coffee"){
        return 1.50 * quantity;
    }else if(product == "water"){
        return 1.00 * quantity;
    }else if(product == "coke"){
        return 1.40 * quantity;
    }else if(product == "snacks"){
        return 2.00 * quantity;
    }

    }

void printOrder(string product, double quantity){
    
    cout<<fixed<<setprecision(2);
    cout << order(product, quantity)<< endl;

}


int main(){

    string product;
    double quantity;

    cin >> product >> quantity;

    printOrder(product, quantity);

}