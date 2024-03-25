#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Pair in C++ STL" << endl;
    // Pair with Two Data
    // pair<string, int>
    // pair<string, int> p;
    // p.first = "Arbaz";
    // p.second = 24018;
    // data = make_pair("Arbaz", 80);
    // cout << p.first << " " << p.second << endl;

    // Pair with Three data
    // pair<string, pair<int, int>> data;
    // "Arbaz", age=20, weight= 80;
    // pair<string, pair<int, int>> data;
    // data = make_pair("Arbaz", make_pair(20, 80));
    // cout << data.first << " " << data.second.first << " " << data.second.second << endl;

    //Pair with 4 Different Data
    // "Name","Roll_no", "Section", "Obtained_Marks"
    pair<pair<string,long int>,pair<string, float>> Student_Data;
    Student_Data = make_pair(make_pair("Arbaz",24018),make_pair("CSE-1",80));

    //Printing the student data
    cout << Student_Data.first.first << " " << Student_Data.first.second << " " << Student_Data.second.first << " " << Student_Data.second.second << endl << endl;
}