/**
 * @file multiset.cpp
 * @brief Implementation of multiset in the C++ Standard Template Library (STL).
 *
 * The multiset is an associative container in the STL that stores a sorted collection of elements.
 * It allows multiple elements with the same value to be stored.
 *
 * Important points about multiset:
 * - Elements in a multiset are always sorted in ascending order.
 * - Duplicate elements are allowed in a multiset.
 * - The underlying data structure used in a multiset is typically a balanced binary search tree (e.g., Red-Black Tree).
 * - The time complexity for common operations on a multiset is as follows:
 *   - Insertion: O(log n)
 *   - Deletion: O(log n)
 *   - Search: O(log n)
 * - Iterating through a multiset is done in sorted order.
 *
 * @see set
 */
// Multiset in STL

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Multiset in STL" << endl;
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(10);
    ms.insert(30);

    ms.erase(10);
    // Iterating the value;
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
