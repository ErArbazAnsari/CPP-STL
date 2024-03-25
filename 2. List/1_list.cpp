// List is implement by using doubly linked-list.
// Operations in List:
// 1. push_back(10)
// 2. push_front(20)
// 3. pop_back()
// 4. pop_front()
// Syntax: list <data_type> name_of_the_list;
// 5. front()
// 6. back()
// 7. size()

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "STL List" << endl;
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_front(1);
    myList.pop_back();
    myList.pop_front();

    cout << "Front Element: " << myList.front() << endl;

    cout << "Back Element: " << myList.back() << endl;

    cout << "Size of List: " << myList.size() << endl;

    // printing all values of list
    cout << "\nIterating List: ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
