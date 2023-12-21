#include <iostream>
using namespace std;



int main(){
    
    int num1, currentNum, minNum, maxNum;
    

    cin >> num1;

    for ( int i = 0; i < num1; i++){
        
        cin >> currentNum;

        if(i == 0){
            minNum = currentNum;
            maxNum = currentNum;
            continue;
        }
        
        if(currentNum > maxNum ) {
            maxNum = currentNum;
        } else if(currentNum < minNum) {
            minNum = currentNum;

        }

    }


    cout << minNum << " " << maxNum;

    return 0;

}