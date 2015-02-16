#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void beast(int n)
{
	int start=n, end=0;
	bool flag = false;
	

	while( start >= 0)
	{
	
		if(start%3 == 0)
		{
			flag = true;
			break;
		}
		else
		{
			start	-= 5;
			end		+= 5;	
		}
	}
	
	if(flag)
	{
		for(int i=0 ;i<start; i++)
			cout<<"5";
		for(int i=0 ;i<end; i++)
			cout<<"3";	
		cout<<endl;
	}
	else
		cout<<"-1"<<endl;
}


int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
		int n;
		cin>>n;
		beast(n);
		T--;
	}
	    
    return 0;
}
