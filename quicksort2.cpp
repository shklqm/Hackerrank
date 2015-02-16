#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(int *ar, int first, int last, int &pivotIndex) {

	int pivot = ar[first];
	
	int i=first, j=first+1;
	for(; j<=last; j++)
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
	
	pivotIndex = i;
	
	for(int k=first; k<i; k++)
		swap(ar[k], ar[k+1]);	
	
}
void quickSort(int*  ar, int first, int last) {

   int pivotIndex;
   if (first < last) {
   
      partition(ar, first, last, pivotIndex);
      quickSort(ar, first, pivotIndex-1);
      quickSort(ar, pivotIndex+1, last);
   }
   
	if(last > first)
	{
		for(int i=first; i<=last; i++)
			cout<<ar[i]<<" ";
		cout<<endl;	
	}   
}
int main() {
   
   	int _ar_size;
	cin >> _ar_size;
	
	int array[_ar_size];
	
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   array[_ar_i] = _ar_tmp; 
	 }

	quickSort(array, 0, _ar_size-1);
   
   return 0;
}
