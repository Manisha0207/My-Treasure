#include<iostream>
#include<vector>
using namespace std;

int climbingStairs(int n, vector<int>& dp)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = climbingStairs(n-1,dp) + climbingStairs(n-2, dp);
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    int ans = climbingStairs(n,dp);
    cout<<ans<<endl;
}