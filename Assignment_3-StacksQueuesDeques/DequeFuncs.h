#include "StackFuncs.h"


class stringDequeNode
{
    public:
    string data;
    stringDequeNode* next;

    stringDequeNode(string data) {this->data = data; next = NULL;}
    stringDequeNode(){};

};


class stringDeque
{
    public:

    stringDequeNode* front;
    stringDequeNode* rear;

    stringDeque()
    {
        front = NULL;
        rear = NULL;
    }

    void insertFront(string); // these 2 need to be implemented
    void deleteFront();

    void push(string); //enqueue
    void pop();         // dequeue
    string getFront();
    void print();
};