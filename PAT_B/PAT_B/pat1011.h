#pragma once
/*****************************************************************//**
 * \file   pat1011.h
 * \brief  
 * 给定区间 [−2^31,2^31] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
 * 输入格式：
 * 输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。
 * 输出格式：
 * 对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。
 * 
 * \author Guqing
 * \date   17 June 2024
 *********************************************************************/
#include <iostream>

void Test1011()
{
	int n;
	std::cin >> n;
	int i = 1;
	while (n-- > 0)
	{
		long long a, b, c;	// 如果这里使用int保存，那么计算res时要针对a和b进行强转为long long，否则计算时默认使用int会有溢出
		std::cin >> a >> b >> c;
		long long res = a + b;
		printf("Case #%d: %s\n", i++, res > c ? "true" : "false");
	}
}
