#include <iostream>
#include <vector>
using namespace std;

int find_pivot(int arr[], int size) //index of the element of which the sum of left terms  ==  sum of right term  s
{
  int total_sum = 0;
  for(int i = 0;i<size;i++){
    total_sum+=arr[i];
  }
  // cout<<"total sum is : "<<total_sum<<endl;
  int l_sum = 0;
  for(int j = 0; j<size;j++){
    if(j == 0 && (total_sum - arr[0] == 0)){
      // cout<<"###"<<endl;
      return j;
    }
    else if(j==(size-1) && (total_sum - arr[j] == 0)){
      // cout<<"***"<<endl;
      return j;
    }
    else if(j!=0){
      // cout<<"..."<<endl;
      l_sum+=arr[j-1];
      if(l_sum == total_sum - l_sum - arr[j]){
        return j;
      }
    }
    else{
      continue;
    }
  } 
  return -1;
}

int main()
{
  int nums[6] = {1, 7, 3, 6, 5, 6};
  int index = find_pivot(nums, 6);
  cout<<"index is "<<index<<endl;
  return 0;
}