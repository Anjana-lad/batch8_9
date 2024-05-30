//parameterized constructor;
#include<iostream>
using namespace std;
class add_fun{
    int a,b,c;
    public:
    add_fun(int a1,int b2){
        a=a1;
        b=b2;
    }
    int result(){
        c=a+b;
        cout<<"Res="<<c<<endl;
    }
};
int main(){
  int a,b;
  cout<<"Enter values";
  cin>>a>>b;
  add_fun af(a,b);
  add_fun af2(5,3);
  af.result();
  af2.result(); 
}