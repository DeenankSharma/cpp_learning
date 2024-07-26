#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  // int answer = 0;
  // int i =0;
  // while(n!=0){
  //   int bit = n&1;
  //   cout<<"bit is : "<<bit<<endl;
  //   answer = bit*pow(10,i) + answer;
  //   n = n>>1;
  //   i++;
  // }
  // cout<<answer<<endl;
  int answer = 0;
  int i =0;
  n= -1 * n;
  n = ~n;
  n = n+1;
for (int j = 0; j < 9; ++j) {
    int bit = n & 1;
    cout << "bit is : " << bit << endl;
    answer = bit * pow(10, i) + answer;
    n = n >> 1;
    i++;
}
  cout<<-1*answer<<endl;

  return 0;
}