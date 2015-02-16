#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int square(int A, int B)
{
	int start = 0;
	
	double 	i = A, n = sqrt(A);
	int 	nx = sqrt(A);
	
	
	while(nx != n && i <= B)
	{
		i++;
		n = sqrt(i);
		nx = sqrt(i);
	}
	
	if(i <= B)
		start++;
	
	while(i + 2*n - 1 < B)
	{
		n++;
		i = i + 2*n - 1;
		if(i > B)
			break;
		start++;
	}

	return start;
}


int main() {
    int T;

    cin>>T;
    
	while(T > 0)
	{
		int A,B;
		cin>>A>>B;
		cout<<	square(A,B) <<endl;
		
		T--;
	}
	    
    return 0;
}
