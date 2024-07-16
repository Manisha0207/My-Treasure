#include<iostream>
using namespace std;

int climbingStairs(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return climbingStairs(n-1) + climbingStairs(n-2);
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ans = climbingStairs(n);
    cout<<ans;
}