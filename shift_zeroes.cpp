// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5],i=0;
//     cout<<"enter element in array"<<endl;
//     for(int j=0 ; j<5 ; j++)
//     {
//         cin>>a[j];
//     }
//     for(int j=0 ; j<5 ; j++)
//     {
//         if( a[j] !=0)
//         {
//             int temp = a[j];
//             a[j] = a[i];
//             a[i] = temp;
//             i++;
//         }
        
//     }
//     for(int j=0 ; j<5 ; j++)
//     {
//         cout<<a[j]<<" ";
//     }
// }



    #include <iostream>
    using namespace std;
    
    // Create a demo class
    class A {
    public:
        int x;
        
        A(){
            x = 10;
            cout<<"default"<<endl;
        };
      
          // Copy Constructor definition
        A (A& t) {
            x = t.x;
              cout << "Calling copy constructor" << endl;
        }
    };
    
    int main() {
      
          // Creating an a1 object
        A a1;
        // a1.x = 10;
        // cout << "a1's x = " << a1.x << endl;
    
        // Creating another object using a1
          // Copy Constructor Calling
        A a2(a1);
        cout << "a2's x = " << a2.x;
    
        return 0;
    }
    
