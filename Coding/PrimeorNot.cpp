// https://www.geeksforgeeks.org/problems/prime-number2314/1
#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int isPrime(int N){
        // code here
        if(N<2)return 0;
        for(int i=2;i*i<=N;i++){
            if(N%i==0) return 0;
        }
        return 1;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}