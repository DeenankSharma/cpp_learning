#include<iostream>
#include<vector>
using namespace std;
 
int binarySearch(int arr[],int size,int key){
  int start = 0;
  int end = size-1;
  int mid((start+end)/2);
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if(key>arr[mid]){
      start = mid + 1;
    }
    else if(key<arr[mid]){
      end = mid - 1;
    }
    mid = (start)+((end-start)/2);
  }
  return -1;
}

int main(){
  int even[6] = {2,4,6,8,12,18};
  int odd[5] = {3,8,11,14,16};
  int index1 = binarySearch(even,6,12);
  cout<<index1<<endl;
  int index2 = binarySearch(odd,5,20);
  cout<<index2<<endl;
  return 0;
}