// Given a sorted array of distinct integers and a target value, return the index if the target is found. 
// If not, return the index where it would be if it were inserted in order.

#include <iostream>
using namespace std;

int main() {
    
    int SA[4] = {1, 3, 5, 6};
    int T;
    cout <<"The sorted array is nums = [1, 3, 5, 6]" << endl;
    cout << "Enter Target" << endl;
    cout << "Target = ";
    cin >> T ;
    
    for (int i = 0; i < 4; i++)
    {
        if (SA[i] == T)
        {
            cout << "The Target will be in " << i << endl;
            return 0;
        }
        else if (SA[i] < T)
        {
            cout << "The Target will be " << (i + 1) << endl;
            return 0; 
        }  
        else 
        {
            cout << "The Target will be in 4" << endl;
            return 0;
        }
    }


}