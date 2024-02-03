z#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;

};
int main(){
    car carobj1;
    carobj1.brand="BMW";
    carobj1.model="x5";
    carobj1.year=1999;
    

car carobj2;
carobj2.brand="royal's royal";
carobj2.model="trend";
carobj2.year=2002;

cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year;

}