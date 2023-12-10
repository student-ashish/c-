#include<iostream>
using namespace std;
//volume of cube
int volume(int a){
    return a*a*a;
}
//volume of cyclinder
int volume(int r ,int h){
    return (3.14*r*r*h);
}
//volume of cuboid 
int volume(int l ,int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"volume of cube="<<volume(4)<<endl;
    cout<<"volume of cyclinder="<<volume(4,9)<<endl;
    cout<<"volume of cuboid="<<volume(4,5,6)<<endl;
    return 0;
}