/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    bool isNum=true, isDot=false;
    
    cout<<"Введите число"<<endl;
    cin>>str;
    for (int i=0; i<str.length(); i++){
        if (isNum && ((str[i]==45 && i==0) || (str[i]==46) || (str[i]>47 && str[i]<58)))
            isNum=true;
        else
            isNum=false;
        if (str[i]==46){ 
            if (isDot) 
                isNum=false;
            else
                isDot=true;}
    }
    if (isNum){
        if (str[0]==46) 
            str="0"+str;
        if (str[str.length()-1]==46) 
            str=str+"0";
        if (isDot==false||(str[str.length()-1]==48 && str[str.length()-2]==46))
            cout<<str<<" - является целым числом"<<endl;
        else 
            cout<<str<<" - является дробным числом"<<endl;}
    else
        cout<<str<<" - не является числом"<<endl;

    return 0;
}
