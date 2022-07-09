#include <bits/stdc++.h>
using namespace std;

int main() {

    //? Given n elements, tell me the number of unique elements

    // int arr[] = {1, 3, 2, 1, 3}; //* 3 unique elements

    set<int> st;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        st.insert(x); //! T(t) = log(n)
    }

    for(auto it: st) {
        cout<<it<<" ";
    }
    cout<<endl;

    //* erase functionality

    st.erase(st.begin()); // st.erase(iterator) // The first element will get deleted

    for(auto it: st) {
        cout<<it<<" ";
    }
    cout<<endl;

    // st.erase(st.begin(), st.begin() + 2); // --> [)

    // st.erase(3); // st.erase(key) --> delete the 5

    //* find the iterator

    set<int> st1 = {1, 3, 5, 7};
    auto it = st1.find(7);
    
    //* delete the entire set

    st.erase(st.begin(), st.end());

    return 0;
}