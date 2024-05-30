//multilevel inheritance : In this we have one parent class from that one derived class and from derived class we have another derived class.
#include<iostream>
using namespace std;
class employee{
    private:
    int eid;
 public:
    int getdata(){
        cout<<"Enter id:";
        cin>>eid;
    }
    int show(){
        cout<<"Employee id:"<<eid<<endl;
    }
};
class Task:public employee{
    public:
    int t1,t2;
    public:
    int gettask(){
        getdata();
        cout<<"Enter number of tasks";
        cin>>t1;
        cout<<"Enter task2:";
        cin>>t2;
    }
    int show_t(){
        show();
        cout<<"Task1:"<<t1<<"\n Task2:"<<t2<<endl;
    }
};
class appraisal:public Task{
         public:
         int total_t;
         public:
         int res(){
            gettask();
            total_t=t1+t2;
         }
         int display(){
            show_t();
            cout<<"Total task:"<<total_t<<endl;
         }
};
int main(){
    appraisal app;
    app.res();
    app.display();
}