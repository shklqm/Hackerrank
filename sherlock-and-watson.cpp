#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rotate(int K, vector<int> &elems, vector<int> &queries)
{
	vector<int> indices;
	
	int s 	  = K%elems.size();
	int start = elems.size() - s;
	
	for(int i=0; i<s; i++)
		indices.push_back(i + start);
	
	for(int i=0; i < start; i++)
		indices.push_back(i);
	
		
	for(int i=0; i<queries.size(); i++)
		cout<<elems[indices[queries[i]]]<<endl;
		
}

int main() {
	
	int N, K, Q;
	cin>>N>>K>>Q;
	
	vector<int> elems;
	vector<int> queries;
	
	for(int i=0; i<N; i++)
	{
		int temp;
		cin>>temp;
		elems.push_back(temp);
	}
	
	for(int i=0; i<Q; i++)
	{
		int temp;
		cin>>temp;
		queries.push_back(temp);
	}
	
	
	rotate(K, elems, queries);

    return 0;
}
