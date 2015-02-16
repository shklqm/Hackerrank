#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findPairs(vector<int> &elems)
{
	unsigned long long strike = 1;
	unsigned long long result = 0;
	
	for(int i=0; i<elems.size() -1; i++)
	{
		if( elems[i] != elems[i+1] )	
		{
			if(strike != 1)
			{
				result += strike*(strike - 1);
				strike = 1;
			}
		}
		else
			strike++;
			
		if(i+1 == elems.size()-1  && strike != 1)	
			result += strike*(strike - 1);
	}

	cout<<result<<endl;
}

int main() {

	int T;
	cin>>T;
	
	while(T)
	{
		int N;
		vector<int> elems;
		
		cin>>N;
		
		for(int i=0; i<N; i++)
		{
			int temp;
			cin>>temp;
			elems.push_back(temp);
		}
		
		sort(elems.begin(), elems.end());
		
		findPairs(elems);
					
		T--;
	}

    return 0;
}
