#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int n_data) {
    struct Node* p = new Node();
    p->data = n_data;
    p->next = NULL;
    return p;
}

struct Node* start = NULL;

void insertion_at_first(int n_data) {
    struct Node* p = new Node();
    if (p == NULL) {
        cout << "overflow" << endl;
    } else if (start == NULL) {
        p->data = n_data;
        p->next = NULL;
        start = p;
    } else {
        p->data = n_data;
        p->next = start;
        start = p;
    }
}

//                                SOLUTION - 1: Using an Array (replacing the data)
bool checkPalindrome(vector<int> arr) {
    int s = 0, e = arr.size() - 1;
    while (s <= e) {
        if (arr[s] != arr[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    vector<int> arr;
    Node* temp = head;
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
}

//                                 SOLUTION - 2: Using the Slow and Fast Pointer Approach

Node* getMid(Node* start) {
    Node* slow = start;
    Node* fast = start;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* temp) {
    Node* curr = temp;
    Node* prev = NULL;
    Node* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool issPalindrome(Node* start) {
    if (start->next == NULL) {
        return true;
    }

    // Step 1: Find the middle node
    Node* middle = getMid(start);

    // Step 2: Reverse the second half
    Node* temp = middle->next;
    middle->next = reverse(temp);

    // Step 3: Compare the two halves
    Node* head1 = start;
    Node* head2 = middle->next;

    while (head2 != NULL) 
    { 
        if (head1->data != head2->data) {

            // Reverse back before returning false
            temp = middle->next;
            middle->next = reverse(temp);
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // Step 4: Restore the original list
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}

void display() {
    Node* temp = start;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertion_at_first(1);
    insertion_at_first(2);
    insertion_at_first(3);
    insertion_at_first(3);
    insertion_at_first(2);
    insertion_at_first(1);

    display();

    if (issPalindrome(start)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
