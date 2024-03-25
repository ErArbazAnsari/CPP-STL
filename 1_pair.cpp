#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Pair in C++ STL" << endl;

    // pair<string, int>
    // pair<string, int> p;
    // p.first = "Arbaz";
    // p.second = 24018;
    // data = make_pair("Arbaz", 80);
    // cout << p.first << " " << p.second << endl;

    // pair<string, pair<int, int>> data;
    // "Arbaz", age=20, weight= 80;
    pair<string, pair<int, int>> data;
    data = make_pair("Arbaz", make_pair(20, 80));
    cout << data.first << " " << data.second.first << " " << data.second.second << endl;
}