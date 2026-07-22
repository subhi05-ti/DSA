// #include <iostream>
// #include <map>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* createNode(int n_data) {
//     struct Node* p = new Node;
//     p->data = n_data;
//     p->next = NULL;
//     return p;
// }

// //                <---------INSERTION IN LINKED LIST---------->
// struct Node* start = NULL;

// void insertion_at_first(int n_data) {
//     struct Node* p = createNode(n_data);
//     if (p == NULL) {
//         cout << "Overflow";
//     } else if (start == NULL) {
//         start = p;
//     } else {
//         p->next = start;
//         start = p;
//     }
// }

// void RemoveDuplicate_using_map(Node* start) {
//     if (start == NULL || start->next == NULL) {
//         return;
//     }

//     map<int, bool> visited;
//     Node* temp = start;
//     Node* prev = NULL;

//     while (temp != NULL) {
//         if (visited[temp->data]) {
//             // Duplicate found, remove the node
//             prev->next = temp->next;
//             delete temp;
//             temp = prev->next;
//         } 
//         else 
//         {
//             // Mark the data as visited
//             visited[temp->data] = true;
//             prev = temp;
//             temp = temp->next;
//         }
//     }
// }

// void display(Node* start) {
//     struct Node* temp = start;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     insertion_at_first(10);
//     insertion_at_first(110);
//     insertion_at_first(50);
//     insertion_at_first(20);
//     insertion_at_first(200);
//     insertion_at_first(10);
//     insertion_at_first(50);

//     cout << "Before removing duplicates: " << endl;
//     display(start);

//     RemoveDuplicate_using_map(start);

//     cout << "After removing duplicates: " << endl;
//     display(start);

//     return 0;
// }


#include <iostream>
#include <map>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int n_data) {
    struct Node* p = new Node;
    p->data = n_data;
    p->next = NULL;
    return p;
}

//                <---------INSERTION IN LINKED LIST---------->
struct Node* start = NULL;

void insertion_at_first(int n_data) {
    struct Node* p = createNode(n_data);
    if (p == NULL) {
        cout << "Overflow";
    } else if (start == NULL) {
        start = p;
    } else {
        p->next = start;
        start = p;
    }
}

 void RemoveDuplicate_using_map(Node*start)
 {
    if(start == NULL || start->next == NULL)
    {
        return ;
    }
    map<int,bool> visited;
    Node* temp = start;
    Node* prev = NULL;
    while(temp!= NULL)
    {
        if(visited[temp->data])
        {
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        else
        {
            visited[temp->data] == true;
            prev = temp;
            temp = temp->next;
        }
    }
 }

void display(Node* start) {
    struct Node* temp = start;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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

    cout << "Before removing duplicates: " << endl;
    display(start);

    RemoveDuplicate_using_map(start);

    cout << "After removing duplicates: " << endl;
    display(start);

    return 0;
}