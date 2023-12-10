#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout <<"enter the value of n"<<endl;
    cin>>n;
    do{
        cout <<n<<"x"<<i<<"="<<(n*i)<<endl;
        i++;
    }while(i<=10);
    return 0;
}