#include<iostream>
#include<vector>
using namespace std;

//2 pointer approach


vector<int> findIntersection(int arr1[],int n,int arr2[], int m){

	int i =0;
	int j=0;
	vector<int> arr;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			arr.push_back(arr1[i]);
			i++;
			j++;
		}
		if(arr1[i]<arr2[j]){
			i++;
		}
		if(arr1[i]>arr2[j]){
			j++;
		}
	}
	return arr;
}

int main(){
  int arr1[6]  = {1,2,2,2,3,4};
  int arr2[4] = {2,2,3,3};
  vector<int> arr = findIntersection(arr1,6,arr2,4);
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<endl;
  }
  
  return 0;
}