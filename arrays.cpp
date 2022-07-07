//* IMPORTANT POINTS:   

// 1. max size of an array that can be declared inside of main function of type -> int, double, char is: 10^6, whereas for -> bool, it is 10^7
// 2. max size of an array that can be declared globally of type -> int, double, char is: 10^7, whereas for -> bool, it is 10^8

#include <bits/stdc++.h>
using namespace std;

int main() {    

    // int arr[100]; // -> Default way 

    //* The container way: 
    array<int, 3> arr; //* {?, ?, ?} --> an have any value(garbage values)
    array<int, 5> nums = {1, 2, 3}; //* {1, 2, 3, 0, 0}
    array<int, 10> zeroes = {0}; //* {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    //* fill() function -> fills the entire array with the number provided in the parenthesis

    array<int, 5> numbers;
    numbers.fill(10);
    for(int it:numbers) {
        cout<<it<<" "; // 10 10 10 10 10
    }
    cout<<endl;

    // *************************************************************************************************************************************!

    //* at() function -> returns the value at that index of the array

    for(int i = 0; i< 5; i++) {
        cout<<numbers.at(i)<<" "; // 10 10 10 10 10
    }
    cout<<endl;

    // *************************************************************************************************************************************!

    //* iterators:
    //* begin() -> pointer for the first element of the array,
    //* end() -> points just after the last element,
    //* rbegin() -> points to the last element
    //* rend() -> points just before the first element

    array<int, 5> ar = {1, 3, 4, 5, 6};

    //* printing in the order:

    // 1 :
    for(auto it = ar.begin(); it!= ar.end(); it++) {
        cout<<*it<<" "; // 1 3 4 5 6
    }
    cout<<endl;

    // 2 : for each loop
    for(auto it: ar) {
        cout<<it<<" "; // 1 3 4 5 6
    }
    cout<<endl;

    //* printing in the reverse order:

    for(auto it = ar.rbegin(); it != ar.rend(); it++) {
        cout<<*it<<" "; // 6 5 4 3 1
    }
    cout<<endl;

    // **************************************************************************************************************************************!

    string s = "akskamknsd";
    for(auto it: s) {
        cout<<it<<" "; // a k s k a m n s d
    }
    cout<<endl;

    //* size of array:
    cout<<ar.size()<<endl;

    //* first element of array:
    cout<<ar.front()<<endl;

    //* last element of array:
    cout<<ar.back()<<endl;

    return 0;
}