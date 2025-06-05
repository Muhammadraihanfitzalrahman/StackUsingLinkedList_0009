#include <iostream>
using namespace std;

// node class representing a single node in the linked list
class Node 
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
    private:
    Node *top; // pointer to the top node of the stack

    public:
    stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    //push operation insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); //Allocate memory for the new node
        newNode->data = value; // assign value
        newNode->next = top; // set the next pointer of the new node to the current top
        top = newNode; // update the top pointer to the new node
        cout << "push value: " << value << endl;
        return value;
    }

    //IsEmpty operation Check if the stack is empty
    bool IsEmpty()
    {
        return top == NULL; // return true if the top pointer is NULL, indicating an empty
    }

    // pop operation : remove the topmost element from the stack
    void pop()
    {
        if (IsEmpty())
        {
            cout << "stack is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current !=NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. push\n";
        cout << "3. Push\n";
        cout << "4. push\n";
        cout << "Enter your choice"
    }
}