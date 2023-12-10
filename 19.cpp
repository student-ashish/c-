#include<iostream>
using namespace std;
int product(int a,int b){
    static int c=0;
    c=c+1;

    return a*b+c;
}
float moneyrecived(int currentmoney, float intrest = 1.04){
    return currentmoney*intrest;
}
int main(){
    // int a,b;
    // cout<<"enter the value of a and b "<<endl;
    // cin>>a>>b;

    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    // cout<<"the product of a and b= "<<product(a,b)<<endl;
    float money = 1000000;
    cout<<"if have is much "<<money<<"in your bank accout you will recived"<<moneyrecived(money)<<"after one year"<<endl; 

    return 0;
}