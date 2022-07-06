#include<bits/stdc++.h>
using namespace std;

//? Let's imagine someone says to you, that you want to create a datat type where you can store:
//* {string, int, double, char}
//* Struct example:

struct node // khud ka data type hai
{
    string str;
    int i;
    double db;
    char c;

    node(string str_, int i_, double db_, char c_) {
        str = str_;
        i = i_;
        db = db_;
        c = c_;
    }
};


int main() {

    //! Wrong way of defining
    // node hardik;
    // hardik.str = "Hardik Jhalani";
    // hardik.i = 23;
    // hardik.db = 100.0;
    // hardik.c = 'D';

    // node hardik = node("Hardik Jhalani", 23, 100.0, "");
}   