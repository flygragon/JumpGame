// JumpGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"JumpGame.h"

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; std::cin >> nums[i++]);
	JumpGame JG;
	std::cout << std::boolalpha << JG.canJump(nums) << '\n';
    return 0;
}

