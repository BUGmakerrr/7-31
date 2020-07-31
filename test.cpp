#include <iostream>

using namespace std;

int findRepeatNumber(int* nums, int numsSize){
	int i = 0;
	int j = numsSize - 1;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (nums[mid] == mid)
		{
			if (mid != numsSize - 1)
			{
				i = mid + 1;
			}
			else
			{
				return mid + 1;
			}
		}
		else if (mid == 0)
		{
			return 0;
		}
		else if (nums[mid - 1] == mid - 1 && mid > 0)
		{
			return mid;
			
		}
		else
		{
			j = mid - 1;
		}

	}
}

int main(){


	getchar();
	return 0;
}