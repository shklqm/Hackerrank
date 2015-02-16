#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N, T;
	cin>>N>>T;
	
	int array[N];
	
	for(int i=0; i<N; i++)
		cin>>array[i];

	for(int i=0; i<T; i++)
	{
	
		int start, end;
		cin>>start>>end;	
		
		int min = 3;
		
		while(start != end + 1)
		{
		
			if( array[start] < min )
				min = array[start];
			start++;	
		}
		
		cout<<min<<endl;	
	}
	
    return 0;
}
