// detecting cycle in a linklist

#include<iostream>
#include<map>
using namespace std;

struct Node{
    int data;
    struct Node*  next;
};

struct Node* creatNode(int n_data) {
    struct Node* p = new Node();
    p->data = n_data;
    p->next = NULL;
    return p;
}

struct Node* start = NULL, * tail = NULL;

void insertion_at_first(int n_data)
{
    struct Node* p =new Node();
    if(p== NULL)
    {
        cout<<"overflow"<<endl;
    }
    else if(start == NULL )
    {
        p->data = n_data;
        p->next = NULL;
        start = p;
        tail = p;
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
    else if(start == NULL)
    {
        start = p;
        tail = p;
    }
    else
    {
        tail->next = p;
        tail = p;
    }
    
}

bool removingBiginning_element( Node*start)
{
    if(start == NULL)
    {
        return true;
    }
    Node* slow = start;
    Node* fast = start;
    while(slow!= NULL && fast!= NULL)
    {
        fast = fast->next;
        if(fast->next !=NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast)
        {
            slow = start;
            slow = slow->next;
            fast = fast->next;
            if(slow == fast)
            {
                cout<<" beginning node of the cycle linklist is "<<slow->data<<endl;
            }
            return true;
        }
    }
    return false;
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
    insertion_at_first(20);
    insertion_at_first(30);
    insertion_at_first(110);
    insertion_at_first(150);
    insertion_at_first(90);
    //insertion_at_last(110);
    
    tail->next = start->next;

    cout<<"start "<<start->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    // if(isDetect(start))
    // {
    //     cout<<"loop present"<<endl;
    // }
    // else
    // {
    //     cout<<"loop not present"<<endl;
    // }

    if(removingBiginning_element(start))
      {
        cout<<"loop present"<<endl;
    }
    else
    {
        cout<<"loop not present"<<endl;
    }
   
}