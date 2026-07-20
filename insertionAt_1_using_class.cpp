#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linklist
{
   public:
   Node* start = NULL;
   void insertion_at_first(int data)
{
    //Node* start = NULL;
    Node* p = new Node(data);

    if(p== NULL)
    {
        cout<<"overflow"<<endl;
    }
   else{
    p->next = start;
    start = p;
   }

}

void print()
{
    while(start!= NULL)
    {
       cout<<start->data<<" ";
       start = start->next;
    }
}
};
int main()
{
    Linklist l1;
    l1.insertion_at_first(10);
    l1.insertion_at_first(20);
    l1.insertion_at_first(30);
    l1.insertion_at_first(40);

    l1.print();
}
