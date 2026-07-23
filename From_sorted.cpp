// Removing duplicate node from the sorted singly linklist
// T.C = O(n)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

struct Node* creatNode(int n_data) {
    struct Node* p = new Node();
    p->data = n_data;
    p->next = NULL;
    return p;
}

struct Node* head = NULL, * tail = NULL;

void insertion_at_first(int n_data)
{
    struct Node* p =new Node();
    if(p== NULL)
    {
        cout<<"overflow"<<endl;
    }
    else if(head == NULL )
    {
        p->data = n_data;
        p->next = NULL;
        head = p;
        tail = p;
    }
    else
    {
      p->data = n_data;
      p->next = head;
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
    else if(head == NULL)
    {
        head = p;
        tail = p;
    }
    else
    {
        tail->next = p;
        tail = p;
    }
    
}
  
//             <---------- solution 1 - using single loop --------->

void removeDuplicate(Node* head)
{
    Node* curr = head;
    if(head== NULL)
    {
        return ;
    }
    while(curr!=NULL)
    {
        if((curr->next!= NULL) && curr->data == curr->next->data)
        {
            Node* next_next = curr->next->next;
            Node* deleteNode = curr->next;
            delete(deleteNode);
            curr->next = next_next;

            // if we write delete() after the curr->next = next_next then we lost 
            // the track of the duplicate element i.e we r not able to dlt the node;
            
        }
        curr = curr->next;
    }

}

//             <---------- solution 2 - using loops ----------->

void duplicate(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    Node* p = head;
    Node* q = head;
    //Node* q = head->next;
    while(p!=NULL)
    {
        while(q->next!=NULL)
        {
            if(p->data == q->next->data)
            {
                Node* next_next = q->next->next;
                Node* nodeTodlt = q->next;
                delete(nodeTodlt);
                q->next = next_next;
            }
            q = q->next;
        }
        p = p->next;
    }
}

void display(Node* head)
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
     //insertion_at_first(2);
    //insertion_at_first(1);
    // insertion_at_first(30);
    // insertion_at_first(110);
    // insertion_at_first(150);
     //insertion_at_first(12);
    //insertion_at_last(3);
    //insertion_at_first(2);

     insertion_at_first(250);
     insertion_at_first(250);
     insertion_at_first(210);
     insertion_at_first(50);
     insertion_at_first(50);
     insertion_at_first(10);
     insertion_at_first(10);
     display(head);

    removeDuplicate(head);
   // duplicate(head);
    display(head);

}