#include <iostream>
using namespace std;
struct Node
{ 
    int data;
    Node *next;
    Node(int _data)
    {
        data = _data;
        next = NULL;
    }
    Node()
    {
        data = 0;
        next = NULL;
    }
};
int main()
{
    Node firstNode = Node(4);

    return 0;
}
