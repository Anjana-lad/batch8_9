//diamond problem: combination of multiple and multilevel inheritance
#include<iostream>
using namespace std;
int p,q,r,s;
class P{
    public:
    int getpq(){
        cout<<"P=";
        cin>>p;
        cout<<"Q=";
        cin>>q;
    }
};
class Q: virtual public P{
    public:
    int getr(){
       cout<<"R=";
        cin>>r;
    }
};
class R :virtual public P{
    public:
    int get_s(){    
        cout<<"S=";
        cin>>s;
    }
};
class S: public Q,public R{
    public:
    int tot1;
    public:
    int result(){
        getpq();
        getr();
        get_s();
    }
    int tot(){
     tot1=p+q+r+s;
    cout<<"Total="<<tot1<<endl;
    }
};
int main(){
    S ss;
    ss.result();
    ss.tot();
}