#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int maxSubarray(vector<int> &array, int size, int index, int sum, int maxSum)
{
	if (size)
	{
		sum = sum + array[index];
		sum = maxSum = max(sum, array[index]); 
		return	max(maxSubarray(array, size-1, index+1, sum, maxSum), maxSum);
	}
	return 0;
}


int main() {

	int T;
	cin>>T;

	while(T)
	{
		int size;
		cin>>size;
		vector<int> v;

		int maxNumber = -10001, unContiguousSum = 0;

		v.push_back(0);
		for (int i = 0; i < size; ++i)
		{	
			int temp;
			cin>>temp;
			v.push_back(temp);

			if (temp > 0)
				unContiguousSum += temp;

			maxNumber = (maxNumber>temp)?maxNumber:temp;
		}

		if (maxNumber < 0)
			cout<<maxNumber<<" "<<maxNumber<<endl;
		else
			cout<<maxSubarray(v, v.size(), 1, v[0], -10001)<<" "<<unContiguousSum<<endl;

		T--;
	}

    return 0;
}
