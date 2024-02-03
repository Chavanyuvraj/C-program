#include<iostream>
using namespace std;

struct employee{
    int id;
    char fevchar;
    float salary;

};
int main(){
struct employee shubham;
shubham.id=1;
shubham.fevchar='c';
shubham.salary=12000000;

cout<<"the employee id is "<<shubham.id<<endl;
cout<<"the employee fevchar is"<<shubham.fevchar<<endl;
cout<<"the employee salary is"<<shubham.salary<<endl;

return 0;
}