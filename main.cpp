#include <iostream>
using namespace std;

class Node
{
public:
    int val = 0;
    Node *ptr = nullptr;
    Node *next;

    Node()
    {
        ptr = this;
    }
 
    void setVal(int n)
    {
        val = n;
    }

    void setAnotherVal(int n)
    {
        Node *v2 = new Node;
        v2->setVal(n);
        next = v2->ptr;
    }
};

int main()
{
    Node v1;
    cout << "\nv1: " << v1.val << " v1Addr: " << v1.ptr;
    v1.setVal(10);
    cout << endl
         << v1.val;
    v1.setAnotherVal(4);
    cout << endl
         << v1.next->val << " addr: " << v1.next->ptr;
    v1.next->setAnotherVal(6);
    cout << endl
         << v1.next->next->val << " addr: " << v1.next->next->ptr;
    v1.next->next->setAnotherVal(8);
    cout << endl
         << v1.next->next->next->val << " addr: " << v1.next->next->next->ptr;
    v1.next->next->next->setAnotherVal(8);
    cout << endl
         << v1.next->next->next->next->val << " addr: " << v1.next->next->next->next->ptr;

    cout << endl;
    system("pause");
    return 0;
}