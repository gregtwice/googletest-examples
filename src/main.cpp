#include <iostream>

#include "singleton_user.hpp"
#include "singleton.hpp"
int main(int argc, char *argv[])
{
	SingletonUser<MySingleton> user{};
	if (user.work())
	{
		return 0;
	}
	return 1;
}
