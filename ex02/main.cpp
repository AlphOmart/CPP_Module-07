#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{

	try
	{
		std::cout << "TEST 1 : int array" << std::endl << std::endl;
		Array<int>	a(10);
		Array<int>	b;

		std::cout << std::endl << "a size : " << a.size() << std::endl;
		std::cout << "b size : " << b.size() << std::endl << std::endl;

		std::cout << "a[] before initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;

		std::cout << std::endl << "a[] after initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
		{
			a[i] = i;
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;
		}
		std::cout << std::endl;

		b = a;
		std::cout << std::endl << "b[] after assignement :" << std::endl << std::endl;

		for (size_t i = 0; i < b.size(); i++)
		{
			std::cout << "b[" << i << "] : " << b[i] << std::endl;
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << std::endl << "TEST 2 : char array" << std::endl << std::endl;
		Array<char>	a(10);
		Array<char>	b;

		std::cout << std::endl << "a size : " << a.size() << std::endl;
		std::cout << "b size : " << b.size() << std::endl << std::endl;

		std::cout << "a[] before initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;

		std::cout << std::endl << "a[] after initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
		{
			a[i] = i + 65;
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;
		}
		std::cout << std::endl;

		b = a;
		std::cout << std::endl << "b[] after assignement :" << std::endl << std::endl;

		for (size_t i = 0; i < b.size(); i++)
		{
			std::cout << "b[" << i << "] : " << b[i] << std::endl;
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << std::endl << "TEST 3 : string array" << std::endl << std::endl;
		Array<std::string>	a(10);
		Array<std::string>	b;

		std::cout << std::endl << "a size : " << a.size() << std::endl;
		std::cout << "b size : " << b.size() << std::endl << std::endl;

		std::cout << "a[] before initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;

		std::cout << std::endl << "a[] after initiaisation :" << std::endl << std::endl;

		for (size_t i = 0; i < a.size(); i++)
		{
			a[i] = "Hello there";
			std::cout << "a[" << i  << "] : " << a[i] << std::endl;
		}
		std::cout << std::endl;

		b = a;
		std::cout << std::endl << "b[] after assignement :" << std::endl << std::endl;

		for (size_t i = 0; i < b.size(); i++)
		{
			std::cout << "b[" << i << "] : " << b[i] << std::endl;
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}