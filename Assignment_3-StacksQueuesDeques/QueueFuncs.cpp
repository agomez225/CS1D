#include "QueueFuncs.h"

void stringQueue::enQueue(string data)
{
    stringQueueNode * temp = new stringQueueNode(data);

    if (rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;


    }


}

void stringQueue::deQueue()
{
    if (front == NULL)
        return;

stringQueueNode* temp = front;
front = front->next;

    if (front == NULL)
        rear = NULL;

delete temp;
}

void stringQueue::print()
{
    if (front->next == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {

   stringQueueNode* temp = front;

    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    }

}




string stringQueue::getFront()
{
    return front->data;
}



//=============================================================================================


void doubleQueue::enQueue(double data)
{
    doubleQueueNode * temp = new doubleQueueNode(data);

    if (rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;


    }


}

void doubleQueue::deQueue()
{
    if (front == NULL)
        return;

doubleQueueNode* temp = front;
front = front->next;

    if (front == NULL)
        rear = NULL;

delete temp;
}

double doubleQueue::getFront()
{
    return front->data;
}

void doubleQueue::print()
{
    if (front->next == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {

   doubleQueueNode* temp = front;

    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    }

}
