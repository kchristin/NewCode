#include <iostream>
#include <string>
using namespace std;

int main(){

    string S;
    int N;
    cout << "Enter shift +/- 26 : ";
    cin >> N;
    cout << "Enter message without space (A-Z ) : " ;
    cin >> S;

    char C[S.size() + 1];
    S.copy(C, S.size() + 1);

    for (int i = 0; i < S.size(); i++){
        if(static_cast<int>(C[i] + N) >= 90 && static_cast<int>(C[i] + N) <= 65){
            cout << char(C[i] + N);
        }
        else{
            int F = static_cast<int>(C[i] + N) - 90;
            cout << char(65 + (F - 1));
        }
    }
    cout << ' ' << endl;

    return 0;
}