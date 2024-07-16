#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    vector<int> heights(n);
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    vector<int> dp(n,-1);
    dp[0] = 0;
    for(int i=1;i<n;i++)
    {
        int min = dp[i];
        for(int j = 0; j<=k;j++)
        {
            int fs = dp[i+j] + abs(heights[i] - heights[i+j]);
            if(fs < min)
            {
                min = fs;
            }
        }
        dp[i] = min;
    }
    cout<<dp[n-1];
}