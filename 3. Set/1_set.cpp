// set in stl cpp

// It always store unique value/element.
// {10,20,30,50,10,50}  ->> {10,20,30,50}
// It store is elements in sorted ways --> By default ascending order

// Duplicate elements remove automatically
// In all these operation --> search, insert, delete ---> log(n) time required.

// AVL(Self Balancing Tree)-->long(n) tree used to implement sets

// Syntax to implement set --> set<data_type> setName;

// If we want sorting is done in descing order then --> set<int,greater<int>>myset;

// Opertation in set::
// 1. find() --> To search element available or not in set.
// 2. Count() --> Check the element is present or not.
// 3. erase() --> To delete the element from set

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> mySet;
    // set<int, greater<int>> mySet; //For Descinding order. If we want to save the data/elements in Descring order.
    // inserting data in mySet
    mySet.insert(1000);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(100);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(100);

    // element present or not
    // if (mySet.find(1011) != mySet.end())
    //     cout << "Element Present\n\n";
    // else
    // {
    //     cout << "Element Not Available\n\n";
    // }

    // Count Function
    if (mySet.count(10000))
        cout << "present\n";
    else
        cout << "Absent\n";

    // erase()
    mySet.erase(10);

    cout << "Iterating the values of Set: ";
    for (auto it = mySet.begin(); it != mySet.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\nIterating the values in reversed order of Set: ";
    for (auto it = mySet.rbegin(); it != mySet.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}