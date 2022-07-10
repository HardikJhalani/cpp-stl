#include <bits/stdc++.h>
using namespace std;

int main(){

    //! want to store all the elements in the sorted fashion

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    // ms --> {1, 1, 2, 2, 3}

    ms.erase(2); // all the instances of 2 will be removed

    auto it = ms.find(1); // returns an iterator pointing to the first occurance of the key

    ms.clear(); // deletes the entire set
    return 0;
}