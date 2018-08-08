
void moveZeroes(int* nums, int numsSize) {
	int not_zero = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == 0)
		{
			continue;
		}
		else
		{
			nums[not_zero] = nums[i];
			not_zero++;
		}
	}

	for (int i = not_zero; i < numsSize; i++)
	{
		nums[i] = 0;
	}
}