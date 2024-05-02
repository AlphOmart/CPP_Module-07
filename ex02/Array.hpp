#ifndef ARRAY_HPP
# define  ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T				*_tab;
	unsigned int	_size;

public:

// constructor //

	Array(void);
	Array(unsigned int n);
	Array(const Array &cpy);
	~Array();

// operator //

	Array &operator=(const Array& other);
	T	&operator[](const unsigned int i);

// functions //
	unsigned int	size(void);

};
#include "Array.tpp"
#endif