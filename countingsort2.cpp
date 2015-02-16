#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void countSort(int size)
{
	int arrayC[101];
	int arrayB[size+1];
	int arrayA[size+1];
	
	
	for(int i=0; i<101; i++)
		arrayC[i] = 0;
		
	for(int i=0; i<size; i++)
	{
		int temp;
		cin>>temp;
		arrayA[i] = temp;
		arrayC[temp]++;
	}		
	
	for(int i=1; i<=100; i++)
		arrayC[i] += arrayC[i-1];
	
	
	for(int i = 0; i<size; i++)
	{
		arrayB[arrayC[arrayA[i]]] = arrayA[i];
		arrayC[arrayA[i]]--;
	}

	for(int i=1; i<=size; i++)
		cout<<arrayB[i]<<" ";
	cout<<endl;	
}

int main() {


	int size;
	cin>>size;

	countSort(size);

    return 0;
}
