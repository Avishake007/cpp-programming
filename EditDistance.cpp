/*
Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1′ into ‘str2′.

Insert
Remove
Replace
All of the above operations are of cost=1.
Both the strings are of lowercase.

Input:
The First line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each tese case consists of two lines. The first line of each test case consists of two space separated integers P and Q denoting the length of the strings str1 and str2 respectively. The second line of each test case coantains two space separated strings str1 and str2 in order.

Output:
Corresponding to each test case, pirnt in a new line, the minimum number of operations required.
*/
//O(m*n)
//Solution
#include <bits/stdc++.h>
using namespace std;
// int min(int a,int b)
// {
//     return a<b?a:b;
// }
int editDistance(int i,int j, string s1,string s2,vector<vector<int>>&dp)
{
    if(i<0)
    return j+1;
    if(j<0)
    return i+1;
    if(s1[i]==s2[j])
    return editDistance(i-1,j-1,s1,s2,dp);
    else if(dp[i][j]!=-1)
    return dp[i][j];
    else
    {
        int l=1+editDistance(i,j-1,s1,s2,dp);//insert
        int r=1+editDistance(i-1,j,s1,s2,dp);//remove
        int q=1+editDistance(i-1,j-1,s1,s2,dp);//replace
        return dp[i][j]=min(l,min(r,q));
    }
}
int main() {
	//code
	int t;
	cin>>t;
	int m,n;
	string s1,s2;
	while(t--)
	{
	    cin>>m>>n;
	    cin>>s1>>s2;
	    vector<vector<int>>dp(m,vector<int>(n,-1));
	   // cout<<"fg";
	    cout<<editDistance(m-1,n-1,s1,s2,dp)<<endl;
	    
	}
	return 0;
}
