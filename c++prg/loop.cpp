#include<iostream>
using namespace std;
int main(){
    int num,i,n;
    cout<<"Enter number:";
    cin>>n;
    for(num=1;num<=n;num++){
      int c=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            c++;
        break; 
      }
    }
       if(c==0 && num!=1)
      cout<<num<<",";
    }
}