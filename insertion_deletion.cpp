#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL , *tail = NULL;

struct Node* creatNode(int n_data)
{
    struct Node* p = new Node;
    p->data = n_data;
    p->next = NULL;
    return p;
}

void insertion_at_first(int n_data)
{ 
    struct Node* p = creatNode(n_data);
    if(p== NULL)
    {
        cout<<"overflow";
    }
    if(head == NULL)
    {
        p->next = p;
        head = p;
        tail = p;
    }
    else
    {
        p->next = head;
        tail->next = p;
        head = p;
    }
}
void insertion_at_last(int n_data)
{
    struct Node* p = creatNode(n_data);
    struct Node*q;
    struct Node* temp = head;
    if(p == NULL)
    {
        cout<<"overflow";
        return;
    }
    if(head == NULL)           // empty list
    {
        p->next = p;
        head = p;
        tail = p;
    }

    else
    {
        // while(temp->next!= head)
        // {
        //     q = p;
        //     temp = temp->next;
        // }
        // temp->next = p;
        // p->next = head;
        
        tail->next = p;
        p->next = head;
        tail = p;

    }
}

void insertion_at_pos(int n_data, int pos)
{
    struct Node* p = creatNode(n_data);
    struct Node* temp = head;
   if(pos ==1)
    {
      insertion_at_first(n_data);
      return;
    }
   if(temp->next == head)
    {
      insertion_at_last(n_data);
    }
    else
    {
        for(int i = 1 ; i<pos-1 ; i++ )
        {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
        temp = p;
    }
}

void deletion_at_first()
{
    struct Node* p = head;
    if(head== NULL)
    {
        cout<<"underflow";
    }
    if(head == tail)
    {
        p = head;
        head =  NULL;
        tail = NULL;
        free(p);
    }
    else
    {
        // p = head;
        head = head->next;
        tail->next = head;
        free(p);
    }
}

void deletion_at_last()
{
    struct Node* p ,*q;
    struct Node* temp = head;
    if(p == NULL)
    {
        cout<<"underflow";
    }
    if(head == tail)
    {
        p = tail;
        head = NULL;
        tail =NULL;
        free(p);
    }
    else
    {
        q = head;
        p = tail;
        while(q->next!=tail)
        {
           
            q = q->next;
        }
        q->next = head;
        tail = q;
        free(p);


    }

}

void deletion_at_pos(int pos)
{
    struct Node*p , *q;
    struct Node* temp = head;
    if(pos == 1)
    {
        deletion_at_first();
    }
    if(temp->next == head)
    {
        deletion_at_last();
    }
    else
    {
        for(int i = 1 ; i<pos ; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }
}

void print()
{
    if(head == NULL)
    {
        cout<<"list is empty";
        return;
    }
   struct Node* temp = head;   // temp = tail->next;
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    while(temp!=head);
    cout<<" head ";
    cout<<endl;
}

int main()
{
    insertion_at_first(10);
    print();

    insertion_at_first(100);
    print();

    insertion_at_first(110);
    print();

    insertion_at_last(310);
    print();

    insertion_at_last(40);
    print();

    insertion_at_pos(400,3);
    print();

    insertion_at_pos(90,1);
    print();

    insertion_at_pos(77,8);
    print();

    insertion_at_last(67);
    print();

    insertion_at_last(57);
    print();

    deletion_at_first();
    print();

    deletion_at_last();
    print();

    deletion_at_pos(3);
    print();

}