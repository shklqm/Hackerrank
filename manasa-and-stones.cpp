#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void manasa(int n, int a, int b)
{
	
	int perms[n];
	int end = n - 1;
	
	vector<int> result;
	
	if( a==b)
		cout<<n*a-a<<endl;
		
	else
	{	
		while(end >= 0)
		{
			for(int i = 0; i<n-1; i++)
				perms[i] = a;
	
			for(int j = end; j<n-1; j++)
				perms[j] = b;		
			
			int sum = 0;
			
			for(int k=0; k<n-1; k++)
			{
				sum += perms[k];
			}
		
			result.push_back(sum);
		
			end--;	
		}
	
		sort(result.begin(), result.end());
	
		for(int i=0; i<result.size(); i++)
			cout<<result[i]<<" ";
		cout<<endl;	
	}	
}


int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
		int n, a, b;
		cin>>n>>a>>b;
		manasa(n, a, b);
		T--;
	}
	    
    return 0;
}
