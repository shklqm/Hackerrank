#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, result;
     
    cin >> N >> K;
    vector<int> candies;
    
    for (int i=0; i<N; i++)
    {
    	int temp;
        cin >> temp;
        candies.push_back(temp);
    } 
    
    sort(candies.begin(), candies.end());

	int start = candies[0];
	int end   = candies[K-1];
	
	result = end - start;
	
	for(int i=1; i<= candies.size() - K; i++)
		if(result > candies[K+i-1] - candies[i])
			result = candies[K+i-1] - candies[i];
	
	cout<<result<< endl;
	
    
    return 0;
}
