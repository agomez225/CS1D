//  Adrian Gomez #1095218
// 8/26/22 22:30

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
void sanitizeVector(vector<string> &);
int userInput(vector<string> &);

int main()
{

    vector<string> unsanitized_bank;

    // amount of words/sentences user is inputting
    int amount = userInput(unsanitized_bank);

    cout << "Palindrome Checker\n~~~~~~~~~~~~~~~~~~\n";

    vector<string> sanitized_bank = unsanitized_bank;

    sanitizeVector(sanitized_bank);

    // for each words/sentence that the user inputted
    for (int i = 0; i < amount; i++)
    {

        if (sanitized_bank[i].size() == 0)
        {
            cout << "Element " << i + 1 << " is empty";
        }

        else if (palindromeWrapper(sanitized_bank[i]))
        {
            cout << "\n\"" << unsanitized_bank[i] << "\" is a palidrome\n";
        }
        else
        {
            cout << "\n\"" << unsanitized_bank[i] << "\" is not a palidrome\n";
        }
    }
}

// The purpose of this function is to pass the size of each element into subFunc(),
// which is the recursive function that actually does the checking
bool palindromeWrapper(string input)
{
    int n = input.size();


    return subFunc(input, (0), n - 1);
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

void sanitizeVector(vector<string> &input)
{
    // For each element in the vector
    for (int i = 0; i < input.size(); i++)
    {

        // Rude awakening that strings in C++ don't have a toLower()
        // Makes all characters in the string lowercase
        transform(input[i].begin(), input[i].end(), input[i].begin(), ::tolower);

        // Removes spaces from each element
        removeSpace(input[i]);

        string temp = "";

        //  For each character in each element, if it is a letter, append it to the temp variable
        for (int j = 0; j < input[i].length(); j++)
        {
            string element = input[i];

            if ((element[j] >= 'a' && element[j] <= 'z') || (element[j] >= 'A' && element[j] <= 'Z'))
            {
                temp = temp + input[i].at(j);
            }
        }
        // Now, the temp variable has been cleaned of any nonalphabetic characters
        input[i].assign(temp);

        // I have successfully made the string lowercase, removed any nonalphabetic characters,
        // and removed any spaces
    }
}

int userInput(vector<string> &list) // Returns the amount of words/sentences to main()
{
    int amount = 0;

    cout << "How many sentences/words would you like to test? ";
    cin >> amount;
    cin.ignore();


    for (int i = 0; i < amount; i++)
    {
        cout << "Enter one sentence/word at a time, separated by hitting Enter: ";

        string input = "";
        getline(cin, input);

        list.push_back(input);
    }

    return amount;
}