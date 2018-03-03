#include<string>
using namespace std;

class hashtest1
{
static const int ARRAYSIZE = 53;
private:
   string items[ARRAYSIZE];

public:
   hashtest1();

   void insert(string);
   void display();
   void numFilled();
};


class hashtest2
{
static const int ARRAYSIZE = 53;
private:
   struct hashnode
   {
      string data;
      hashnode* next;
   };

   hashnode* items[ARRAYSIZE];

public:
   hashtest2();

   void insert(string);
   void display();
  
};