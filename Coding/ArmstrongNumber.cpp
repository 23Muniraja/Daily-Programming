// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int N =n;
        int sum = 0;
        while(n!=0){
            int last = n%10;
            sum += last*last*last;
            n=n/10;
        }
        if(sum==N)return    "Yes";
        else    return "No";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}