#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {

	int pivot = ar[0];
	
	int i=0, j=1;
	int t = 0;
	for(; j<ar.size(); j++)
	{
		if(ar[j] < pivot )
		{
			i++;
			
			int temp = j;
			int value = ar[j];
			
			for(; temp>i; temp-- )
				swap(ar[temp] , ar[temp-1]);
		}

	}
	
	for(int k=0; k<i; k++)
		swap(ar[k], ar[k+1]);	
	
	for(int i=0; i<ar.size(); i++)
		cout<<ar[i]<<" ";
	cout<<endl;	

}
int main(void) {
	vector <int>  _ar;
	int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   _ar.push_back(_ar_tmp); 
	}

    partition(_ar);
   
   return 0;
}
