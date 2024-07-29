#include <iostream>
using namespace std;

int main()
{
  // int n;

  // while(n>0){
  //   cin>>n;
  //   switch(n){
  //     case 1:
  //       cout<<"it is one"<<endl;
  //       break;
  //     case 2:
  //       cout<<"it is two"<<endl;
  //       break;
  //     case 3:
  //       cout<<"it is three"<<endl;
  //       exit(0);
  //     default:
  //       cout<<"it is positive"<<endl;
  //       break;
  //   }
  // }

  // int a,b;
  // char op;
  // cin>>a;
  // cin>>b;
  // cout<<"select operator (+/-/*//)"<<endl;
  // cin>>op;
  // switch (op)
  // {
  // case '+':
  //   cout<<a+b<<endl;
  //   break;
  // case '-':
  //   cout<<a-b<<endl;
  //   break;
  // case '*':
  //   cout<<a*b<<endl;
  //   break;
  // case '/':
  //   cout<<a/b<<endl;
  //   break;
  // default:
  //   break;
  // }

  int amount;
  cout << "enter amount : ";
  cin >> amount;
  int n1 = 100;
  int n2 = 50;
  int n3 = 10;
  int n4 = 1;
  int n1_notes = 0, n2_notes = 0, n3_notes = 0, n4_notes = 0;
  while (amount > 0)
  {
    switch (amount >=  n1)
    {
    case true:
      n1_notes++;
      amount -= n1;
      break;
    case false:
      switch (amount >= n2)
      {
      case true:

        n2_notes++;
        amount -= n2;
        break;
      case false:
        switch (amount >= n3)
        {
        case true:
          n3_notes++;
          amount -= n3;
          break;
        case false:
          n4_notes += amount;
          amount = 0;
          break;
        }
        break;
      }
      break;
    }
  }
  cout << "Rs 100 notes : " << n1_notes << endl;
  cout << "Rs 50 notes : " << n2_notes << endl;
  cout << "Rs 10 notes : " << n3_notes << endl;
  cout << "Rs 1 coins : " << n4_notes << endl;
  return 0;
}