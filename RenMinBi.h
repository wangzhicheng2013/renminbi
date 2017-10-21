/*************************************************************************
    > File Name: RenMinBi.h
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 21 Oct 2017 01:56:49 PM AWST
 ************************************************************************/

#ifndef REN_MIN_BI_H
#define REN_MIN_BI_H
#include <string.h>
#include <iostream>
#include <string>
namespace ren_min_bi {
using namespace std;
static const string DIGITAL[10] = {
	"零",
	"壹",
	"贰",
	"叁",
	"肆",
	"伍",
	"陆",
	"柒",
	"捌",
	"玖"
};
static const string UNIT_INTEGER[16] = {
	"元",
	"拾",
	"佰",
	"仟",
	"万",
	"拾",
	"佰",
	"仟",
	"亿",
	"拾",
	"佰",
	"仟",
	"万",
	"拾",
	"佰",
	"仟"
};

class RenMinBi
{
public:
	/*
	 * @purpose:convert lower of renminbi to upper renminbi
	 * */
	static void lower_to_upper(const string &lower, string &upper);
};
}
#endif
