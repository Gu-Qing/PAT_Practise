#pragma once
/*****************************************************************//**
 * \file   pat1013.h
 * \brief  
 * 令 Pi表示第 i 个素数。现任给两个正整数 M≤N≤10^4，请输出 PM到 PN的所有素数。
 * 输入格式：
 * 输入在一行中给出 M 和 N，其间以空格分隔。
 * 
 * 输出格式：
 * 输出从 PM到 PN的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。
 * 
 * \author Guqing
 * \date   17 June 2024
 *********************************************************************/

#include <iostream>

/// <summary>
/// 线性筛法 O(n)
/// 1.每个合数都有一个唯一的在ui小质因数
/// 2.如果一个数x可以被质数p整除，那么x*q(q是任意质数)也可以被p整除
/// </summary>
/// <param name="n"></param>
void SieveOfEuler(int n)
{

}

/// <summary>
/// 试除法 O(根号n)
/// </summary>
/// <param name="n"></param>
bool IsPrime(int n)
{
	if (n <= 1)	return false;
	if (n <= 3)	return true;
	if (n % 2 == 0 || n % 3 == 0)	return false;
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)	return false;
	}
	return true;
}

void Test1013()
{
	int m, n;
	std::cin >> m >> n;
	
}