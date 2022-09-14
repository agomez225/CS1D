#include "StackFuncs.h"

class stringQueueNode
{
    public:
    string data;
    stringQueueNode * next;

    stringQueueNode(string data) {this->data = data; next = NULL;}
    stringQueueNode(){};

};

class stringQueue
{
    public:

    stringQueueNode* front;
    stringQueueNode* rear;

    stringQueue()
    {
        front = NULL;
        rear = NULL;
    }

    void enQueue(string);
    void deQueue();
    string getFront();
    void print();
};
// ========================================================================================
class doubleQueueNode
{
    public:
    double data;
    doubleQueueNode * next;

    doubleQueueNode(double data) {this->data = data;}
    doubleQueueNode(){};

};


class doubleQueue
{
    public:

    doubleQueueNode* front;
    doubleQueueNode* rear;

    doubleQueue()
    {
        front = NULL;
        rear = NULL;
    }

    void enQueue(double);
    void deQueue();
    double getFront();
    void print();

};
