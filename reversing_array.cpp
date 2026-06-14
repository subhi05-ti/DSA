// reversing the array from perticular index

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[5],i,key;
    cout<<"enter the number in array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"enter the index or position from where u want to reverse"<<endl;
    cin>>key;
    int s = key+1 , e=4;
    while(s<=e)
    {
       int temp = a[s];
       a[s] = a[e];
       a[e] = temp;
        s++;
        e--;
    }
    for(i=0 ; i<5 ; i++)
    {
        cout<<a[i]<<" ";
    }
}

// reversing the array using stl

// vector<int> reverse(vector<int> v)
// {
//     int s = 0 ,e = v.size()-1;
//     while(s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// vector<int> print(vector<int> v)
// {
//     for(int i =0 ; i<v.size() ; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
//     v.push_back(9);

//     vector<int> n = reverse(v);
//     cout<<"printing reverse array"<<endl;
//     print(n);
// }