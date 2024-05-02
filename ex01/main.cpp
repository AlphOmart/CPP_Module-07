#include "iter.hpp"
#include <string>
#include <iostream>

void	print(const int& element);
int		printPostCast(const int&element);
void	printString(const std::string& element);
int		printStringPostCast(std::string& element);

int		main()
{
	int array[10] = {64, 65, 66, 67, 68, 69, 70, 71, 72, 73};
	std::cout << "----------PRINT ARRAY----------" << std::endl;
	iter<int, int, void>(array, 10, print);
	std::cout << "----------PRINT CASTED ARRAY----------" << std::endl;
	iter<int, size_t, int>(array, 10, printPostCast);
	std::string array_2[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	std::cout << "----------PRINT STRING ARRAY----------" << std::endl;
	iter<std::string, int, void>(array_2, 10, printString);
	std::cout << "----------PRINT CASTED AND MODIFY STRING ARRAY----------" << std::endl;
	iter<std::string, size_t, int>(array_2, 10, printStringPostCast);
}

void	print(const int& element)
{
	std::cout << element << std::endl;
}

int		printPostCast(const int& element) {
	std::cout << static_cast<char>(element) << std::endl;
	return 15;
}

void	printString(const std::string& element)
{
	std::cout << element << std::endl;
}

int		printStringPostCast(std::string& element)
{
	std::cout << static_cast<int>(element[0]) << std::endl;
	element[0] += 1;
	std::cout << static_cast<char>(element[0]) << std::endl;
	return 15;
}

