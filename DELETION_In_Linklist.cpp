#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

struct Node* creatNode(int n_data)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = n_data;
    p->next = NULL;
    return p;
};

//                <---------INSERTION IN LINKLIST---------->

struct Node* start = NULL;

void insertion_at_first(int n_data)
{
    struct Node* p = creatNode(n_data);
    if(p== NULL)
    {
        cout<<"overflow";
    }
    else if(start == NULL)
    {
        start = p;
    }
    else
    {
       // p->data = n_data;
        p->next = start;
        start = p;
    }
}

void insertion_at_last(int n_data)
{
    struct Node* p = creatNode(n_data);
    if(p == NULL)
    {
        cout<<"overflow";
    }
    else
    {
        struct Node* temp = start;
        if(start == NULL)
        {
            start = p;
        }
        else
        {
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
    struct Node* p = creatNode(n_data);
    struct Node* temp = start;
    if(pos ==1)
    {
        insertion_at_first(n_data);
        return;
    }
    if(temp->next == NULL)
    {
        insertion_at_last(n_data);
        return;
    }
    for(int i=1 ; i<pos && temp->next!=NULL ; i++)
    {
        temp = temp->next;
    }
    p->next = temp->next;
    temp->next = p;
}

              // DELETION IN LINKLIST

void deletion_at_first()
{
    struct Node* p = start;
    if(start == NULL)
    {
        cout<<"underflow";
    }
    else
    {
        p = start;
        start = start->next;
        free(p);
    }
}

void deletion_at_last()
{
    struct Node* p ,*q;
    if(start == NULL)
    {
        cout<<"underflow";
    }
    if(start->next == NULL)
    {
        free(start);
    }
    else
    {
        p = start;
        while(p->next !=NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        free(p);
    }

}

void deletion_at_pos(int pos)
{
    struct Node* p,*q;
    struct Node* temp = start;
    if(start == NULL)
    {
        cout<<"underflow";
    }
    if(pos==1)
    {
        deletion_at_first();
        return;
    }
    if(temp->next == NULL)
    {
        deletion_at_last();
        return;
    }

    else
    {
        p = start;
        int i=1;
        while(i<pos)
        {
            q = p;
            p = p->next;
            i++;;
        }
        q->next = p->next;
        free(p);
    }

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
    deletion_at_pos(2);
    cout<<"linklist after deleting the 2 node"<<endl;
    display();
    deletion_at_first();
    cout<<"linklist after deleting the first node"<<endl;
    display();
    deletion_at_last();
    cout<<"linklist after deleting the last node"<<endl;
    display();
}