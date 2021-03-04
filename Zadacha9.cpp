/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string> 
#include <string.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Введите первое число"<<endl;
    cin>>a;
    while(cin.fail()){
        cin.clear();
    while (cin.get() != '\n');
        cout<<"Введите корректное первое число"<<endl;
        cin>>a;}
    cout<<"Введите второе число"<<endl;
    cin>>b;
    while(cin.fail()){
        cin.clear();
    while (cin.get() != '\n');
        cout<<"Введите корректное второе число"<<endl;
        cin>>b;}
    if (a<b)
    cout<<a<<"<"<<b<<endl;
    else if(a>b)
    cout<<a<<">"<<b<<endl;
    else
    cout<<a<<"="<<b<<endl;
    return 0;
}
