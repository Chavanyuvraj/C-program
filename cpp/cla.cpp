#include<iostream>
using namespace std;
class account{
    int accno;
    char name[20];
    int bale;

public:
void accept(){
    cout<<"Enter your account no";
    cin>>accno;
    cout<<"Enter account holdeer name";
    cin>>name;
    cout<<"Enter your account balence";
    cin>>bale;
}
void check(){
    if(bale >= 50000){
        cout<<"you are able to apply loan"<<endl;

    }
    else
    cout<<"you are not able to loan"<<endl;
}
void display(){
    cout<<"your account number"<<accno<<endl;
    cout<<"Account holder name"<<name<<endl;
    cout<<"your account balence"<<bale<<endl;

}


};
int main (){
    account a;
    a.accept();
    a.check();
    a.display();

}