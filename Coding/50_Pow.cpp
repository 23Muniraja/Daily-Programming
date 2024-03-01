// https://leetcode.com/problems/powx-n/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long n1 = n;
        double ans = 1.0;
        if(n1<0) n1 = -1*n1;
        while(n1>0){
            if(n1%2==0){
                x = x * x;
                n1 /= 2;
            }
            else{
                ans = ans * x;
                n1 -= 1;
            }
        }
        if(n<0) ans = (double)(1.0)/(double)(ans);
        return ans;
    }
};

int main(){
    Solution s;
    double x;
    int n;
    cin>>x;
    cin>>n;
    cout<<s.myPow(x,n);
    return 0;
}