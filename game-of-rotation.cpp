#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin>>N;
	vector<long long> total;
	
	for(int i=0; i<N; i++)
	{
		int temp;
		cin>>temp;
		total.push_back(temp);
	}
	

	long long max = 0, removedSum=0, nextSum=0, realSum=0, tempSum=0, prevSum=0 ,leftSum=0;
	
	for(int i=0; i<N; i++){
		nextSum += (i+1)*total[i];
		realSum +=total[i];
	}
	
	max = nextSum;
	
	for(int i=0; i<N-1; i++)
	{
		tempSum 	= total[N - 1 - i];
		prevSum 	+= tempSum;
		
		if(i==0)
			leftSum = prevSum;
		else
			leftSum += prevSum;
		
		removedSum 	= (N) * total[N - 1 - i];
		realSum	   -= total[N - 1 - i];
		nextSum		= nextSum + realSum - removedSum;
		
		if(max <leftSum+ nextSum)
			max =leftSum+ nextSum;
	}
	
	cout<<max<<endl;

    return 0;
}
