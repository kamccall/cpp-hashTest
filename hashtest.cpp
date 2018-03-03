#include "hashtest.h"
#include <string>
#include <iostream>
using namespace std;

hashtest::hashtest()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        items[i] = "";
    }
}

void hashtest::insert(string word)
{
    int total = 0;

    // calculate for each letter
    // for (int i = 0; i < word.length(); i++)
    // {
    //    total += (word[i] - 'a') * math.exp(26, i);
    //    cout << "total so far: " << total << endl;
    // }

    total += (word[0] - 'a') * 1;
    total += (word[1] - 'a') * 29;
    total += (word[2] - 'a') * 841;

    // mod arraysize
    int index = total % ARRAYSIZE;

    // insert into items array
    items[index] = word;
}

void hashtest::display()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << i << ": " << items[i] << endl;
    }
}

void hashtest::numFilled()
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