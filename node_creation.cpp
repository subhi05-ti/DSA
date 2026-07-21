#include<iostream>
using namespace std;

// class struct_node{
//     public:
//     int data;
//     struct_node *next;
//     struct_node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     // struct_node* n1 = new struct_node();
//     struct_node* n1 = new struct_node(10);
//     cout<<n1->data<<endl;
//     cout<<n1->next<<endl;
// }


// REVISION

struct Node{
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

struct Node* start = NULL;

void insertion_at_first(int n_data)
{

    // struct Node* p = creatNode(n_data);
    // struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = creatNode(n_data);
    if(p == NULL)
    {
        cout<<"overflow";
    }
    else if(start == NULL)
    {
        // p->data = n_data;
        // p->next = NULL;
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

    struct Node* p = creatNode(n_data);
    if(p == NULL)
    {
        cout<<"overflow";
    }
    else
    {
        // p->data = n_data;
        // p->next = NULL;
        if(start == NULL)
        {
            start = p;
        }
        else
        {
            struct Node* temp = start;
            while(temp->next !=NULL)
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
    if(pos == 1)
    {
        cout<<"empty";
    }
     struct Node* temp = start;
        for(int i=0 ; temp!=NULL && i<pos-1 ; i++)
        {
            temp = temp->next;
        }
        if(temp== NULL)
        {
            cout<<"out of range";
        }
        p->next = temp->next;
        temp->next = p;
    
}

void display()
{
    struct Node* temp = start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    insertion_at_first(10);
    insertion_at_last(20);
    insertion_at_last(30);
    insertion_at_pos(25,2);
    display();
}

