// removing duplicate from a unsorted singly linklist by using merge sort 
//  T.C  = O(nlogn)

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

struct Node* creatNode(int n_data)
{
    struct Node* p = new Node;
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
Node* findMid(Node* start) {
    Node* slow = start;
    Node* fast = start ;

    while(fast != NULL && fast -> next != NULL) {
       // slow = slow -> next;
        fast = fast -> next -> next; 
        if(fast!= NULL)
        {
            slow = slow->next;
        }
    }

     Node *temp = slow->next;
    slow->next = nullptr;
    return temp;
    //return slow;
}

Node* merge(Node* left, Node* right) {

    if(left == NULL)
        return right;

    if(right == NULL)
        return left;

    Node* ans = NULL;
    Node* temp = ans;

    //merge 2 sorted Linked List
    // while(left != NULL && right != NULL) {
        if(left -> data < right -> data ) {
            // temp -> next = left;
            // temp = left;
            // left = left -> next;
            left->next = merge(left->next,right);
            return left;
        }
        else
        {
            // temp -> next = right;
            // temp = right;
            // right = right -> next;
            right->next = merge(left,right->next);
            return right;
        }

}


Node* mergeSort(Node *start) {
    //base case
    if( start == NULL || start -> next == NULL ) {
        return start;
    }

    // break linked list into 2 halvs, after finding mid
    Node* right = findMid(start);

  //  recursive calls to sort both halves
    start = mergeSort(start);
    right = mergeSort(right);

    //merge both left and right halves
    Node* result = merge(start, right);

    return result;
}

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

void display( Node* start)
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
     insertion_at_first(110);
     insertion_at_first(50);
     insertion_at_first(20);
     insertion_at_first(200);
     insertion_at_first(10);
     insertion_at_first(50);
    //cout<<"linklist after inserting node 10"<<endl;
    cout<<"before sorting : "<<endl;
    display(start);

    cout<<"after sorting : "<<endl;
    start =  mergeSort(start);
    display(start);

    cout<<"after removing duplicate element : "<<endl;
     removeDuplicate(start);
    display(start);
  
}