#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int n_data) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = n_data;
    p->next = NULL;
    return p;
}

struct Node* start = NULL;

void insertion_at_first(int n_data)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p== NULL)
    {
        cout<<"overflow"<<endl;
    }
    else if(start == NULL )
    {
        p->data = n_data;
        p->next = NULL;
        start = p;
    }
    else
    {
      p->data = n_data;
      p->next = start;
      start = p;
    }
 
}

void insertion_at_last(int n_data)
{


    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    if(p== NULL)
    {
        cout<<"overflow";
    }
    else 
    {
        p->data = n_data;
        p->next = NULL;
    if(start== NULL)
    {
        start = p;
    }
    else
    {
        struct Node* temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
    }
}

void insertion_at_pos(int n_data,int pos)
{
    struct Node* p = createNode(n_data);
    if(pos == 1)
    {
        insertion_at_first(n_data);
        return;
    }
    
    struct Node* temp = start;
    if(temp->next == NULL)
    {
        insertion_at_last(n_data);
        return;
    }
    for(int i=0 ; temp!= NULL && i<pos-1 ; i++)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"position out of range"<<endl;
    }
    p->next = temp->next;
    temp->next = p;

}

void display()
{
    struct Node* temp = start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    insertion_at_first(10);
    cout<<"linklist after inserting node 10"<<endl;
    display();
    insertion_at_last(20);
    cout<<"linklist after inserting node 20"<<endl;
    display();
    insertion_at_last(30);
    cout<<"linklist after inserting node 30"<<endl;
    display();
    insertion_at_pos(25,2);
    cout<<"linklist after inserting node 25"<<endl;
    display();
}