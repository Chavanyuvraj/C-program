#include<iostream>
using namespace std;

//function overloding....


    //Area of circle
    float area( int r){
        return (3.14+ r*r);
    }
    //rectangular box
       int volume(int l, int b, int h){
        return (l*b*h);

       }
       //sum of two number
       int sum(int a,int b){
        return (a+b);
       }

int main(){

    cout<<"Area of circle"<<area(5)<<endl;

cout<<"The rectangular is"<<volume(5,4,7)<<endl;

  cout<<"the sum of 3 and 6 is"<<" "<<sum(3,6);

 return 0;
}