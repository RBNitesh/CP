#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;

    // type used to declare pointer is the type of data pointers point to. 
    // Its not the type of pointer.
    // type * varname = data;

    int val1, val2;
    int * ptr;

    ptr = &val1;
    *ptr = 10;

    ptr = &val2;
    *ptr = 20;

    cout << val1 << " " << val2 << " ";

    return 0;
}