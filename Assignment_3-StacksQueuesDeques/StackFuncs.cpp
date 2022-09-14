
#include "StackFuncs.h"

template <typename T> void stringPopulate(T& structure)
{
    structure.push("Jordyn");
    structure.push("JoAnn");
    structure.push("Don");
    structure.push("Mark");
    structure.push("Jennifer");
    structure.push("Eric");

}

template <typename T> void doublePopulate(T& structure)
{
    structure.push(888.55);
    structure.push(2021.2);
    structure.push(777.77);
    structure.push(88.64);
    structure.push(444.44);
    structure.push(123.123);
}

template <typename T> 
void addStringNodeStack(T** head, string data)
{
   T* newNode = new T(data); 

    if (head == NULL)
    {
        cout << "Stack is empty";
        *head = newNode;
    }
    else
    {
    newNode->next = *head;

    *head = newNode;
    }
}
template <typename T> 
void addDoubleNodeStack(T** head, double data)
{
   T* newNode = new T(data); 

    if (head == NULL)
    {
        cout << "Stack is empty";
        *head = newNode;
    }
    else
    {
    newNode->next = *head;

    *head = newNode;
    }
};

template <typename T>
void printListStack(T* head)
{
    if (head->next == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {

   T* traverser = head;

    while (traverser->next != NULL)
    {
        cout << traverser->data << endl;
        traverser = traverser->next;
    }
    }

}

template <typename T>
void printStack(T list)
{
    if (list.size() == 0)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        while (list.size()!= 0)
        {
           cout << list.top() << endl;
           list.pop(); 
        }
    }
}

template <typename T>
void deleteStringNodeStack(T** headptr, string data)
{
    T* temp = *headptr;
    
    if (*headptr == NULL)
    {
        cout << "\bnStack is empty";
    }
    
    if (temp->data == data)
    {
        *headptr = temp->next;
        delete temp;
    }
    else
    {
        while (temp->data != data)
        {
        
        temp = *headptr;
        *headptr = temp->next;

        cout << "Popping " << temp->data << endl;
        delete temp;
        temp = *headptr;


        }
        cout << "Popping " << data <<  endl;
        delete temp;
    }    


}

template <typename T>
void deleteDoubleNodeStack(T** headptr, double data)
{
    T* temp = *headptr;
    
    if (*headptr == NULL)
    {
        cout << "\bnStack is empty";
    }
    
    else if (temp->data == data)
    {
        *headptr = temp->next;
        delete temp;
    }
    else
    {
        while (temp->data != data)
        {

        temp = *headptr;    
        *headptr = temp->next;

        cout << "Popping " << temp->data << endl;
        delete temp;
        temp = *headptr;    

        }
        *headptr = temp->next;
        cout << "Popping " << data <<  endl;
        delete temp;
    }    


}