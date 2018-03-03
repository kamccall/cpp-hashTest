#include<string>
using namespace std;

class hashtest
{
static const int ARRAYSIZE = 19;
private:
   string items[ARRAYSIZE];

public:
   hashtest();
   void insert(string);
   void display();
   void numFilled();
};