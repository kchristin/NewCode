//66. You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//Increment the large integer by one and return the resulting array of digits.

#include <iostream>

using namespace std;

int main(){

    int k;
    int N[] = {};
    cout << "Input integer number ";
    cin >> k;
    cout << "Input : digits = " ;
    for (int i = 0; i < k; i++){
    cin >> N[i];
    cout << endl;
    }
    for (int i = 1; i <= k; i++){
        if(N[(k -i)] < 9){
            N[k] = N[k] +1;
            break;
    }
    cout << "Output : digits = " ;
    for (int i = 0; i < k; i++){
        cout << N[i] << " ";
    }
    cout << endl;
    }
}
