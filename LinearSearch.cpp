#include<iostream>
using namespace std;

int linear_Search(int arr[],int element, int size){
  for(int i = 0;i<size;i++){
    if(arr[i] == element){
      return 1;
    }
  }
  return 0;
}



int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  bool if_present = linear_Search(arr,7,10);
  cout<<if_present<<endl;

  return 0;
}