#include<iostream>
using namespace std;
class kuldeep;
class ashish{
    private:
    int money = 10;
    friend void sumit(ashish,kuldeep);
};
class kuldeep{
    private:
    int money =20;
    friend void sumit(ashish,kuldeep);
};
void sumit(ashish r1, kuldeep r2){
    cout<<"sum="<<r1.money + r2.money;
}
// main(){
//     ashish obj1;
//     kuldeep obj2;
//     sumit(obj2,obj1);
// }

 int main(){
    ashish obj1;
    kuldeep obj2;
    sumit(obj1 , obj2);

    
     return 0;
 }