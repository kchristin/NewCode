//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
//

#include <iostream>
using namespace std;

int main() {

    string s;
    int numRows;

    cout << "Enter the string you want in zig zag, it can only be PAYPALISHIRING" << endl;
    cin >> s;
    cout << "Enter the number of rows" << endl;
    cin >> numRows;
    Arr = s.split();
    
    if (numRows = 1){
        cout << "PAYPALISHIRING" << endl;
    }
    else if (numRows >= 2){

        for (int i = 0; i <= 14; i+numRows){
            cout << Arr[i]; 
        }
    }


}