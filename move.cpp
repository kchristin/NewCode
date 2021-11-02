//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include <iostream>

using namespace std;

int main() {

int N[5] = {0, 10, 15, 0, 0};

for (int i = 0; i < 5; i++){
    if (N[i] == 0 && i != 4){
        N[i] = N[i+1];
        N[i+1] = 0;
    }
    else if (N[i] != 0){
        N[i] = N[i-2];
    }
}
for (int i = 0; i < 5; i++) {
cout << N[i] << endl; }

}