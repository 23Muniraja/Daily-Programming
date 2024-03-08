// https://www.geeksforgeeks.org/problems/palindrome0746/1
#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rev = 0;
		    int N = n;
		    while(n!=0){
		        int last = n%10;
		        rev = rev*10 + last;
		        n /= 10;
		    }
		    if(N==rev)return "Yes";
		    else return "No";
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}