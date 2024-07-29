#include<iostream>
using namespace std;

float nCr(int n,int r){
  int n_factorial = 1;
  int r_factorial = 1;
  int n_r_factorial = 1;
  for(int i= 1;i<=n;i++){
    n_factorial=n_factorial*i;
  }
  for(int i= 1;i<=r;i++){
    r_factorial = r_factorial*i;
  }
  for(int i= 1;i<=n-r;i++){
    n_r_factorial=n_r_factorial*i;
  }
  return n_factorial/(r_factorial * n_r_factorial);
}

int fibonacci(int n){
  int a = 0;
  int b = 1;
  int c = a+b;
  switch(n){
    case 1:
      return a;
      break;
    case 2:
      return b;
      break;
    case 3:
      return c;
      break;
    default:
      for(int i = 0;i<n-3;i++){
        a=b;
        b=c;
        c=a+b;
      }
      return c;
  }
}

int main(){
  int n;
  cin>>n;
  int nth_term = fibonacci(n);
  cout<<nth_term<<endl;
  return 0;
}