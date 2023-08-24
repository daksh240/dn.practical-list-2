#include <iostream>
using namespace std;
 
class A 
{
	public:
    
    void display();
};
 

void A::display() { cout << "This is function outside the class."; }
 
int main()
{
    A d1;
    d1.display();
    return 0;
}
