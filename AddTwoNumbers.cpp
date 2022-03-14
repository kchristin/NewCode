//You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.

#include <iostream>

using namespace std;

int main(){

    cout <<"Enter number of the both arrays";
    int num;
    cin >> num;

    cout <<"Enter the values of the first array";
    int list1[num] = {};
    for (int i = 0; i < num; i++){
        cin >> list1[i];
        }

    cout <<"Enter the values of the secound array";
    int list2[num] = {};
    for (int i = 0; i < num; i++){
        cin >> list2[i];
        }

    int list3[num] = {};
    for (int i = 0; i < num; i++){
        list3[i] == list1[i] + list2[i];
    }
    cout << "The final Array is ";
    for (int i = 0; i < num; i++){
        cout << list3[i];
    }
}