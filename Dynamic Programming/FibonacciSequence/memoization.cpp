#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n, vector<int>& dp)
{
    if(n <= 1)
    {
        return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    int ans = fibonacci(n,dp);
    cout<<ans<<endl;
}