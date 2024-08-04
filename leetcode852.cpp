#include<iostream>
#include<vector>
using namespace std;

int peak_element_index(int arr[],int size){
  int s = 0;
  int e = size - 1;
  int mid = (s + (e-s)/2);
  // cout<<mid<<": mid"<<endl;
  int peak = arr[mid];
  while(s<=e){
    // cout<<("looping")<<endl;
    if(arr[mid - 1]>peak){
      // cout<<"###"<<endl;
      e = mid - 1;
      mid = (s + (e-s)/2);
      peak = arr[mid];
    }
    else if(arr[mid + 1]>peak){
      // cout<<"***"<<endl;
      s = mid + 1;
      mid = (s + (e-s)/2);
      peak = arr[mid];
    }
    else{
      // cout<<"___"<<endl;
      break;
    }
  }
  return mid;
}


int main(){
  int arr[5] = {3,5,3,2,0};
  int index = peak_element_index(arr,5);
  cout<<"element is "<<arr[index]<<endl;
  return 0;
}