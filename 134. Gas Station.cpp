class Solution {
public:
int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
	int start = 0;
	while (start < gas.size())
	{
		int Gas = 0;
		int cur = start;
		while (Gas >= 0)
		{
            Gas = Gas + gas[cur] - cost[cur];
			cur = (cur + 1) % gas.size();
			if (Gas >= 0 && cur == start)
				return start;
		}

		if (cur <= start)
			return -1;

		start = cur;
	}

	return -1;
}
};
