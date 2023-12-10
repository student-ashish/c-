#include<iostream>
using namespace std;
int sum(int a, int b ){
    int c =a + b;
    return c;
}
// void swap(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void swappointer(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
void swaprefrenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 7 ;
    cout <<"the value of a = "<<a<<"the value of b = "<<b<<endl;
    swaprefrenceVar(a , b);
    cout<<"the value of a = "<<a<<" the value of b = "<<b<<endl;

    
    return 0;
}