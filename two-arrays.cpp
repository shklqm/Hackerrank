#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int T;
	cin>>T;
	
	
	while(T)
	{
		int N;
		unsigned long long target;
		cin>>N>>target;
		
		vector<int> elemsA, elemsB;
		
		for(int i=0; i<N; i++)
		{
			int temp;
			cin>>temp;
			elemsA.push_back(temp);
		}
		
		for(int i=0; i<N; i++)
		{
			int temp;
			cin>>temp;
			elemsB.push_back(temp);
		}
		
		sort(elemsA.begin(), elemsA.end());
		sort(elemsB.begin(), elemsB.end());
		
		bool flag = true;
		
		for(int i=0; i<N; i++)
		{
			if( elemsA[i] + elemsB[N-1-i] < target )
				flag = false;
		}
		
		if(flag)
			cout<<"YES"<<endl;
		else	
			cout<<"NO"<<endl;
		T--;	
	}

    return 0;
}
