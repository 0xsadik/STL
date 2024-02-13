#include<bits/stdc++.h>
using namespace std;

int main()
{
    // let's see the vector is empty or not
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // clear this vector 
    v.clear();

    // let's check vector is clear or not?
    cout << v.empty() << '\n'; // if prints (1) then it's empty if not (0) then it is not empty
    return 0;
}