#include "Sort.h"

int main(int argc, char** argv)
{
	srand(time(0)); // seeds the rand() function
	int n; // length of random integer array
	std::cout << "Enter the length of random integer array (n) [1000]: ";
	std::cin >> n;
	std::vector<int> intArray (n,0);
	// Generate random sequence of "n" integers
	std::cout << "\nInput Array : [";
	for (int i=0;i<n;i++) 
	{
		intArray[i] = rand() % n + 1;
		std::cout << intArray[i];
	 	if (i <= n-2) 
			std::cout	<< ",";
	}	
	std::cout << "]";
	// Sort the array using Merge Sort
	std::vector<int> sortedArray = Sort::intMergeSort(intArray);
	std::cout << "\nSorted Array: [";
	for (int i=0;i<n;i++) 
	{
		std::cout << sortedArray[i]; 
	 	if (i <= n-2) 
			std::cout	<< ",";
	}	
	std::cout << "]\n";

	return 0;
}
