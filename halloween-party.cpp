#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long ween(unsigned long long K)
{
	unsigned long long r;
	
	if(2 * (K/2) == K)
		r = (K/2)*(K/2);
	else	
		r = (K/2)*(K/2 + 1);
	
	return r;
}


int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
		unsigned long long A;
		cin>>A;
		cout<<	ween(A) <<endl;
		
		T--;
	}
	    
    return 0;
}
