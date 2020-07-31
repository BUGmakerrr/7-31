#include <iostream>

using namespace std;

int find(int* nums, int numsSize){
	for (int i = 0; i < numsSize; ++i){
		for (int j = 0; j < numsSize; ++j){
			if (nums[i] = nums[j] || i != j) {
				return nums[i];				
			}
		}
	}
}
int main(){
	int T_nums[10];
	int a = 0;
	for (a = 0; a < 10; ++a)
	{
		cin >> T_nums[a];
	}
	cout << find(T_nums, 10) << endl;
	getchar();
	return 0;
}