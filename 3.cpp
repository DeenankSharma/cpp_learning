#include<iostream>
using namespace std;

int main(){
  // int n;
  // cin>>n; // cun does not consider spaces or tabs
  // n = cin.get(); //to get spaces and tabs
  // cout<<n;
  // if(n>0){
  //   cout<<n;
  // }
  // else{
  //   cout<<"-ve";
  // }
  // cout<<n;


  // int a =2;
  // int b =a+1;
  // if((a=3)==b){
  //   cout<<a;
  // }
  // else{
  //   cout<<a+1;
  // }

  // char ch;
  // cin>>ch;
  // int c = ch;
  // if(c>=48 && c<=57){
  //   cout<<"it is a number";
  // }
  // else if(c>=65 && c<=90){
  //   cout<<"it is uppercase";
  // }
  // else if(c>=97 && c<=122){
  //   cout<<"it is lowercase";
  // }


  int n;
  cin>>n;
  int k = 0;
  int d = 1;
  while(d<=n){
    if (n%d == 0){
      k++;
    }
    d++;
  }

  if(k>2){
    cout<<"it is not a prime";
  }
  else if(k==2 || k==1){
    cout<<"it is a prime";
  }

  return 0;
}