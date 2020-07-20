/*
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell 
the stock so that in between those days your profit is maximum.
*/
//Solution
//O(n)<--Time complexity
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long h;
	    vector<long>v;
	    while(n--)
	    {
	        cin>>h;
	        v.push_back(h);
	    }
	    int b=-1;//intial buying price is set to -1
	    int p=-1;//initial selling price is set to -1
	    int y=0;
	    int bi=0;//Buying index
	    int pi=0;//Selling index
	    int f=0;
	    for(auto it:v)
	    {
	        if(b==-1)//This denotes the first element of the array
	        {
	            b=it;
	            bi=y;
	        }
	        else
	        {
	           if(p==-1&&it<b)
	           {
	                    b=it;
	                    bi=y;
	           }
	           else if(it<p)
	           {
	                    f=1;
	                    cout<<"("<<bi<<" "<<pi<<")"<<" ";
	                    p=-1;
	                    b=it;
	                    bi=y;
	           }
	            else
	            {
	                
	                p=it;
	                pi=y;
	                f=1;
	            }
	        }
	        y++;
	    }
	    if(p!=-1)
	        cout<<"("<<bi<<" "<<pi<<")"<<"";
	   if(f==0)
	        cout<<"No Profit";
	   	   cout<<endl;
	}
	return 0;
}
