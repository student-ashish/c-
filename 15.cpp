#include<iostream>
using namespace std;

int main(){
    int marks[] = {32,43,65,76,87,98};
    // int mathsmarks[4];
    // mathsmarks[0] = 345;
    // mathsmarks[1] = 345;
    // mathsmarks[2] = 345;
    // mathsmarks[3] = 345;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2]=321;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout <<"this are maths marks"<<endl;
    // cout<<mathsmarks[0]<<endl;
    // cout<<mathsmarks[1]<<endl;
    // cout<<mathsmarks[2]<<endl;
    // cout<<mathsmarks[3]<<endl;
    // for (int i = 0; i<4; i++){
    //     cout<<"the value of mark"<<i<<marks[i]<<endl;
    // }
    int i = 0;
    while (i<=3){
        cout<<"the value of marks"<<i<<marks[i]<<endl;
    }
    return 0;
}