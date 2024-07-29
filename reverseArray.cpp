#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
  for(int i = 0;i<size/2;i++){
    int temp = arr[i];
    arr[i] = arr[size - i -1];
    arr[size  - i - 1] = temp;
  }
}


int main(){
  int arr[9]={1,2,3,4,5,6,7,8,9};
  reverseArray(arr,9);
  for(int i=0;i<9;i++){
    cout<<arr[i]<<endl;
  }

  return 0;
}