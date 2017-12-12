#include "Sort.h"
// Merge sort for integer array
std::vector<int> Sort::intMergeSort(std::vector<int> intArray)
{
	std::vector<int> retArray;
	// Base case
	if (intArray.size() <= 1)
		return intArray;
	else
	{
		std::size_t const halfSize = intArray.size() / 2;
		// Split array into two halves
		std::vector<int> split_lo (intArray.begin(), intArray.begin() + halfSize);
		std::vector<int> split_hi (intArray.begin() + halfSize, intArray.end());
		// Recursive step
		split_lo = Sort::intMergeSort(split_lo);
		split_hi = Sort::intMergeSort(split_hi);
		// Merge step
		while ((split_lo.size()>0)||(split_hi.size()>0))
		{	
			if (split_hi.size()==0) // Edge case (reached end of split_lo)
			{
				retArray.insert (retArray.end(), split_lo.begin(), split_lo.end());
				return retArray;
			}
			else if (split_lo.size()==0) // Edge case (reached end of split_hi)
			{
				retArray.insert (retArray.end(), split_hi.begin(), split_hi.end());
				return retArray;
			}
			else if (split_lo.front() < split_hi.front()) // Merge the halves after sorting
			{			
				retArray.push_back(split_lo.front());
				split_lo.erase (split_lo.begin());
			}
			else if (split_hi.front() <= split_lo.front())
			{			
				retArray.push_back(split_hi.front());
				split_hi.erase (split_hi.begin());
			}
		}
		return retArray;
	}
}

