/*Assignment 1 
Write a recursive function that takes a string as an argument and 
returns a TRUE if the string is a palindrome otherwise FALSE is 
returned.  A palindrome is a string that reads the same forward 
and backward (dad, mom, radar).  Test with a main program that 
calls the function.  The main function could solicit for input and 
terminate after receiving an EOF or one can store the strings in a 
vector or array.   
 
The recursive function should ignore white spaces, capital letters 
(case insensitive), and punctuation. For example: “A man a plan a 
canal Panama” would be a palindrome.   
 
Use paragraphing and comment each logical block of source code. 
Do not use global variables. Your output should be descriptive. 
 
Use the following input: 
Was it a cat I saw? 
A man a plan a canal Panama 
The rain in Spain 
radar 
Saddleback College 
CS 1D 
No lemon, no melon 
Racecar   
Dad 
Mom */

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool palindromeWrapper(string);
bool subFunc(string, int, int);
void removeSpace(string &);
void sanitizeString(string &);

int main()
{

    string user_input = "";

    cout << "Palindrome Checker\n~~~~~~~~~~~~~~~~~~\nEnter a string: ";
    getline(cin, user_input);

    string sanitized = user_input;

    sanitizeString(sanitized);

    if (palindromeWrapper(sanitized))
    {
        cout << "\n" << user_input << " is a palidrome\n";
    }
    else
    {
        cout << "\n" << user_input << " is not a palidrome\n";
    }
}

bool palindromeWrapper(string input)
{
    int n = input.size();

    if (n == 0)
    {
        cout << "String cannot be empty";
        return false;
    }

    else
    {
        return subFunc(input, (0), n - 1);
    }
}

bool subFunc(string input, int firstIt, int lastIt)
{
    // if both iterators are equal, that means we have reached the middle of
    // the string, which means that it is a palindrome
    if (firstIt == lastIt)
    {
        return true;
    }

    // if at any point the first & last iterators are not equal,
    // then we know we do not have a palindrome
    else if (input[firstIt] != input[lastIt])
    {
        return false;
    }

    else
    {
        // Increment/decrement iterators and creates a new substring
        string newString = input.substr(firstIt + 1, lastIt - 1);

        subFunc(newString, (firstIt + 1), (lastIt - 1));
    }
}

void removeSpace(string &input)
{
    //traversing the string
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            //using in-built function to erase element
            input.erase(input.begin() + i);
            i--;
        }
    }
}

void sanitizeString(string &input)
{
    // Rude awakening that strings in C++ don't have a toLower()
    transform(input.begin(), input.end(), input.begin(), ::tolower);


    removeSpace(input);

    string temp = "";

    // Adds every alphabetic character into a new string, temp
    for (int i = 0; i < input.size(); ++i)
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
        {
            temp = temp + input[i];
        }
    }

    // I have successfully made the string lowercase, removed any nonalphabetic characters,
    // and removed any spaces
    input = temp;
}
