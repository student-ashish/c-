#include<iostream>
using namespace std;
class person
 {
    char name[20];
    int age ;
    public: 
        void getdata(void);
        void display(void);
 };
 void person :: getadata(void)
 {
    cout<<"enter your name = ";
    cin>>name;
    cout <<"enetr your age  = ";
    cin>>age;
 }
 void person :: display(void)
 {
    cout<<"\nName = "<<name;
    cout<<"\nAge = "<<age;
 }
 int main(){
    person p;
    p.getdata();
    p.display();

    return 0;
 }