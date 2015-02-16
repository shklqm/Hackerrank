#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void cavity(int N, string array[])
{
	for(int i=1; i<N-1; i++)
		for(int j = 1; j<N-1; j++)
			if(array[i][j] > array[i-1][j] && array[i][j] > array[i+1][j] && array[i][j] > array[i][j-1] && array[i][j] > array[i][j+1] )
				array[i][j] = 'X';
	
	for(int i=0; i<N; i++)
		cout<<array[i]<<endl;
}


int main() {
	
	int N;
	cin>>N;
	
	string array[N];
	
	for(int i=0; i<N; i++)
	{
		string s;
		cin>>s;
		array[i] = s;
	}
	
	cavity(N, array);

    return 0;
}
