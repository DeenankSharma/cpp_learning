#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool uniqueOccurrences(std::vector<int>& arr) {
        vector<int> v;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size();i++) {
            int count = 1;
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }
            v.push_back(count);
        }
        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                return false;
            }
        }
        return true;
    }


int main(){

  return 0;
}