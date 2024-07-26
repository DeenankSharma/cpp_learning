#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x;
  cin >> x;
        int reverse = 0;
        while(x!=0){
            int digit =x%10;
            if(reverse>INT32_MAX/10 || reverse <INT32_MIN/10){
                return 0;
            }
            else{
                reverse = reverse *10 + digit;
                x=x/10;
            }
        
        }
        return reverse;
}