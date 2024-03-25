// It stored the data in unordered way
// Time complexity of search, insert, delete --> O(1)
// Implementation using hashing

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Unordered Multiset Set in STL" << endl;
    unordered_multiset<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(50);
    us.insert(30);
    us.insert(40);
    us.insert(20);
    us.insert(10);

    for (auto it = us.begin(); it != us.end(); it++)
        cout << *it << " ";
    return 0;
}
