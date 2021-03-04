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
    string a;
    int b;
    
    cout<<"Введите число"<<endl;
    cin>>a;
    try {b=stoi(a);}
    catch(...){}
    if (to_string(b)==a)
        cout<<a<<" - является целым числом"<<endl;
    else
        cout<<a<<" - не является целым числом"<<endl;
    
    return 0;
}
