#include<iostream>
using namespace std;
class Account{
    int bal;
    int amt_w;
    public:
    void accept(void);
    void chk(void);
    void display(void);

    };
   void Account:: accept(){
        bal=50000;

        cout<<"Enter your withdrowl amaunt"<<endl;
        cin>>amt_w;
    }

  void  Account:: chk(){
        if(bal<amt_w){
            cout<<"your transaction is filed"<<endl;
           cout<<"your balence is"<<bal<<endl;
           

        }
        else
        cout<<"your transaction succesfull"<<endl;
          bal=bal-amt_w;
          cout<<"your balence is"<<bal<<endl;
    }
    /*void Account::display(){
        bal=bal-amt_w;
        cout<<"your balence is"<<bal<<endl;
    }     */
        
    int main(){
        Account a;
        
        a.accept();
        a.chk();
       // a.display();

        return 0;

}
