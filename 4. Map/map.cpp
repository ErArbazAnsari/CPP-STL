#include <bits/stdc++.h>
using namespace std;

// Map
// 1. It store the data in key value pair.
// 2. It uses Red-black-tree or AVL tree for its implementation
// 3. Insertion, deletion, searching --> o(log(n))

int main(int argc, char const *argv[])
{
    map<int, int> mp;
    mp.insert(make_pair(20, 30));
    mp.insert(make_pair(30, 50));
    mp.insert(make_pair(70, 80));
    mp.insert(make_pair(70, 80));
    mp[100] = 1000;  //Insert kr sakte hai aise abhi, also update bhi kr deta hai.

    for(auto it = mp.begin(); it != mp.end(); it++)
        cout<<it->first<<" "<<it->second <<endl;
    return 0;
}
