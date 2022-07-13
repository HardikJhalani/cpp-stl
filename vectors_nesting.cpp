#include <bits/stdc++.h>
using namespace std;

//! function that takes reference input of vector of pairs and prints its elements one by one
void print_vector(vector<pair<int, int>> &vec) {
    for(int i = 0;i < vec.size(); i++) {
        cout<<vec[i].first<<" "<<vec[i].second<<" ";
    }
    cout<<endl;
}

//! function that takes reference input of vector of vectors and prints each value of each vector one by one
void print_vector_vector (vector<vector<int>> &vec) {
    cout<<vec.size()<<endl;
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec[i].size(); j++) {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
    print_vector(vec);

    //! declaring a vector of vector
    vector<vector<int>> vec_vec;

    for(int i = 0; i < 3; i++) { //! a size 3 vector
        int n; //! taking size as input of each vector
        cin>>n;
        vector<int> temp; //! vector that stores values 
        for(int j = 0; j < n; j++) {
            int x; //! taking input the values of the vector inside
            cin>>x;
            temp.push_back(x); //! adding values to the vector inside
        }
        vec_vec.push_back(temp); //! pushing back the vector to the main vector
    }

    print_vector_vector(vec_vec); //! printing the values inside the vector of a vector

    return 0;
}