#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    bool operator < (const Person &other) const{
        return age<other.age;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"Set using classes"<<endl;

    set<Person>s;
    Person p1, p2,p3;
    p1.age = 20;
    p1.name = "Arbaz Ansari";
    
    p2.age = 30;
    p2.name = "Ansari";
    
    p3.age = 40;
    p3.name = "Arman Ansari";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<i->age<<" "<< i->name<<endl;
    }
    
    return 0;
}
