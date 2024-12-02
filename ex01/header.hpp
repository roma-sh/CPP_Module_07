

#include <iostream>
#include <string>

template <typename T>
void iter(T* array, size_t length, void (*foo)(T &))
{
	if (array == NULL || foo == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		foo(array[i]);
}

template <typename T> //if we need to print a string the parameter will be const and the previous function will not take it
void iter(const T* array, size_t length, void (*foo)(const T&))
{
	if (array == NULL || foo == NULL)
		return;
	for (size_t i = 0; i < length; i++)
		foo(array[i]);
}


template <typename T>
void doubleValue(T& element)
{
	element = element * 2;
}

template <typename T>
void printElement(const T& element)
{
	std::cout << element << " ";
}
