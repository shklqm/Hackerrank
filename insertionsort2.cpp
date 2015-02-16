#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int ar_size, int *  ar) 
{
	for(int i=1; i<ar_size; i++)
	{
		int elem = ar[i];
		
		int j;
		for( j=i; j>0 && elem < ar[j-1]; j-- )
				ar[j] = ar[j-1];
	
		ar[j] = elem;	
	
		for(int j=0; j<ar_size; j++)
			cout<<ar[j]<<" ";
		cout<<endl;	
	
	}

}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
        cin >> _ar[_ar_i];

   insertionSort(_ar_size, _ar);
   
   return 0;
}
