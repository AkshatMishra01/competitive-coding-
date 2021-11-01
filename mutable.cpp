#include <iostream>
using namespace std;

class Test
{
public:
int x;
mutable int y;
test()
{
x = 4;
y = 6;

}
};

int main()
{
const Test t1;
t1.y = 30;
cout<<t1.y;
return 0;
}
