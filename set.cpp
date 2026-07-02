// IMPLIMENTING THE SET
// it only store the unique element and return the values in sorted order

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(7);
    s.insert(0);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(0);
    s.insert(2);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    set<int>::iterator it = s.begin();     // settinng the iterator
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<" is present or not--> "<<s.count(3)<<endl;

    set<int>::iterator itr = s.find(0);
    cout<<"value present at its--> "<<*itr<<endl;

    for(auto it=itr ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";

    }
}