#include<iostream>
using namespace std;

int main(){
  // cout<<"i am deenank"<<endl;
  char ch1 = 'a'; //char stores only single character at a time
  char a = 'b';
  int c = 3;
  bool is_true = true;
  float pi = 3.14;
  double d = 3.14;
  // cout<<sizeof(c);
  int a1 = 'a';
  cout<<a1<<endl;
  char z = 98;
  cout<<z<<endl;
  // char ch = 14845656;
  //only last bits will be considered for type casting
  // cout<<ch;
  //for storing -ve numbers:
  //1. ignore - sign
  //2. store the magnitude
  //3. take 1s complement
  //4. add 1 to the last
  //5. first bit shows sign and rest is value
  // 6. vice versa for reverse of the above

  unsigned int r = 123;
  //to store +ve numbers 
  //-ve will lead to large values
  cout<<r<<endl;
  int q = 2;
  int w = 2.0;
  if(q==w){
    cout<<"hanji"<<endl;
  }
  return 0;

}  
