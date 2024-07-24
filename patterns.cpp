#include<iostream>
using namespace std;

int main(){
  // for(int i =0;i<4;i++){
  //   for(int j=0;j<4;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int i =1;i<4;i++){
  //   for(int j=1;j<4;j++){
  //     cout<<i;
  //   }
  //   cout<<endl;
  // }\


  // for(int i =1;i<5;i++){
  //   for(int j=1;j<5;j++){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  
  // for(int i =1;i<5;i++){
  //   for(int j=1;j<5;j++){
  //     cout<<5-j<<" ";
  //   }
  //   cout<<endl;
  // }

  // for(int i =1;i<10;i++){
  //   if(i%3!=0){
  //     cout<<i<<" ";
  //   }
  //   else{
  //     cout<<i<<" ";
  //     cout<<endl;
  //   }
  // }

  // for (int i = 0;i<4;i++){
  //   for(int j =0;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

    // int n;
    // cin>>n;
    // int c=1;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<c;
    //         c++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int sum = 1;
    // for (int i =0;i<4;i++){
    //   for(int j = 0;j<=i;j++){
    //     cout<<sum<<" ";
    //     sum++;

    //   }
    //   cout<<endl;
    // }

    // for(int i = 1;i<=4;i++){
    //   // int start = i;
    //   for(int j = 1;j<=i;j++){
    //     cout<<i+j-1<<" ";
    //     // start++;
    //   }
    //   cout<<endl;
    // }


    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n){
    //   int j =1;
    //   while (j<=i){
    //     cout<<i-j+1<<" ";
    //     j++;
    //   }     
    //   cout<<endl;
    //   i++;
    // }

    // for(int i = 0;i<5;i++){
    //   for(int j = 0;j<5;j++){
    //     char ch ='A' + i;
    //     cout<<ch<<" ";

    //   }
    //   cout<<endl;
    // }

    // for(int i = 0;i<3;i++){
    //   for(int j = 0;j<3;j++){
    //     char ch ='A' + j;
    //     cout<<ch<<" ";
    //   }
    //   cout<<endl;
    // }

    // int n;
    // cin>>n;
    // char ch ='A';
    // for (int i = 0; i < n*n; i++){
    //   if((i+1)%n==0){
    //     char st = ch + i;
    //     cout<<st<<" ";
    //     cout<<endl;
    //   }
    //   else{
    //     char st = ch + i;
    //     cout<<st<<" ";
    //   }
      
    // };

    // int n;
    // cin>>n;
    // for(int i =0;i<n;i++){
    //   char start = 'A' + i;
    //   for(int j=0;j<=i;j++){
    //     char ch  =start + j;
    //     cout<<ch<<" ";
    //   }
    //   cout<<endl;
    // }
    
    // int n;
    // cin>>n;
    // for(int i =0;i<n;i++){
    //   char start = 'A' + n - 1 - i;
    //   for(int j=0;j<=i;j++){
    //     char ch  =start + j;
    //     cout<<ch<<" ";
    //   }
    //   cout<<endl;
    // }
    

    // int n;
    // cin>>n;
    // for(int i =0;i<n;i++){
    //   for(int j = 0;j<n-i;j++){
    //     cout<<" ";
    //   }
    //   for(int k = 0;k<=i;k++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i =0;i<n;i++){
    //   for(int k = 0;k<n-i;k++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //   for(int j = 0;j<n-i;j++){
    //     cout<<i+1<<" ";
    //   }
    //   cout<<endl;
    // }

    
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //   for(int k = 0;k<i;k++){
    //     cout<<"  ";
    //   }
    //   int start = i+1;
    //   for(int j = 0;j<n-i;j++){
    //     cout<<start<<" ";
    //     start++;
    //   }
    //   cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //   for(int k=0;k<n-i;k++){
    //     cout<<"  ";
    //   }
    //   for(int j=1;j<=i+1;j++){
    //     cout<<j<<" ";
    //   }
    //   int start = i;
    //   for(int x =0;x<i;x++){
    //     cout<<start<<" ";
    //     start--;  
    //   }
    //   cout<<endl;
    // }
    

    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
      for (int j = 0; j < n-i; j++){
        cout<<j+1<<" ";
      }
      for(int k =0;k<i;k++){
        cout<<"*"<<" ";
      }
      for(int k =0;k<i;k++){
        cout<<"*"<<" ";
      }
      int start = n-i; 
      for(int x= 0;x<n-i;x++){
        cout<<start<<" ";
        start--;
      }
      cout<<endl;
    }
    


  return 0;
}