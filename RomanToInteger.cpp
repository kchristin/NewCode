//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Given a roman numeral, convert it to an integer. I - 1,V - 5,X - 10,L  - 50,C - 100,D - 500,M - 1000

#include <iostream>
using namespace std;

int main() {

    int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
    
    int x;
    cout << "Enter a Roman Numeral" << endl;
    cin >> x;

    if (x == "I") {
        cout << "Output = " << I;
    }
    if (x == "V") {
        cout << "Output = "<< V;
    }
    if (x == "X") {
        cout << "Output = "<< X;
    }
    if (x == "L") {
        cout << "Output = "<< L;
    }
    if (x == "C") {
        cout << "Output = "<< C;
    }
    if (x == "D") {
        cout << "Output = "<< D;
    }
    if (x == "M") {
        cout << "Output = "<< M << endl;
    }
    else if ()

}