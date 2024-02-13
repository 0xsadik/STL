#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // to know vector's size 

    cout << v.size() << '\n';

    // print all elements
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    return 0;
}