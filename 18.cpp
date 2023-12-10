#include<iostream>
using namespace std;

int sum(int a ,int b){
    int c = a+b;
    return c;
}
int & swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    return a;
}
// void swap(int* a,int* b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
int main(){
    int a=5,b=6;
    cout<<"the value of a="<<a<<"the value of b="<<b<<endl;
    swap(a,b)=456;
    cout<<"the value of a="<<a<<"the vslue of b="<<b<<endl;

    // cout <<"the sum of  a and b"<<
    // cout<<" the sum of a and b="<<sum(a,b)<<endl;
    return 0;
}