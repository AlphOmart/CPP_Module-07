#ifndef ITER_HPP
#define  ITER_HPP

template<typename A, typename B, typename C>
void	iter(A *array, B len, C ((*f)(A&)))
{
	for (B i = 0; i < len; ++i)
	{
		f(array[i]);
	}
}

template<typename A, typename B, typename C>
void	iter(A *array, B len, C ((*f)(const A&)))
{
	for (B i = 0; i < len; ++i)
	{
		f(array[i]);
	}
}

#endif