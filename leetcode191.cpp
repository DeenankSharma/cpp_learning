#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  int hammingWeight = 0;
  while(n>0){
    int bit = n%2;
    n = floor(n/2);
    if(bit == 1){
      hammingWeight++;
    }
  }
  cout<<hammingWeight;
  return 0;
}