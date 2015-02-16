#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int insertionSort(int ar_size, int *  ar) 
{
	int counter  = 0;
	for(int i=1; i<ar_size; i++)
	{
		int elem = ar[i];
		
		int j;
		for( j=i; j>0 && elem < ar[j-1]; j-- )
		{
				ar[j] = ar[j-1];
				counter++;
		}
		ar[j] = elem;	
	}
	
	return counter;
}

int totalSwaps = 0;

template <class DataType>
void partition(DataType theArray[], int first, int last, int &pivotIndex, int N, int swaps) {

   DataType pivot = theArray[last]; // copy pivot
   
   int i = first;           // index of last item in S1
   int j = first; 			//index of 1st item in unknown
   for (; j <= last; ++j) {
     if (theArray[j] < pivot) {  	// belongs to S1
         swap(theArray[j], theArray[i]);
         ++i;
         swaps++;
      }	// else belongs to S2
   }

   swap(theArray[last], theArray[i]);
   swaps++;
   pivotIndex = i;
   
   totalSwaps += swaps;
	   
} // end partition

template <class DataType>
void quicksort(DataType theArray[], int first, int last, int N, int swaps) {

   int pivotIndex;
   if (first < last) {
   
      partition(theArray, first, last, pivotIndex, N, swaps);
      quicksort(theArray, first, pivotIndex-1, N, swaps);
      quicksort(theArray, pivotIndex+1, last, N, swaps);
   }
   
}

int main(void) {

	int N;
	cin>>N;
	
	int array1[N], array2[N];
	
	for(int i=0; i<N; i++)
	{
		int temp;
		cin>>temp;
		array1[i] = temp;
		array2[i] = temp;
	}   

   int x = insertionSort(N, array1);
   
   int swaps = 0;
   quicksort(array2, 0, N-1, N, swaps);	
   
   cout<<(x - totalSwaps)<<endl;
   
   return 0;
}
