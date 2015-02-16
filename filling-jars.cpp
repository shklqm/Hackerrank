#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N, M;
    
    cin>>N>>M;
    
	unsigned long long sum=0;
    
    int a, b, k;
    
   for(int i=0; i<M; i++)
    {
    	cin>>a>>b>>k;
    	
    	unsigned long long temp = b - a + 1;
    	sum += k*temp;
    
    }	
    
    
    	
    unsigned long long result = sum/N;
    
    cout<<result<<endl;	
    
    return 0;
}
