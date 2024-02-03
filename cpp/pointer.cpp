#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int b=55;
    cout<<"value of variabel a stored at address"<<&b<<"is"<<*(&b)<<endl;
    cout<<"value of variabel a stored at address :"<<&a<<"is"<<*(&a);

    return 0;
}