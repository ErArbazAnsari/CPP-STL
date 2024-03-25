// Stored always unique element
// It stored the data in unordered way
// Time complexity of search, insert, delete --> O(1)
// Implementation using hashing

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Unordered Set in STL" << endl;
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(50);
    us.insert(30);
    us.insert(40);
    us.insert(20);

    for (auto it = us.begin(); it != us.end(); it++)
        cout << *it << " ";
    return 0;
}
