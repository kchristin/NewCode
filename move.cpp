//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include <iostream>
#include <string>

using namespace std;

int main() {

int S; // Number of arrays
cout << "Input the number of Array" << endl;
cin >> S; // S is the number of arrays

int N[S] = {}; // The array
cout << "Input the numbers in Array" << endl;

for (int i = 0; i < S; i++){
cin >> N[i]; // The numbers are put into arrays
}

for (int i = 0; i < S; i++){
    if (N[i] == 0 && i != (S-1)){
        N[i] = N[i+1];
        N[i+1] = 0;
    } // Checks the first two numbers in arrays and switch them if any of the number is zero
    else if (N[i] != 0){
        N[i] = N[i-2]; // Check if the last number is zero and switch them if it is.
    }
}
for (int i = 0; i < S; i++) {
cout << N[i] << endl; } // display the modifed numbers

}