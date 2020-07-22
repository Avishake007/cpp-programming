/*
You are given two arrays, A and B, of equal size N. The task is to find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[N-1] * B[N-1], where shuffling of elements of arrays A and B is allowed.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line contains an integer N denoting the size of the arrays. In the second line are N space separated values of the array A[], and in the last line are N space separated values of the array B[].

Output:
For each test case, print the minimum sum.
*/
//Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	long n,a,b;
	while(t--)
	{
	    cin>>n;
	    long m=n;
	    vector<long>v;
	    vector<long>w;
	    while(n--)
	    {
	        cin>>a;
	        v.push_back(a);
	    }
	    n=m;
	    while(n--)
	    {
	        cin>>b;
	        w.push_back(b);
	    }
	    sort(v.begin(),v.end());
	    sort(w.begin(),w.end(),greater<long>());
	    long s=0;
	    n=m;
	    for(long h=0;h<n;h++)
	    {
	        s+=v[h]*w[h];
	    }
	    cout<<s<<endl;
	}
	return 0;
}
