#include <iostream>

using namespace std;


template <class DataType>
void partition(DataType theArray[], int first, int last, int &pivotIndex, int N) {

   DataType pivot = theArray[last]; // copy pivot
   
   int i = first;           // index of last item in S1
   int j = first; 			//index of 1st item in unknown
   for (; j <= last; ++j) {
     if (theArray[j] < pivot) {  	// belongs to S1
         swap(theArray[j], theArray[i]);
         ++i;
      }	// else belongs to S2
   }

   swap(theArray[last], theArray[i]);
   pivotIndex = i;
   
   
   for(int i=0; i<N; i++)
		cout<<theArray[i]<<" ";
	cout<<endl;
} // end partition

template <class DataType>
void quicksort(DataType theArray[], int first, int last, int N) {

   int pivotIndex;
   if (first < last) {
   
      // create the partition: S1, pivot, S2
      partition(theArray, first, last, pivotIndex, N);
      // sort regions S1 and S2
      quicksort(theArray, first, pivotIndex-1, N);
      quicksort(theArray, pivotIndex+1, last, N);
   }
}


int main()
{
	int N;
	cin>>N;

	int array[N];	
	
	for(int i=0; i<N; i++)
	{
		int temp;
		cin>>temp;
		array[i] = temp;
	}
	
	quicksort(array, 0, N-1, N);
	
	return 0;
}
