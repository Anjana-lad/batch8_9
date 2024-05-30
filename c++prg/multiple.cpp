//multiple inheritance
#include<iostream>
using namespace std;
class Dad{
 protected:
 int d_money;
 public:
 int get_d_money(){
    cout<<"Enter d_money;";
    cin>>d_money;
 }
 int display_d(){
    cout<<"Dad_money:"<<d_money<<endl;
 }
};
class Mom{
    protected:
    int m_money;
    public:
    int get_m_money(){
        cout<<"Enter m_money:";
        cin>>m_money;
    }
    int display_m(){
        cout<<"Money_m:"<<m_money<<endl;
    }
};
class child :public Dad, public Mom{
    public:
    int total;
    public:
    int total_money(){
        get_d_money();
        get_m_money();
        total=d_money+m_money;
    }
   int money(){
    display_d();
    display_m();
    cout<<"Total="<<total<<endl;
   }
};
int main(){
    child ch;
    ch.total_money();
    ch.money();
}