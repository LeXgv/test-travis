#include "mdObjectsList.h"


mdObjectsList::mdObjectsList()
{
	md_str = "Hello";
}

mdObjectsList::mdObjectsList(std::string str)
{
	md_str = str;
}

int mdObjectsList::error()
{
	return -1;
}

