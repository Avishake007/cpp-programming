/*Find nCr for given n and r.

Input:
First line contains number of test cases T. T testcases follow. Each testcase contains 1 line of input containing 2 integers n and r separated by a space.

Output:
For each testcase, in a new line, find the nCr. Modulus your output to 10^9+7.
*/
//Solution
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll p, ll q)
{
    return (p<q)?p:q;
}
int main() {
	//code
	int t;
	ll n,r;
	cin>>t;
	while(t--)
	{
	    cin>>n>>r;
	    ll c[r+1];
	    memset(c,0,sizeof(c));
	    c[0]=1;
	    for(ll i=1;i<=n;i++)
	    {
	        for(ll j=min(i,r);j>0;j--)
	            c[j]=(c[j]+c[j-1])%1000000007;
	    }
	    cout<<c[r]%1000000007<<endl;
	}
	return 0;
}
