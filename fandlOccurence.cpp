#include<iostream>
#include<vector>
using namespace std;

int f_occurence(int arr[],int n,int key){
  int s = 0;
  int e = n-1;
  int ans;
  int mid = s+((e-s)/2);
  while(s<=e){
    if(arr[mid] == key){
      ans  = mid;
      e = mid - 1;
    }
    else if(arr[mid]<key){
      s = mid + 1;
    }
    else if(arr[mid]>key){
      e = mid -1;
    }
  }
  return ans;
}

int l_occurence(int arr[],int n,int key){
  int s = 0;
  int e = n-1;
  int ans;
  int mid = s+((e-s)/2);
  while(s<=e){
    if(arr[mid] == key){
      ans  = mid;
      s = mid + 1;
    }
    else if(arr[mid]<key){
      s = mid + 1;
    }
    else if(arr[mid]>key){
      e = mid -1;
    }
  }
  return ans;
}

int main(){
  int arr[5] = {1,2,3,3,5};


  return 0;
}