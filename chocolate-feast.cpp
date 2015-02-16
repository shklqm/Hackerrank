#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int choco(int N, int C, int M)
{
	int result 		= N/C;
	int remaining 	= N/C;
	
	int bought = 0;
	
	while(remaining >= M )
	{
		remaining -= M;
		bought++;
	
		if(remaining < M)
		{
			remaining += bought;
			 result += bought;
			 bought = 0; 
		}
	}
	
	return result;
}


int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
		int N, C,  M;
		cin>>N>>C>>M;
		cout<<	choco(N, C,  M) <<endl;
		
		T--;
	}
	    
    return 0;
}
