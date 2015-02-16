#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	if( a == 0)
		return b;
	return gcd(b%a, a);	
}

void sherlock(vector<int> &real)
{
	int sum = 0;
	int n = real.size();
	bool flag = false;
	
	
	if(n == 1)
	{
		//flag remains false
	}
	else if(n == 2)
	{
		sum = gcd(real[0], real[1]);
		
		if( sum == 1)
			flag = true;
	}
	else
	{
		int f1, f2;
		
		f1 = real[0];
		f2 = real[1];
		
		sum = gcd(f1, f2);
		
		if( sum == 1)
			flag = true;
		
		if(!flag)
		{
		
			for(int i=2; i<n; i++)
			{
				int next;
				next = real[i];
				sum = gcd(sum, next);
			
				if( sum == 1)
				{
					flag = true;
					break;
				}
				n--;
			}
		}
	}
	
	
	if(flag)
		cout<<"YES"<<endl;
	else	
		cout<<"NO"<<endl;

}

int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
	
		vector<int> all, real;
		int n;
		cin>>n;
		
		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;
			all.push_back(temp);
		}
	
		sort(all.begin(), all.end());
		
		int temp = -1;
		
		for(int i=0; i<n; i++)
		{
			if(all[i] != temp)
			{
				temp = all[i];
				real.push_back(temp);
			}	
		}
	
		sherlock(real);
		T--;
	}
	    

    return 0;
}
