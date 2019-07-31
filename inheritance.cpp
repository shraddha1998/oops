/*INHERITANCE
inheritance provides reusability of code

derived class inherits all the functionalities of the base class with the following exceptions-
-constructor,destructor and copy constructor of the base class
-overloaded operators of the base class
-friend function of the base class
*/

#include<iostream>
using namespace std;
class A
{
int a=5;
};

class B:public A
{
public:
int b=8;
};

int main()
{
B obj;
obj.b;
return 0;
}
