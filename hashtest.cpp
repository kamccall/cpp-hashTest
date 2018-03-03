#include "hashtest.h"
#include "math.h"
#include <string>
#include <iostream>
using namespace std;

// HASHTEST1 SERVICES
hashtest1::hashtest1()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        items[i] = "";
    }
}

void hashtest1::insert(string word)
{
    int total = 0;

    for (int i = 0; i < word.length(); i++)
    {
       total += (word[i] - 'a') * pow(29, i);
    }

    // mod arraysize
    int index = total % ARRAYSIZE;

    // insert into items array
    items[index] = word;
}

void hashtest1::display()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << i << ": ";
        if (i < 10) cout << " ";
        cout << items[i] << endl;
    }
}

void hashtest1::numFilled()
{
    int number = 0;
    for (int i = 0; i < ARRAYSIZE; i++)
    {
       if (items[i] != "")
       {
           number++;
       }
    }
    cout << "num filled: " << number << endl;
}

// HASHTEST2 SERVICES
hashtest2::hashtest2()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        items[i] = nullptr;   
    }
}

void hashtest2::display()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << i << ": ";
        if (i < 10) cout << " ";
        hashnode* nodePtr = items[i];

        while (nodePtr != nullptr)
        {
            cout << nodePtr->data << " ";
            nodePtr = nodePtr->next;
        }

        cout << endl;
    }
}

void hashtest2::insert(string word)
{
    int total = 0;

    for (int i = 0; i < word.length(); i++)
    {
       total += (word[i] - 'a') * pow(29, i);
    }

    // mod arraysize
    int index = total % ARRAYSIZE;

    // create new node
    hashnode* newNode = new hashnode();
    newNode->data = word;
    newNode->next = nullptr;

    // insert into items array
    if (items[index] == nullptr)
    {
        items[index] = newNode;
    }
    else
    {
        newNode->next = items[index];
        items[index] = newNode;
    }
    
}