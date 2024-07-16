#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<int> curr(n+1);
    curr[0] = 0;
    curr[1]=1;
    int prev2 = 0;
    int prev = 1;
    for(int i=2;i<=n;i++)
    {
        curr[i] = prev + prev2;
        prev2 = prev;
        prev = curr[i];
    }
    cout<<prev<<endl;
}