#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  int answer = 0;
  int i=0;
  while(n!=0){
    int digit = n%10;
    if(digit==1){
      answer = answer + pow(2,i);
    }
    n = n/10;
    i++;
  }
  cout<<answer<<endl;
  return 0;
}