//* In vectors, we are not required to tell the size of the data to be stored

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr; // -> {}

    //* Function 1: push_back() --> adds element to the last
    arr.push_back(0); // -> {0}
    arr.push_back(2); // -> {0, 2}

    //* Function 2: pop_back() --> removes the last element
    arr.pop_back(); // -> {0}

    //* Function 3: clear() --> erases the entire vector
    arr.clear(); // -> {}

    //* Declaring vector with some initial values:
    vector<int> vec1(4, 0); // -> {0, 0, 0, 0}
    vector<int> vec2(4, 10); // -> {10, 10, 10, 10}

    //* copy the entire vec2 into vec3:
    // vector<int> vec3(vec2); // -> {10, 10, 10, 10}
    vector<int> vec3(vec2.begin(), vec2.end()); // -> {10, 10, 10, 10}

    vector<int> hardik;
    hardik.push_back(1);   // hardik.emplace_back(1); //* emplace_back takes lesser time than push_back 
    hardik.push_back(3);    
    hardik.push_back(2);    
    hardik.push_back(5); // -> {1, 3, 2, 5}

    //! I want a vector 'jhalani' that stores only {1, 3} from the vector 'hardik':
    vector<int> jhalani(hardik.begin(), hardik.begin() + 2); // -> {1, 3}   

    //* lower bound, upper bound
    //* swap
    //* begin(), end(), rbegin(), rend() 

    //* Defining 2d vectors
    // 1.
    vector<vector<int>> vec;

    vector<int> hardy1;
    hardy1.push_back(1);
    hardy1.push_back(2);

    vector<int> hardy2;
    hardy2.push_back(10);
    hardy2.push_back(20);
    hardy2.push_back(30);

    vec.push_back(hardy1);
    vec.push_back(hardy2);

    //* printing 2d vectors

    // it is the vector itself
    for(auto it: vec) {
        for(auto el: it) {
            cout<<el<<" ";
        }
        cout<<endl;
    }

    cout<<vec[1][2];

    //* define 10 X 20 size vector
    vector<vector<int>> vect(10, vector<int> (20, 0));

    //* array of vectors:
    vector<int> a[4];

    //* define a 3d vector: 10 X 20 X 30
    vector<vector<vector<int>>> vec3d(10, vector<vector<int>> (20, vector<int> (30)));

    return 0;
}