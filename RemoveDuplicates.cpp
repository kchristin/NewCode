// Given a string s, remove duplicate letters so that every letter appears once and only once. 
//You must make sure your result is the smallest in lexicographical order among all possible results.

#include <iostream>
using namespace std;

int main(){ 
    
    String s;
    cout <<"Enter some lowercase letters" << endl;
    cin >> s;
    
    int n = s.length;

    for (int i = 0; i < n; i++){
        s.erase(remove(s.begin(), s.end(), n[i]), s.end());
        n = s.length;
    }
    
    sortString(s);
    return 0;
}