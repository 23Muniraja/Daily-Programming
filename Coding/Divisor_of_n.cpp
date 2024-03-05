#include<bits/stdc++.h>
using namespace std;
int* printDivisors(int n, int &size){
// Write your code here
    int it=1;
    vector<int> ans;
    // while(it*it<=n){
    //     if(n%it==0){
    //         ans.push_back(it);
    //         if(it!=(n/it))
    //             ans.push_back(n/it);
    //     }
    //     it++;
    // }
    for(int i=1;i<=n;i++){
        if(n%i==0)ans.push_back(i);
    }
    // sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return nullptr;
}