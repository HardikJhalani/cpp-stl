#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    //! printing values of vector through basic for loop
    for(int i = 0;i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //! printing values of vector using iterators
    vector<int> :: iterator it; // declaring an iterator
    for(it = v.begin(); it != v.end(); it++) {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}