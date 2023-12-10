#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b=&a;
    // cout<<"the addres of a ="<<&a<<endl; 
    // cout<<"the addres of a ="<<*b<<endl;
    int** c= &b; 
    cout<<"the addres of a ="<<b<<endl; 
    cout<<"the addres of a ="<<*c<<endl; 
    cout<<"the addres of a ="<<**c<<endl; 
    return 0;
}