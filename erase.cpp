#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
    // v.erase(v.begin() + 2);
    v.erase(v.begin() + 2, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}