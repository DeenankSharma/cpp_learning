#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum=0,pro=1;
  while(n>0){
    int digit = n%10;
    n=n-n%10;
    n=n/10;
    sum = sum+digit;
    pro = pro*digit;

  }
  cout<<pro - sum<<endl;
  return 0;
}