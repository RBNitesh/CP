#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        Pointers and arrays support the same set of operations, with the same meaning for both. The main difference being that pointers can be assigned new addresses, while arrays cannot.
    */

    int nums[5];
    int *p;

    p = nums;
    *p = 10; // nums[0]

    p = &nums[1];
    *p = 20; // nums[1]

    p++;
    *p = 30; // nums[2]

    p = nums + 3;
    *p = 40; // nums[3]

    p = nums;
    *(p + 4) = 50; // nums[4]

    for(int it : nums){
        cout << it << " ";
    }

    return 0;
}