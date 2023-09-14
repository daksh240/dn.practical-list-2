#include<iostream>
using namespace std;
void sum(int a,int b,int *s) 
{
    *s=a+b;
}
int main()
{
    int a,b,s;

    cout<<"Enter Number 1 :: ";
    cin>>a;
    cout<<"Enter number 2 :: ";
    cin>>b;

    sum(a,b,&s);
    cout << "Sum is ::"<<s<<endl<<endl;
    
    cout<<"daksh nanera 08"<<endl;
    return 0;
}
