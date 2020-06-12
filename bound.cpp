namespace koreandns
{
	int upper_bound(vector<int>& arr, const int n, const int target)
	{
		int st = 0;
		int en = n;

		while (st < en)
		{
			int mid = (st + en) / 2;
			if (arr[mid] <= target)
			{
				st = mid + 1;
			}
			else
			{
				en = mid;
			}
		}

		return st;
	}

	int lower_bound(vector<int>& arr, const int n, const int target)
	{
		int st = 0;
		int en = n;

		while (st < en)
		{
			int mid = (st + en) / 2;
			if (arr[mid] < target)
			{
				st = mid + 1;
			}
			else
			{
				en = mid;
			}
		}

		return st;
	}
}