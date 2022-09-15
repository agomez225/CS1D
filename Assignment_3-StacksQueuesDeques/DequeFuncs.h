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



void stringDeque::insertRear(string data)
{
stringDequeNode* temp = new stringDequeNode(data);

    if (rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp; // shouldn't there also be a temp->next = rear
        rear = temp;


    }



}

void stringDeque::deleteRear()
{
    if (rear == NULL)
    return;

    else
    {
        stringDequeNode* temp = rear;

        rear = rear->next;

        delete temp;


    }
}

void stringDeque::insertFront(string data)
{

stringDequeNode* temp = new stringDequeNode(data);

if (front == NULL)
{
    front = temp;
    rear = temp;
}
else
{
    front->next = temp;
    front = temp;
}

}

void stringDeque::deleteFront()
{
    if (front == NULL)
    return;

    else
    {
        stringDequeNode* temp = front;


    }

}

