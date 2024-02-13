#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector declaration
    vector<int> v;

    // vector insertion
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    // to get first element
    cout << v.front() << '\n';
    // to get end element
    cout << v.back() << '\n';

    return 0;
}