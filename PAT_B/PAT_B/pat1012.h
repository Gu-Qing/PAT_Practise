#pragma once
/*****************************************************************//**
 * \file   pat1012.h
 * \brief  
 * 给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
 * A1= 能被 5 整除的数字中所有偶数的和；
 * A2= 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1+n2-n3+n4⋯；
 * A3= 被 5 除后余 2 的数字的个数；
 * A4= 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
 * A5= 被 5 除后余 4 的数字中最大数字。
 * 输入格式：
 * 每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
 * 输出格式：
 * 对给定的 N 个正整数，按题目要求计算 A1~A5
 * 并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。若分类之后某一类不存在数字，则在相应位置输出 N。
 * 
 * \author Guqing
 * \date   17 June 2024
 *********************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

void Test1012()
{
	std::vector<int> vec1;
	std::vector<int> vec2;
	std::vector<int> vec3;
	std::vector<int> vec4;
	std::vector<int> vec5;

	int n;
	std::cin >> n;
	while (n--)
	{
		int num;
		std::cin >> num;
		switch (num % 5)
		{
		case 0:
			vec1.push_back(num);
			break;
		case 1:
			vec2.push_back(num);
			break;
		case 2:
			vec3.push_back(num);
			break;
		case 3:
			vec4.push_back(num);
			break;
		case 4:
			vec5.push_back(num);
			break;
		}
	}

	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	float a4 = 0.0;
	for (auto num : vec1)
	{
		if (!(num & 1))
		{
			a1 += num;
		}
	}
	std::cout << (a1 == 0 ? "N" : std::to_string(a1)) << " ";

	bool isAdd = true;
	for (auto num : vec2)
	{
		if (isAdd)
		{
			a2 += num;
		}
		else
		{
			a2 -= num;
		}
		isAdd = !isAdd;
	}
	std::cout << (vec2.empty() ? "N" : std::to_string(a2)) << " ";

	a3 = vec3.size();
	std::cout << (vec3.empty() ? "N" : std::to_string(a3)) << " ";

	int sum = 0;
	for (auto num : vec4)
	{
		sum += num;
	}
	if (vec4.empty())
	{
		std::cout << "N" << " ";
	}
	else
	{
		a4 = sum * 1.0 / vec4.size();
		std::cout << std::fixed << std::setprecision(1) << a4 << " ";
	}

	for (auto num : vec5)
	{
		a5 = a5 > num ? a5 : num;
	}

	std::cout << (vec5.empty() ? "N" : std::to_string(a5));
}
