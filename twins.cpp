/*
Suppose you have two pets and you love both of them very much. You go to a pet store to buy different articles for your pets. But you ask salesman that you will buy only those articles which are actually in pair. In this store, articles are referred as integers. So you have to tell total no. of articles you will buy for your pets.

Note: Time complexity O(n).

Input : 
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Second line contains the no. of articles "N" shown by the salesman.Third line contains N - separated integers describing the articles referred as an integer.

Output : 
Total No. of articles you will prefer to buy for your pets.
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
	    while(n--)
	    {
	        cin>>a;
	        v.push_back(a);
	    }
	    n=m;
	    long s=0;
	    unordered_map<int, int> h;
	    for(auto i:v)
	    {
	        h[i]+=1;
	        if(h[i]==2)
	        {
	            s+=2;
	            h[i]=0;
	        }
	        
	    }
	    cout<<s<<endl;
	}
	return 0;
}
