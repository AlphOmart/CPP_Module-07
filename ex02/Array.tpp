#include "Array.hpp"

template<typename T>
Array<T>::Array(void): _size(0)
{
	this->_tab = new T();
};

template<typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	if (this->_size == 0)
		this->_tab = NULL;
	else
	{

		this->_tab = new T[n];
		for (size_t i = 0; i != this->_size; i++)
			this->_tab[i] = T();
	}
};

template<typename T>
Array<T>::Array(const Array &original) : _size(original._size)
{
	if (this->_size != 0)
	{
		this->_tab = new T[this->_size];
		for (size_t i = 0; i != this->_size; i++)
			this->_tab[i] = original._tab[i];
	}
};

template<typename T>
Array<T>::~Array()
{
	delete[] this->_tab;
};

template<typename T>
Array<T>&		Array<T>::operator=(const Array &original)
{
	if (this->_size > 0)
		delete[] this->_tab;
	else
		delete this->_tab;
	this->_size = original._size;
	this->_tab = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_tab[i] = original._tab[i];
	return (*this);
};

template<typename T>
T& Array<T>::operator[](const unsigned int i)
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_tab[i]);
}

template<typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_size);
};