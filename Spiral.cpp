/*
Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.

Input:
The first line of the input contains a single integer T, denoting the number of test cases.
Then T test cases follow. Each testcase has 2 lines. First line contains M and N respectively separated by a space. 
Second line contains M*N values separated by spaces.
Output:
Elements when travelled in Spiral form, will be displayed in a single line.
*/
//Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t,m,n;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    vector<int>bk;
	    vector<vector<int>>v;
	    int bb;
	    for(int g=0; g<m*n; g++){ 
            cin>>bb;
            bk.push_back(bb); 
            }
        int p=0;
        for(int i=0;i<m;i++)
        {
            vector<int>l;
            for(int j=0;j<n;j++)
            {
                l.push_back(bk.at(p));
                p++;
            }
            v.push_back(l);
        }
        //cout<<v[0][0];
	    int a=0;
	    int b=n-1;
	    int c=0;
	    int d=m-1;
	    int y=0;
	    while(y<(m*n))
	    {
	            for(int h=a;h<=b;h++)
	            {
	                cout<<v[c][h]<<" ";
	                y++;
	            }
	            c++;
	            if(y==(m*n))
	            break;
	            for(int h=c;h<=d;h++)
	            {
	                cout<<v[h][b]<<" ";
	                y++;
	            }
	            b--;
	            if(y==(m*n))
	            break;
	            for(int h=b;h>=a;h--)
	            {
	                cout<<v[d][h]<<" ";
	                y++;
	            }
	            d--;
	            if(y==(m*n))
	            break;
	            for(int h=d;h>=c;h--)
	            {
	                cout<<v[h][a]<<" ";
	                y++;
	            }
	            a++;
	            
	    }
	    cout<<endl;
	}
	return 0;
}
