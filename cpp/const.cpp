#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //creating a cnstructor
    //constractor is a special member function with the same nameas of the class .
    //it is used to initalize the objects of its class.
    //it is atomatcally invoked an object is created

    complex(void );//construter decleration 

    void printfnumber()
    {
        cout<<"your number is" <<a <<"+" <<b <<"i" <<endl;
    }
};
complex:: complex(void)
{
    
    a=10;
    b=4;

}

int main(){
    complex c;
    c.printfnumber();
    return 0;
}