//destructor 
#include<iostream>
using namespace std;
class cub_fun{
    public:
        int side;
    public:
        cub_fun(int s){
            side=s;
        }
        int show(){
            cout<<"Area="<<side*side*side<<endl;
        }
        ~cub_fun(){
            cout<<"Destructor is called.."<<endl;
        }
};

int main(){

    cub_fun cf(4);
    cf.show();
    
    cout<<"Calling destructor"<<endl;
  

}