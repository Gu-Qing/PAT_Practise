#pragma once
/*****************************************************************//**
 * \file   pat1013.h
 * \brief  
 * �� Pi��ʾ�� i �����������θ����������� M��N��10^4������� PM�� PN������������
 * �����ʽ��
 * ������һ���и��� M �� N������Կո�ָ���
 * 
 * �����ʽ��
 * ����� PM�� PN������������ÿ 10 ������ռ 1 �У�����Կո�ָ�������ĩ�����ж���ո�
 * 
 * \author Guqing
 * \date   17 June 2024
 *********************************************************************/

#include <iostream>

/// <summary>
/// ����ɸ�� O(n)
/// 1.ÿ����������һ��Ψһ����uiС������
/// 2.���һ����x���Ա�����p��������ôx*q(q����������)Ҳ���Ա�p����
/// </summary>
/// <param name="n"></param>
void SieveOfEuler(int n)
{

}

/// <summary>
/// �Գ��� O(����n)
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