/*************************************************************************
    > File Name: RenMinBi.h
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 21 Oct 2017 01:56:49 PM AWST
 ************************************************************************/
#include "RenMinBi.h"
namespace ren_min_bi {
/*
 * @purpose:convert lower of renminbi to upper renminbi
 * */
void RenMinBi::lower_to_upper(const string &lower, string &upper)
{
	int i;
	int j;
	int size = lower.size();
	int tmp[16];
	int m;
	memset(tmp, -1, sizeof(tmp));
	for(i = size - 1, j = 0;i >= 0;i--, j++)
	{
		tmp[j] = lower[i] - '0';
	}
	for(i = 15;i >= 0;i--)
	{
		if(-1 == tmp[i]) continue;
		m = tmp[i];
		if(m || 1 == size) upper += DIGITAL[m];
		if(m || (i % 4 == 0)) 
		{
			if(size > 8 && i == 4) continue;
			upper += UNIT_INTEGER[i];
		}
	}
}
}
