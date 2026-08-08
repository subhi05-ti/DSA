#include<iostream>
using namespace std;

void print(int arr[],int s,int e)
{
    for(int i=s ; i<=e ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binary_search(int arr[],int n,int key,int s,int e)
{

// printing
print(arr,s,e);

    if(s>e)
    {
        return 0;
    }
    int mid = (s+e)/2;

    cout<<"value of mid "<<mid<<endl;

    if(key == arr[mid])
    {
        return 1;
    }
    if(key>arr[mid])
    {
        s = mid+1;
        return binary_search(arr,n,key,s,e);
    }
    else
    {
      e = mid -1;
      return binary_search(arr,n,key,s,e); 
    }
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    // int arr[5] = { 3,8,19,55,90};
    for(int i=0 ; i<5 ; i++)
    {
        cin>>arr[i];
    }
    int s =0, e=n-1;
    int key;
    cout<<"enter element to be searched"<<endl;
    cin>>key;;
    int result = binary_search(arr,n,key,0,n-1);
    if(result)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }

}