// https://www.geeksforgeeks.org/problems/find-last-digit-of-ab-for-large-numbers1936/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
/*
Constraints:
1 <= |a|,|b| <= 1000
*/

// } Driver Code Ends
class Solution {
  public:
     int getLastDigit(string a, string b) {
        // code here
        int n=b.size();
        int x=a.back()-'0'; //converting string to int of last digit(i.e back() give last digit).
        int y;// y is the power.
        if(n>=2){
            y=(b[n-2]-'0')*10+(b[n-1]-'0');//converting power(i.e, b) from string to int if length of b is greater than 2
        }
        else{
            y=(b[n-1]-'0');
        }
        if(y==0){
            return 1;
        }

        if(x==0 || x==1 || x==5 || x==6){
            return x;
        }
        if(x==2 || x==3 ||x==7 || x==8){
            y=y%4;
            if(y==0){
                y=4;
            }
            return (int)(pow(x,y))%10;
        }
        y=y%2;
        if(y==0){
            y=2;
        }
        return (int)(pow(x,y))%10;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getLastDigit(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends