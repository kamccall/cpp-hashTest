#include "hashtest.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    hashtest1 hashtable1;
    hashtest2 hashtable2;
    
    vector<string> words = {"bibs", "bisb", "bbs", "bsb", "busb", "bubs", "busby", "busy", "abc", "bca", "acb", "bac", "cab", "cba", "dax", "kev", "jen", "ann", "bob", "mar", "cyn", "roc", "mik"};

    for (int i = 0; i < words.size(); i++)
    {
        hashtable1.insert(words[i]);
        hashtable2.insert(words[i]);
    }
    
    hashtable1.display();

    cout << "num words:  " << words.size() << endl;
    hashtable1.numFilled();

    hashtable2.display();

}