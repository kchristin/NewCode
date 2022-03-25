// Given an integer x, return true if x is palindrome integer.
// An integer is a palindrome when it reads the same backward as forward.
// For example, 121 is a palindrome while 123 is not.
// so, the soulution is to divide the number in half, if it is even to compare to the other half 
// or get rid of the middle number and following the same procedure if it is odd.

#include <iostream>

using namespace std;

int main() {

    int x;
    cout << "Enter a number" << endl; 
    cin >> x;

    if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
            } // because if x is -ve it is not a palindrome and if there is 0 in the end there should be a zero in the beginn.
    
    int revertedNumber = 0;
    while(x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
        }
    return x == revertedNumber || x == revertedNumber/10;

    
    
}