// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <iostream>
using namespace std;

int main() {
       
    int n;
    cout <<"Enter the number of stairs" << endl;
    cin >> n ;

    if (n =< 3){
        cout <<"output = "<< n << endl;
    }
    else{
        for (int i = 0; i < n; i++){
            cout <<"output = "<< (n-1)+ (n-2) << endl;
    }
    }





}