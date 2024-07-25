#include<iostream>
using namespace std;

int main(){
  // int a =4;
  // int b =6;
  // cout<<" a&b "<<(a&b)<<endl;
  // cout<<" a | b "<<(a|b)<<endl;
  // cout<<" ~a "<<~a<<endl;
  // cout<<" a^b "<<(a^b)<<endl;
  // cout<<" 17>>1 "<<(17>>1)<<endl;

  // int i = 0;
  // int sum =3;
  // cout<<sum+(i++)<<endl;
  // cout<<sum+(++i)<<endl;
  // cout<<i<<endl;


  // int a,b=1;
  // a=10;
  // if(++a){
  //   cout<<b;
  // }
  // else{
  //   cout<<++b;
  // }

  // int n;
  // cin>>n;
  // int sum = 0;
  // for(int i = 0;i<n;i++){
  //   sum = sum + i + 1;
  // } 
  // cout<<sum<<endl;

  
  int n;
  cin>>n;
  int a=0;
  int b=1;
  int c=a+b;
  if(n==0){
    cout<<endl;
  }
  else if(n==1){
    cout<<a<<" "<<endl;  
  }
  else if(n==2){
    cout<<a<<" ";
    cout<<b<<" ";
  }
  else{
    cout<<a<<" ";
    cout<<b<<" ";
    cout<<c<<" ";
    for (int i = 0; i < n-3; i++){
      a=b;
      b=c;
      c=a+b;
      cout<<c<<" ";
    }
  }

  



  return 0;
}