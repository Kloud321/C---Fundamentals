#include <iostream>

using namespace std;

int main(){

    int start, end, sum;

    cin >> start >> end;
    

    sum = 0;

    for (int i = start; i <= end; i++){

        cout << i << " ";
        sum += i;
    }

    cout << endl;

    cout << "Sum: " << sum;


}