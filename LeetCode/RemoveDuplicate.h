
int RemoveDuplicate(int *num_array, int size)
{
	if (size <= 0)
	{
		return size;
	}
	int pre = num_array[0];
	int i = 1;
	int curr_index = 1;
	for (int i = 1; i < size; i++)
	{
		if (num_array[i] != pre)
		{
			num_array[curr_index++] = num_array[i];
			pre = num_array[i];
		}
	}
	return curr_index;
}