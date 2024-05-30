//hybrid inheritance: in this we have combination of more then one type on inheritance.
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    int getp(){
        cout<<"P:";
        cin>>p;
    }
    int showp(){
        cout<<"P: "<<p<<endl;
    }
};
class Q:public P{
    public:
    int q;
    public:
    int getq(){
        getp();
        cout<<"Q:";
        cin>>q;
    }
    int showq(){
        showp();
        cout<<"Q="<<q<<endl;
    }
};
class R{
    public:
    int r;
    public:
    int getr(){
        cout<<"R=";
        cin>>r;
    }
    int showr(){
        cout<<"R="<<r<<endl;
    }
};
class S:public Q,public R{
   public:
   int s,res; 
    public:
    int get_s(){
        getq();
        getr();
        cout<<"S=";
        cin>>s;
    }
    int shows(){
        showq();
        showr();
        cout<<"S="<<s<<endl;
        res=p+q+r+s;
        cout<<"Result="<<res<<endl;
    }
};
int main(){
    S ss;
    ss.get_s();
    ss.shows();

}