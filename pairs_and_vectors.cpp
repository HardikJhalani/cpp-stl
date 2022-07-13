#include <bits/stdc++.h>
using namespace std;

//! function that takes reference input of vectors and prints its elements one by one
void print_vector(vector<int> &vec) {
    for(int i = 0;i < vec.size(); i++) {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main() {

    //* PAIRS

    // pair<dt1, dt2>
    //! declaring a pair
    pair<int, string> pr;

    //! Inserting value in pair - Method 1
    // pr = make_pair(2, "hardik");

    //! Inserting value in pair - Method 2
    pr = {2, "abc"};

    //! Printing pair values
    cout<<pr.first<<" "<<pr.second<<endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    //! pair of arrays
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for(int i = 0; i < 3; i++) {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    //* VECTORS

    //! Arrays with dynamic size

    //! declaring a vector of type int
    vector<int> v;
    // cout<<v.size(); // --> 0
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //! prints out the values of the vector elements
    print_vector(v);

    //! creates a vector of a certain size with some certain fixed value
    vector<int> v2(10, 3); // --> 3 3 3 3 3 3 3 3 3 3

    //! removes the last element
    v2.pop_back(); 

    print_vector(v2);

    return 0;
}