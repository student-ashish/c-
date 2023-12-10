#include<iostream>
using namespace std;

int main(){
    int marks[]={2,4,5,6,7,8};
    int mathsmarks[4];
    mathsmarks[0]=32;
    mathsmarks[1]=72;
    mathsmarks[2]=52;
    mathsmarks[3]=62;
    cout<<"this are maths marks "<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    //marks
    cout<<"these are marks"<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2]=45;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // for (int i=0;i<4;i++){
    //     cout<<"the value of marks"<<i<<"="<<marks[i]<<endl;
    // }
    // int i =0;
    // while (i>=4){
    //     cout <<"the value of marks  "<<i<<"="<<marks[i]<<endl;
    // }
    int* p = marks;
    // cout<<"the value of marks[0]"<<*p<<endl;
    // cout<<"the value of marks[0]"<<*(p+1)<<endl;
    // cout<<"the value of marks[0]"<<*(p+2)<<endl;
    // cout<<"the value of marks[0]"<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    return 0;
}