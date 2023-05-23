#include <iostream>
using namespace std;

struct Node
{
    const int value; // Hằng thành viên
    Node *next;
    Node() : value(0), next(nullptr) {}
    Node(int value) : value(value), next(nullptr) {}
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    LinkedList(int a[], int n)
    {
        Node *new_head = new Node(a[0]);
        head = new_head;
        Node *curr = head;
        for (int i = 1; i < n; i++)
        {
            Node *new_node = new Node(a[i]);
            curr->next = new_node;
            curr = curr->next;
        }
        curr->next = nullptr;
    }

    Node* getHead()
    {
        return head;
    }

    void insertHead(int value)
    {
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }
    void print()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->value << " ";
            curr = curr->next;
        }
    }

    Node* convert(Node* head)
    {
        
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    LinkedList llist(arr, n);
    llist.print();



}