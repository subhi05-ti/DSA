class Solution
{
   private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
    void print(Node* head) {
        while(head != NULL) {
            cout << head -> data << " ";
            head = head -> next;
        }cout << endl;
    }

    void printRandom(Node* head) {
        while(head != NULL) {
            cout << " head data: " << head->data <<" ";
            if(head ->arb != NULL) {
                cout << " head random data" << head -> arb ->data;
            }
            else
            {
                cout << " head random data: NULL";
            }
            head = head -> next;
            cout << endl;
        }
    }

    public:
    Node *copyList(Node *head)
    {
        //step 1: Create a Clone List
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode  = next;
        }
        
        // step 3: Random pointer copy
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) { 
            
            if(originalNode -> arb != NULL) {
                cloneNode -> arb = originalNode -> arb -> next;
            }
            else
            {
                cloneNode -> arb  = NULL;
            }
            
            cloneNode = cloneNode -> next;
            originalNode = originalNode -> next;
        }
        
        //step 4: revert step 2 changes
        Node* original = head;
        Node* copy = cloneHead;
        
         while (original && copy)
            {
                original->next =
                 original->next? original->next->next : original->next;
         
                copy->next = copy->next?copy->next->next:copy->next;
                original = original->next;
                copy = copy->next;
            }

        // step 5 answer return
        return cloneHead;
    }
};

// practice

void insertAtTail(Node* &head,Node* &tail,int d)
{
    Node* p = new Node(d);
    if(head == NULL)
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

Node* cloneLL(Node* head)
{
    Node* clonehead = NULL;
    Node* cloneTail = NULL;

// step 1 copy the linklist 

    Node* temp = head;
    while(temp!= NULL)
    {
        insertAtTail(cloneHead, cloneTail,temp->data);
        temp = temp->next;
    }

// step 2 adding cloneNode to originalNode

    Node* originalNode = head;
    Node* cloneNode = clonehead;
    while(originalNode != NULL && cloneNode != NULL)
    {
        Node* next = originalNode->next;
        original->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next; 
    }

// step 3 adding random pointer

    Node* temp = head;
    while(temp!= NULL)
    {
        if(temp->next!= NULL)
        {
            if(temp->random != NULL)
            {
                temp->next->random = temp->random->next;
            }
            else
            {
                temp->next = temp->random;
            }
        }
    }

// step 4 reverting the changes done in step 2

    originalNode = head;
    cloneNode = clonehead; 
    while(originalNode !=  NULL && cloneNode != NULL)
    {
        originalNode->next = colneNode->next;
        originalNode = originalnode->next;

        cloneNode->next = originalNode->next;
        clonenode = cloneNode->next;
    }   

// step 5 return ans
    return clonehead;
}