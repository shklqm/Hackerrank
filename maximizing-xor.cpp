#include <iostream>
 
using namespace std; 
 
 
int main() {
	int L, R, result=0;

	cin>>L;
	cin>>R;
 
	for(int i=0; i<= R-L; i++) 
		for(int j=0; j<= R - L; j++)
			if( ((L + j) ^ (L+i)) > result )
				result = ((L + j) ^ (L+i));
	
	cout<<result<<endl;
 
   return 0;
}
