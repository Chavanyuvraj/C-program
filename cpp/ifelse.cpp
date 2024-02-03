12#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter a number :";
    cin>>age;
    if(age<=18)
    {
        cout<<"the are child";
    }
   else if (age==18){
        cout<<"the are young";
    }
    else{
        cout<<"the are old";
    }
    return 0;
}