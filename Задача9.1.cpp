/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector <int> arr=dataEnter();
    result(arr);
    
    
    return 0;
}

vector<int> dataEnter (){
    int n, a;
    cout<<"Введите количество чисел"<<endl;
    cin>>n;
    while(cin.fail()){
        cin.clear();
        while (cin.get() != '\n');
            cout<<"Введите корректное количество чисел"<<endl;
        cin>>n;}
    vector<int> arr;
    for (int i=0; i<n; i++){
        cout<<"Введите "<<i+1<<" число"<<endl;
        cin>>a;
        while(cin.fail()){
            cin.clear();
            while (cin.get() != '\n');
                cout<<"Введите корректное "<<i+1<<" число"<<endl;
            cin>>a;}
        arr.push_back(a);
    }
    return (arr);
}
int result (vector <int>&arr){
    for (int i=0; i<arr.size(); i++){
        if (i==0)
            cout<<arr[i];
        else if (arr[i-1]>arr[i])
            cout<<" > "<<arr[i];
        else if (arr[i-1]<arr[i])
            cout<<" < "<<arr[i];
        else cout<<" = "<<arr[i];}
}


