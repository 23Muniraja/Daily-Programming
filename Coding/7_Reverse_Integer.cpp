// 7. Reverse Integer
// https://leetcode.com/problems/reverse-integer/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rev(string& x){
        string x1 = x;
        x="";
        for(int i=x1.length()-1;i>=0;i--){
            x += x1[i];
        }
    }
    int reverse(int x) {
        string s = to_string(x);//Converting the int to string.
        rev(s);
        long long int a = stoll(s); //Converting the string to long long int 
        if(a>2147483647 || a<-2147483648)   return 0; 
        if(x<0){ a= a*-1;}
        return a;
    }
};

int main(){
    int n = 25895;
    Solution s;
    cout<<s.reverse(n);
}