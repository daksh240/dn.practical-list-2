#include <iostream>  
using namespace std;  
class Operate  
{  
public:  
      
    void display();  
};  

void Operate::display()     
{  
		cout<<" this is the member function of the class. ";  
}  
int main ()  
{  
 
	Operate d1;  
	d1.display();  
	return 0;  
}  
