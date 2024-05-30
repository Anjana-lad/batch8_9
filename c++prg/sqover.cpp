//square overloading
#include<iostream>
using namespace std;
class sqoverload{
  public:
    int arr[3];
    public:
        sqoverload(int i,int j,int k){
            arr[0]=i;
            arr[1]=j;
            arr[2]=k;
        }
        int operator [](int i){
            return arr[i];
        }
};
int main(){
     sqoverload s1(10,50,73);
     cout<<s1[2]<<endl;
     cout<<s1[1]<<endl;
     cout<<s1[0]<<endl; 
}