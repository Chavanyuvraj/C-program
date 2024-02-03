#include<iostream>
using namespace std;
class time{
    int h1;
    int m1;
    int h2;
    int m2;
    int total;
    int h3;
    int m3;
    public:
    void accept(void);
    void add(void);
    void display(void);
};
   void time:: accept (void){
        cout<<"Enter the first hovr";
        cin>>h1;
        cout<<"Enter the first minites";
        cin>>m1;
          cout<<"Enter the second hover";
        cin>>h2;
        cout<<"Enter the second minites";
        cin>>m2;
    }
      void time:: add(void){

           int total;
           m3=m1+m2;
         h3= m3/60;
           h3=h1+h2;
          
         total=h1+h2+m1+m2;


        }
      void time:: display(void){
        cout<<"total hower"<<h3;
        cout<<"total minites"<<m3%60;
            cout<<"total time"<<total;
        }
        


int main(){
    time a;
    a.accept();
    a.add();
    a.display();

return 0;
}