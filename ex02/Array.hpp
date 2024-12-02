
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <typename T>
class Array
{
	private:
		int _n;
		T *ptr;

	public:
		Array() : _n(0), ptr(nullptr) {}

		Array(int n)
		{
			if (n > 0)
			{
				_n = n;
				ptr = new T[n];
			}
			else
				throw std::logic_error("Number of elements must be positive");
		}

		Array(const Array& original)
		{
			_n = original._n;
			if (_n > 0)
			{
				ptr = new T[_n];
				for (int i = 0;i < _n; i++)
					ptr[i] = original.ptr[i];
			}
		}

		~Array()
		{
			if(ptr)
				delete [] ptr;
		}

		Array<T>& operator=(const Array& original)
		{
			if (this != &original)
			{
				_n = original._n;
				if (_n > 0)
				{
					delete [] ptr;// it must be deeeeeeeeeeep
					ptr = new T[_n];
					for (int i = 0;i < _n; i++)
						ptr[i] = original.ptr[i];
				}
			}
			return (*this);
		}

		T& operator[](int i) const
		{
			if (i >= _n || i < 0) {
				throw std::out_of_range("UNAVILABLE INDEX");
			}
			return ptr[i];
		}

		int size() const
		{
			return (this->_n);
		}

		void setElements(T vlaue, int index)
		{
			if (index < 0 || index >= _n)
				throw std::out_of_range("UNAVILABLE INDEX");
			ptr[index] = vlaue;
		}
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> &ptr)
{
	for (int i = 0; i < ptr.size(); i++)
	{
		os << ptr[i];
		if (i < ptr.size() - 1)
			os <<", ";
	}
	return os;
}

#endif
