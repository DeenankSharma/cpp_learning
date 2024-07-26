#include<iostream>
#include<cmath>
#include <typeinfo>

using namespace std;

int main(){
  int n;
  cin >> n;
  string st = "";
  int n_complement = 0;
  while(n>0){
    int digit = n%2;
    // cout<<digit<<" ";
    if(digit == 1){
      st = "0" + st;
    }
    else if(digit == 0){
      st = "1" + st;
    }
    n = (n - n%2)/2;
  }
  cout<<st<<endl;
  for (int i = 0; i < st.length(); i++){
    char ch = st[i];
    // cout<<typeid(ch).name()<<endl;
    if(ch == '1'){
       n_complement = n_complement + 1*pow(2,st.length()-i-1);
      //  cout<<"ch = 1 "<<n_complement<<endl;
    }
    else if(ch == '0'){
       n_complement = n_complement + 0*pow(2,st.length()-i-1);
    }
  }
  cout<<n_complement<<endl;
  return 0;
}