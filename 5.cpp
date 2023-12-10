#include<iostream>
using namespace std;
int c=23;
int main()
{
    /*int a,b,c;
    cout<<"enter the value of a="<<endl;
    cin>>a;
    cout<<"enter the value of b="<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum of a and b="<<c<<endl;
    cout<<"the valu globle c"<<::c;
    float a=23.7f;
    long double b=12.11l;
    cout<<"floating number ="<<a<<endl<<"the vakue of long double ="<<b;
    cout<<"size of a="<<sizeof(23.7)<<endl;
    cout<<"size of a="<<sizeof(23.7f)<<endl;
    cout<<"size of a="<<sizeof(23.7F)<<endl;
    cout<<"size of a="<<sizeof(23.7L)<<endl;
    cout<<"size of a="<<sizeof(23.7l)<<endl;
    float x=123;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;*/
    int a=12;
    float b=12.56;
    cout<<"the value of a="<<(float)a<<endl;
    cout<<"the value of a="<<int(b)<<endl;
    int c=int(b);
    cout<<"the sum if exoression="<<a+b<<endl;
    cout<<"the sum if exoression="<<a+(int)b<<endl;
    cout<<"the sum if exoression="<<a+int(b)<<endl;
    return 0;
}