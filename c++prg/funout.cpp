//member function declaring outside the class
// syntax: return_type classname :: member_function name(){
//     //body of function;
// }
#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    float marks;
    public:
    int get_details();
    int show();
};
int student::get_details(){
    cout<<"Enter rollno;";
    cin>>rollno;
    cout<<"Enter marks:";
    cin>>marks;
}
int student :: show(){
    cout<<"rollno:"<<rollno<<endl<<"Marks:"<<marks<<endl;
}
int main(){
    student s1;
    s1.get_details();
    s1.show();
}