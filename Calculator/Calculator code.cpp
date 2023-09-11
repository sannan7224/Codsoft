#include <iostream>
using namespace std;
float a,b;
char op;

     void calculator()
                      {
                       switch(op)
                                 {
                                  case '+':
                                           cout<<a<<"+"<<b<<"="<<a+b<<endl;
                                           break;
                                  case '-':
                                           cout<<a<<"-"<<b<<"="<<a-b<<endl;
                                           break;
                                  case '*':
                                           cout<<a<<"*"<<b<<"="<<a*b<<endl;
                                           break;
                                  case '/':
                                           cout<<a<<"/"<<b<<"="<<a/b<<endl;
                                           break;
                                 } 
                       }
int main()
{
    cout<<"enter number 1"<<endl;
    cin>>a;
    cout<<"enter number 2 "<<endl;   
    cin>>b;
    cout<<"enter operator"<<endl;
    cin>>op;
    
    calculator();
    
    system("PAUSE");
    return 0;
}