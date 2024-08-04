#include<iostream>
using namespace std;

int uniqueElement(int arr[],int size){
  for(int i = 0;i<size;i++){
    int element  = arr[i];
    int count = 0;
    for(int j = 0;j<size;j++){
      if(arr[j] == element){
        count++;
      }
    }
    if(count == 1){
      return element;
      break;
    }
  }

}

int uniqueElement_better(int arr[],int size){
  int ans = 0;
  for(int i = 0;i<size;i++){
    ans = ans^arr[i];
  }
  return ans;

}

int main(){
  int arr[9] = {1,1,2,5,3,3,4,4,5};
  int unique = uniqueElement(arr,9);
  cout<<unique<<endl;

  return 0;
}