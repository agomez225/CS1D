#include "StackFuncs.cpp"
#include "QueueFuncs.cpp"



using namespace std;





class stringList
{

    public:
    string data;

    stringList(string data) {this->data = data;}
    stringList(){};

    stringList* next;

};

class doubleList
{

    public:
    double data;

    doubleList(double data) {this->data = data;}
    doubleList(){};

    doubleList* next;
};


int main()
{
    // Initializing the STL queues for part A and B
    stack<string> stackString;

    stack<double> stackDouble;

    stringPopulate(stackString);

    doublePopulate(stackDouble);

    // Part A =====================================================================================
    cout << "Part A:\n";
    cout <<"STL String Stack:\n";
    int originalSize = stackString.size(); // because stack size is being decremented every loop
    for (int i = 0; i < originalSize; i++)
    {
        cout << stackString.top() << endl;
        stackString.pop();

    }

    cout <<"\nSTL Double Stack:\n";
    originalSize = stackDouble.size(); // because stack size is being decremented every loop
    for (int i = 0; i < originalSize; i++)
    {
        cout << stackDouble.top() << endl;
        stackDouble.pop();

    }
    //============================================================================================
    // Part B

    // Repopulating the stacks for part B
    cout <<"\nPart B\n";

    stringPopulate(stackString);
    doublePopulate(stackDouble);

    while (stackString.top() != "Jordyn")
    {
        cout << "\nPopping " << stackString.top();
        stackString.pop();
    }
    cout << "\nPopping Jordyn\n";
    stackString.pop();

    cout << "\nAfter popping Jordyn, here are the contents of the stack:\n";
    printStack(stackString);


    double target = 2021.2;
    while (stackDouble.top() != target)
    {
        cout << "\nPopping " << stackDouble.top() << endl;
        stackDouble.pop();

    }
    cout << "Popping 2021.2\n";
    stackDouble.pop();

    cout << "\nAfter popping 2021.2, here are the contents of the stack:\n";
    printStack(stackDouble);




    // Part C =====================================================================================

    cout << "\nPart C:\n";
    stringList* stringStackList = new stringList("Jordyn");
    stringList** stringModifier = &stringStackList;
    addStringNodeStack(stringModifier, "JoAnn");
    addStringNodeStack(stringModifier, "Don");
    addStringNodeStack(stringModifier, "Mark");
    addStringNodeStack(stringModifier, "Jennifer");
    addStringNodeStack(stringModifier, "Eric");

    doubleList* doubleStackList = new doubleList(888.55);
    doubleList** doubleModifier = &doubleStackList; 
    addDoubleNodeStack(doubleModifier, 2021.2);
    addDoubleNodeStack(doubleModifier, 777.77);
    addDoubleNodeStack(doubleModifier, 88.64);
    addDoubleNodeStack(doubleModifier, 444.44);
    addDoubleNodeStack(doubleModifier, 123.123);



    cout <<"\nString Linked List:\n";
    printListStack(stringStackList);
    
    cout <<"\nDouble Linked List:\n";
    printListStack(doubleStackList);

    // Part D =====================================================================================
    cout << "\nPart D:\n";

    cout << "\n\nRemoving Jordyn\n\n";
    deleteStringNodeStack(stringModifier, "Jordyn");

    cout << "\nPrinting string linked list stack\n";
    printListStack(stringStackList);


    cout << "\n\nRemoving 2021.2\n\n";
    deleteDoubleNodeStack(doubleModifier, 2021.2);

    cout << "\nPrinting double linked list stack\n";
    printListStack(doubleStackList);

    // Part E ====================================================================================

    cout << "\nPrinting String Queue:\n";
    stringQueue strings;
    strings.enQueue("Jordyn");
    strings.enQueue("Joann");
    strings.enQueue("Don");
    strings.enQueue("Mark");
    strings.enQueue("Jennifer");
    strings.enQueue("Eric");
    strings.print();

    cout << "\nPrinting Double Queue:\n";
    doubleQueue doubles;
    doubles.enQueue(888.55);
    doubles.enQueue(2021.2);
    doubles.enQueue(777.77);
    doubles.enQueue(88.64);
    doubles.enQueue(444.44);
    doubles.enQueue(123.123);
    doubles.print();
    
    // Part F ======================================================================================

    cout << "\nRemoving Don from Queue\n";

    while (strings.getFront() != "Don")
    {
        cout << "Dequeing " << strings.getFront() << endl;
        strings.deQueue();
    }
    strings.deQueue();

    cout << "\nPrinting strings queue:\n";
    strings.print();

while (doubles.getFront() != 2021.2)
    {
        cout << "Dequeing " << doubles.getFront() << endl;
        doubles.deQueue();
    }
    doubles.deQueue();

    cout << "\nPrinting doubles queue:\n";
    doubles.print();

}