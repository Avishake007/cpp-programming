/*
A frog jumps either 1, 2 or 3 steps to go to top. In how many ways can it reach the top.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains one line of input N denoting the total number of steps.

Output:
For each testcase, in a new line, print the number of ways to reach the top.
*/
//O(n)<--Time Complexity
//Solution
#include <bits/stdc++.h>
using namespace std;
int ways(int i,int n,vector<int>&dp)
{
    if(i>n)
    return 0;
    if(i==n)
    return 1;
    if(dp[i]!=-1)//Reduces the time
    return dp[i];
    else
    {
        int l=ways(i+1,n,dp);//jumps 1 step
        int o=ways(i+2,n,dp);//jumps 2 steps
        int p=ways(i+3,n,dp);//jumps 3 steps
        return dp[i]=l+o+p;
    }
}

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int>dp(n,-1);
	    cout<<ways(0,n,dp)<<endl;
	}
	return 0;
}
