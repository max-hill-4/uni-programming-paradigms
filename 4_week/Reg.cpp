#include "reg.h"
#include <iostream>

bool Registration::input()
{
	std::cin >> code;
	if (checkCode())
	{
		setRecord(true);
		return true;
	}
	else
	{
		setRecord(false);
		return false;
	}
}

void Registration::output()
{
	std::cout << "attend = " << attend << "\n";
}

void Registration::setRecord(bool index)
{
	attend = index;
}

bool Registration::checkCode()
{
	int accesscode = 123456;
	if (code == accesscode)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Registration::getCode()
{
	return code;
}

