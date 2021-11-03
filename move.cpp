//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include <iostream>
#include <string>

using namespace std;

int main() {

int S; // Number of array
cout << "Input the number of Array" << endl;
cin >> S; // S is the number of arry

int N[S] = {};
cout << "Input the numbers in Array" << endl;

for (int i = 0; i < S; i++){
cin >> N[i];
}

for (int i = 0; i < S; i++){
    if (N[i] == 0 && i != (S-1)){
        N[i] = N[i+1];
        N[i+1] = 0;
    }
    else if (N[i] != 0){
        N[i] = N[i-2];
    }
}
for (int i = 0; i < S; i++) {
cout << N[i] << endl; }

}