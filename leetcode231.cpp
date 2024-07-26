#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string st = "";
  int number_of_ones = 0;
  while(n>0){
    int digit = n%2;
    if(digit == 1){
      number_of_ones++;
    }
    n = (n-n%2)/2;
  }
  if(number_of_ones == 1){
    return true;
  }
  else{
    return false;
  }
  return 0;
}