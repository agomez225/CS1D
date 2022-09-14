#include <stack>
#include <string>
#include <deque>
#include <queue>
#include <iostream>

using namespace std;

template <typename T> 
void stringPopulate(T&);

template <typename T>
void doublePopulate(T&);

template <typename T>
void printStack(T);

template <typename T> 
void addStringNodeStack(T**, string);

template <typename T> 
void addDoubleNodeStack(T**, double);

template <typename T>
void printListStack(T*);

template <typename T>
void deleteStringNodeStack(T** ,string);

template <typename T>
void deleteDoubleNodeStack(T** ,double);
