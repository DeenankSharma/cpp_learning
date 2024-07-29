#include<iostream>
using namespace std;

void printArray(char arr[],int size){
  for(int i = 0;i<size;i++){
    cout<<arr[i]<<endl;
  }
}

void max_min_array(int arr[],int size){
  int max = arr[0],min = arr[0];
  for(int i =1;i<size;i++){
    if(arr[i]<min){
      min = arr[i];
    }
    if(arr[i]>max){
      max = arr[i];
    }
  }
  cout<<"the max term is : "<<max<<endl;
  cout<<"the min term is : "<<min<<endl;
}

int sum_of_array(int arr[],int size){
  int sum = 0;
  for(int i = 0;i<size;i++){
    sum = sum + arr[i];
  }
  return sum;
}

int main(){
  int arr[10];
  //   fill_n(arr, 10, 1); //for initialising to a default value
  // for(int i=0;i<10;i++){
  //   cout<<arr[i]<<endl;
  // }
  //if array is just initialised, then garbage values is stored

  // int second[3] = {1,2,3};
  // cout<<second[2]<<endl;

  int arr2[15] = {2,7};

  int size = sizeof(arr2)/sizeof(int);
  // but this approach is not desired as in case, entries are less and array is large in decleration, still size wont change


  // printArray(arr2,15);

  // char ch[5] = {'a','b','c','d','e'};
  // printArray(ch,5);

  int arr3[5] = {1,-1,8,8,2};
  // max_min_array(arr3,5); 

  int sum = sum_of_array(arr3,5);
  cout<<sum<<endl;

  return 0;
}