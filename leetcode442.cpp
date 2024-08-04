#include<iostream>
using namespace std;

void duplicate(int arr[],int size){
  // int size = arr.length;
  int ans = 0;
  int arr[size-1];
  for (int i = 0; i < size; i++)
  {
    ans=ans^arr[i];
  }
  for (int i = 0; i < size; i++)
    if(arr[i] == ans){
      continue;
    }
    else{
      
    }
  {
    ans=ans^arr[i];
  }


  
}