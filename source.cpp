#include "hashtest.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    hashtest hashtable;
    
    vector<string> words = {"abc", "bca", "acb", "bac", "cab", "cba", "dax", "kev", "jen", "ann", "bob", "mar", "cyn", "roc", "mik"};

    for (int i = 0; i < words.size(); i++)
    {
        hashtable.insert(words[i]);
    }
    
    hashtable.display();

    cout << "num words:  " << words.size() << endl;
    hashtable.numFilled();
}