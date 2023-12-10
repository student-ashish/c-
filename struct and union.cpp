#include<iostream>
using namespace std;
struct employee
{
    int Eid;
    char fav;
    float salary;
};
int main(){
    struct employee ashish;
    ashish.Eid=12;
    ashish.fav= 'world';
    ashish.salary=1234567890098765543211;
    cout<<"employee id of ashish = "<<ashish.Eid<<endl;
    cout<<"fav character  of ashish = "<<ashish.fav<<endl;
    cout<<"salary of ashish = "<<ashish.salary<<endl;
    return 0;
}