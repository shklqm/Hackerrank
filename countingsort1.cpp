#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void countSort(int size)
{
	int arrayC[100];
	
	for(int i=0; i<100; i++)
		arrayC[i] = 0;
		
	for(int i=0; i<size; i++)
	{
		int temp;
		cin>>temp;
		arrayC[temp]++;
	}		
	
	for(int i=0; i<100; i++)
		cout<<arrayC[i]<<" ";
	cout<<endl;	
}

int main() {


	int size;
	cin>>size;

	countSort(size);

    return 0;
}
