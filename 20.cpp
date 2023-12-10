#include<iostream>
using namespace std;

int main(){
    int a,b;
    int *c=&a;
    int *d=&b;
    cin>>a;
    cin>>b;
    cout<<(*c+*d)<<endl;
    cout<<abs(*c-*d)<<endl;
    return 0;
}