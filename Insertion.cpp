#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head= NULL, *tail = NULL;

struct Node* creatNode(int n_data)
{
    struct Node*p = new Node;
    p->data = n_data;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

//       <------- INSERTION IN DOUBLLY LINKLIST------->

void insertion_at_first(int n_data)
{
     struct Node*p = creatNode(n_data);
    if(p == NULL)
    {
        cout<<"overflow";
    }
    if(head == NULL)
    {
        head = p;
        tail = p;
    }
    else
    {
        p->next = head;
        p->prev = NULL;
        head->prev = p;
        head = p;
    }

}

void insertion_at_last(int n_data)
{
    struct Node* p = creatNode(n_data);
    if(p == NULL)
    {
        cout<<"overflow";
    }
    if(tail == NULL)
    {
        tail = p;
    }
    else
    {
        p->prev = tail;
        tail->next = p;
        p->prev = tail;
        tail = p;
       // tail->next = NULL;
    }
}

void insertion_at_pos(int n_data,int pos)
{
    struct Node* p = creatNode(n_data);
    if(pos == 1)
    {
        insertion_at_first(n_data);
        return;
    }
    struct Node* temp = head;
    if(temp->next == NULL)
    {
        insertion_at_last(n_data);
        return;
    }
    else
    {
        for(int i=0 ; i<pos-1 ; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"pos is out of range";
        }
        else
        {

            p->next = temp->next;
            temp->next = p;
            temp->next->prev = p;
            p->prev = temp;
        }
    }
}
//             <--------- END ---------->

//          <----------DELETION IN DOUBLLY LINKLIST--------->

void deletion_at_first()
{
    struct Node* p = head;
    if(head == NULL)
    {
        cout<<"underflow";
    }
    else
    {
        p->next->prev = NULL;
        head = p->next;
        p->next = NULL;
        free(p);


    }

}
void deletion_at_last()
{
  
    if(head == NULL)
    {

        cout<<"underflow";
    }
      struct Node* p = head;
      struct Node* q = NULL;
    if(head->next == NULL)
    {
        head = NULL;
        free(head);
      
    }
    else
    {
        while(p->next!=NULL)
        {
            q = p;
            p = p->next;
        }
        
        q->next->prev = NULL;
        q->next = NULL;
        tail = q;


        // p->prev = NULL;
        // q->next = p->next;
        // p->next = NULL;
        free(p);
    }

}
void deletion_at_pos(int pos)
{
    struct Node* p = head;
    struct Node* q  = NULL;
    struct Node* temp = head;
    if(pos==1)
    {
        deletion_at_first();
    }
    if(temp->next == NULL)
    {
        deletion_at_last();
    }
    else
    {
        for(int i=1 ; i<pos ; i++)
        {
            q = p;
            p = p->next;
        }
        p->prev = NULL;
        q->next = p->next;
        p->next = NULL;
        free(p);
    }
}
void print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL ";
    cout<<endl;
}

int main()
{
    insertion_at_first(45);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_first(70);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_first(41);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_last(90);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_pos(111,2);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_last(120);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertion_at_pos(150,1);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletion_at_first();
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletion_at_last();
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletion_at_pos(3);
    print();
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    print(); 
}