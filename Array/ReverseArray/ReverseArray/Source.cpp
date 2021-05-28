#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int>& nums)
{
	int start = 0, end = nums.size() - 1;
	while (start < end)
	{
		swap(nums[start++], nums[end--]);
	}
	return nums;
}

void print(const vector<int>& nums)
{
	for (auto itr : nums)
		cout << itr << " ";
	cout << endl;
}

int main()
{
	vector<int> nums{ 1,2,3,4,5 };
	print(nums);
	nums = reverse(nums);
	print(nums);
	return 0;
}