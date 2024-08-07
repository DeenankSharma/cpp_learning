#include<iostream>
#include<vector>
using namespace std;

int peak_element_index(int arr[],int size){
  int s = 0;
  int e = size - 1;
  int mid = (s + (e-s)/2);
  int peak = arr[mid];
  while(s<=e){
    if(arr[mid - 1]>peak){
      e = mid - 1;
      mid = (s + (e-s)/2);
      peak = arr[mid];
    }
    else if(arr[mid + 1]>peak){
      s = mid + 1;
      mid = (s + (e-s)/2);
      peak = arr[mid];
    }
    else{
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