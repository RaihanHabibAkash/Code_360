// Problem: Implement Stack With Linked List
// Platform: Code360
// Difficulty: Moderate
// Link: https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475
// Topics: Stack creation using Singly linked list

/*
You must implement the Stack data structure using a Singly Linked List.



Create a class named 'Stack' which supports the following operations(all in O(1) time):



getSize: Returns an integer. Gets the current size of the stack

isEmpty: Returns a boolean. Gets whether the stack is empty

push: Returns nothing. Accepts an integer. Puts that integer at the top of the stack

pop: Returns nothing. Removes the top element of the stack. It does nothing if the stack is empty.

getTop: Returns an integer. Gets the top element of the stack. Returns -1 if the stack is empty
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4
3 5
3 4
1
2
Sample Output 1:
2
false    
Explanation for Sample Output 1:
The first two queries ('3') push 5 and 4 on the stack. So the size of the stack becomes 2. 

Therefore the third query ('1') prints the size, and since the stack is not empty, the fourth and final query ('2') outputs "false"
Sample Input 2:
4
3 5
3 4
4
5
Sample Output 2:
5   
Explanation for Sample Output 2:
The first two queries ('3') push 5 and 4 on the stack.

The third query ('4') removes the top element of the stack, which is 4.

The fourth and final query ('5') prints the top element of the stack, 5
Constraints:
1 <= q <= 10^6
1 <= type <= 5
1 <= Data <= 2^31 - 1

Where 'type' is the type of query and 'Data' is the values getting pushed and popped from the stack. 

Time Limit: 1sec
*/



class Stack
{
public:
    class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            next = NULL;
        }
    };
    int sz = 0;
    Node* head = NULL;

    Stack()
    {

    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {   
        sz++;
        // Create new node
        Node* newNd = new Node(data);

        // No node
        if(head == NULL) {
            head = newNd;
            return;
        }

        // Connection
        newNd->next = head;
        head = newNd;
    }

    void pop()
    {   
        // Do noting
        if(head == NULL) return;

        sz--;
        // Last node delete
        if(head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        // Connection
        Node* dltNd = head;
        head = head->next;
        delete dltNd;
    }

    int getTop()
    {
        if(head == NULL) return -1;
        else return head->val;
    }
};

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/