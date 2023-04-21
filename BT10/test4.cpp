#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;

    Node *swapAfter(Node *head, int x)
    {
        Node *prev = nullptr;
        Node *curr = head;

        while (curr != nullptr)
        {
            if (curr->value == x && curr->next != nullptr)
            {
                Node *next = curr->next;
                curr->next = next->next;
                next->next = curr;
                if (prev == nullptr)
                {
                    head = next;
                }
                else
                {
                    prev->next = next;
                }
                prev = next;
            }
            else
            {
                prev = curr;
            }
            curr = curr->next;
        }

        return head;
    }
};

int main() {
    // create linked list
    Node* head = new Node{1, new Node{2, new Node{3, new Node{2, new Node{4, nullptr}}}}};

    // swap all nodes with value 2
    head = head->swapAfter(head, 2);

    // print linked list
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}




Node* swapAfter(Node* head, int x)
    {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr && curr->value != x) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr || curr->next == nullptr) {
            return head;
        }

        Node* next = curr->next;
        curr->next = next->next;
        next->next = curr;
        if (prev == nullptr) {
            head = next;
        } else {
            prev->next = next;
        }

        return head;
    }