#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void cutSticks(int min, vector<int> nr)
{
	int size = 0;

	bool flag = false;
	for(int i=0; i<nr.size(); i++)
	{
		if(nr[i] > 0)
		{
			flag = true;
			nr[i] -= min;
			size++;
		}
	}
	if(flag)
		cout<<size<<endl;

	min = 9999;

	if(flag)
	{
		for(int i=0; i<nr.size(); i++)
		{
			if(nr[i] > 0 && min > nr[i])
				min = nr[i];
		}
		cutSticks(min, nr);
	}
}


int main() {
	
	int N;
	cin>>N;
	vector<int> nr;

	int n;
	cin>>n;
	nr.push_back(n);
	int min = n;	
	
	
	for(int i=1; i<N; i++)
	{
		int n;
		cin>>n;
		nr.push_back(n);
		
		if(min > n)
			min = n;
	}
	
	cutSticks(min, nr);

    return 0;
}
