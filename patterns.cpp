#include<iostream>
using namespace std;

int main(){
  for(int i =0;i<4;i++){
    for(int j=0;j<4;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i =1;i<4;i++){
    for(int j=1;j<4;j++){
      cout<<i;
    }
    cout<<endl;
  }

  return 0;
}