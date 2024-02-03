#include<iostream>
using namespace std;
class emp{
int id;
static int count;
public:
void setdata(void){
cout<<"Enter the id"<<endl;
cin>>id;
    count++;
}

void getdata(void){
    cout<<"the id of this employee is "<<id<<"and this is employee number"<<count<<endl;
}
};
int  emp::count;
int main(){
    emp yuva,ajay,shubham1;
    yuva.setdata();
    yuva.getdata();

     ajay.setdata();
    ajay.getdata();

     shubham.setdata();
    shubham.getdata();
}