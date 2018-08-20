
bool isBadVersion(int version)
{
	if (version >= 4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

class FirstBadVersion {
public:

	int firstBadVersion(int start, int end)
	{
		int mid = start + ((end - start) >> 1);
		if (isBadVersion(mid))
		{
			if (!isBadVersion(mid - 1))
				return mid;
			else
			{
				return firstBadVersion(start, mid - 1);
			}
		}
		else
			return firstBadVersion(mid + 1, end);
	}

	int firstBadVersion(int n) {
		return firstBadVersion(1, n);
	}
};