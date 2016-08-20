#pragma once
#include<vector>

class JumpGame {
private:
public:
	bool canJump(std::vector<int>& nums) {
		int max_reach = 0;
		for (int i = 0, len = nums.size(); i <len; i++)
			if (i >max_reach)
				return false;
			else if (i + nums[i] >max_reach)
				max_reach = i + nums[i];
		return true;
	}
};