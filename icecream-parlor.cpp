#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void icecream(vector<int> &real ,vector<int> &nr, int M)
{
	int N 		= nr.size(); 
	int start 	= 0;
	int end		= N-1;

	for(int i=0; i<N; i++)
	{
		int target = M - nr[start];
		
		if(nr[start] + nr[end] > M)
			end--;
		else if(nr[start] + nr[end] < M)
			start++;
		else if(nr[start] + nr[end] == M)	
			break;
	}
	
	bool s=false, e=false;
	for(int i=0; i<N; i++)
	{
		if(!s && real[i] == nr[start])
		{
			start 	= i+1; 
			s		= true;	
		}
		else if(!e && real[i] == nr[end])	
		{
			end = i+1;
			e	= true;
		}	
	}
	
	if(start < end)
		cout<<start<<" "<<end<<endl;
	else	
		cout<<end<<" "<<start<<endl;
}

int main() {

	int T;
	cin>>T;
	
	while(T)
	{
		int M,N;
		cin>>M>>N;
		
		vector<int> nr, real;
		
		for(int i=0; i<N; i++)
		{
			int temp;
			cin>>temp;
			nr.push_back(temp);
			real.push_back(temp);
		}
		
		sort(nr.begin(), nr.end());
		
		icecream(real, nr, M);
		
		T--;
	}

    return 0;
}
