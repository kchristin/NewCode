//Given the roots of two binary trees p and q, write a function to check if they are the same or not.
//Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

#include <iostream>
using namespace std;

int main() {

    int N;

    cout <<"Enter the number of nodes you want in both Binary trees P and Q" << endl;
    cin >> N;
    int P[N] = {};
    int Q[N] = {};
    int T;
    
    cout <<"Enter the numbers you want on binary tree P" << endl;
    for (int i = 0; i < N; i++){
        cin >> T;
        P[i] = T;
    }
    cout <<"Enter the numbers you want on binary tree Q" << endl;
    for (int i = 0; i < N; i++){
        cin >> T;
        Q[i] = T;
    }

    if (P == Q)
        cout <<"Both binary trees are the same." << endl;
    else
        cout <<"Both binary trees are not the same." << endl;
    
    return 0;
        
}