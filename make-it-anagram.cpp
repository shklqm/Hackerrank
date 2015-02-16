#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	string A, B;
	cin>>A>>B;
	
	int arrayA[123], arrayB[123];
	
	for(int i=0; i<123; i++)
		arrayA[i] = 0, arrayB[i] = 0;
		
	for(int i=0; i<A.length(); i++)
		arrayA[A[i]]++;	
	
	for(int i=0; i<B.length(); i++)
		arrayB[B[i]]++;

	int removed = 0;
	
	for(int i=97; i<123; i++)
			removed += abs(arrayA[i] - arrayB[i]);
	
	cout<<removed<<endl;
	
    return 0;
}
