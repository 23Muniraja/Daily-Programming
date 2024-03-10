// https://www.geeksforgeeks.org/problems/perfect-numbers3207/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1)return 0;
        long long int sum = 1;
        for(int i = 2;i<=sqrt(N);i++){
            if(N%i==0){
                sum+=i;
                if(i != sqrt(N)){
                    sum += N/i;
                }
            }
        }
        return sum == N;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}