//Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

#include <iostream>

using namespace std;

int main(){

    int num;
    cout <<"Enter number of arrays";
    cin >> num;

    cout <<"Enter the values of array";
    int list1[num] = {};
    for (int i = 0; i < num; i++){
        cin >> list1[i];
        }

    cout <<"Enter the value to be removed";
    int val;
    cin >> val;

    for (int j =0; j < num; j++){
        if(list1[j] = val){
            list1[j] = "_";
        }
    }
    for (int i = 0; i < num; i++){
        cout << list1[i];
    }
    
}