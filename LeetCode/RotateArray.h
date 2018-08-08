
void rotate(int* nums, int numsSize, int k) 
{
	int j = k % numsSize;
	int max_divisor = 1;
	for (int i = j; i > 0; i--)
	{
		if (numsSize % i == 0
			&& j %i == 0)
		{
			max_divisor = i;
			break;
		}
	}

	for (int i = 0; i < max_divisor; i++)
	{
		int pre = nums[i];
		int index = (i + k) % numsSize;
		for (int j = 0; j < numsSize / max_divisor; j++)
		{
			int temp = nums[index];
			nums[index] = pre;
			pre = temp;
			index = (index + k) % numsSize;
		}
	}
}