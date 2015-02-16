#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N, K;
    
    cin>>N>>K;
    
    
    string 		Topics[N];
    int temp = 0;
    int length = K*(K+1)/2;
    
    
    for(int i=0; i<N; i++)
    {
    	string s;
    	cin>>s;
    	Topics[i] = s;
    }
    
    int max = 0;
    
    for(int i=0; i< N - 1; i++)
    {
    	for(int j = i+1; j<N; j++)
    	{
    		for(int k=0; k<K; k++)
    		{
    			if(Topics[i][k] != '0' || Topics[j][k] != '0')
    				temp++;
    		}
    		
    		if(temp>max)
    			max = temp;
    		temp = 0;	
    	}
    		
    }
    
    int result = 0;
    
    for(int i=0; i< N - 1; i++)
    {
    	for(int j = i+1; j<N; j++)
    	{
    		for(int k=0; k<K; k++)
    		{
    			if(Topics[i][k] != '0' || Topics[j][k] != '0')
    				temp++;
    		}
    		
    		if(temp == max)
    			result++;
    		
    		temp = 0;	
    	}
    		
    }
    
    cout<<max<<endl;
    cout<<result<<endl;	
    
    return 0;
}
