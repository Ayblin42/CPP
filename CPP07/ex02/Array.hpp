/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 05:48:18 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/02 06:45:47 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:38:56 by ayblin            #+#    #+#             */
/*   Updated: 2022/09/02 05:44:55 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

template<typename T>
class Array{
	public :
	// ? CONSTRUCTOR ? //

	Array() : _size(0), _array(new T[0]) {};
	Array(unsigned int n) : _size(n) , _array(new T[n]) {};
	Array(const Array& other)
	{
		this->_size = other._size;
		this->_array = new T[other._size];
		for(unsigned int i = 0; i < other._size; i++)
			this->_array[i] = other._array[i];
	}

	// ? DESTRUCTOR ? //

	~Array()
	{
		delete [] this->_array;
	}

	// ? OPERATOR OEVERLOAD ? //

	Array& operator=(const Array& rhs)
	{
		if (this != &rhs)
		{
			this->~Array();
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}

	T& operator[](unsigned int idx)
	{
		if (idx >= this->_size)
			throw InvalidIndexExeption();
		return this->_array[idx];
	}

	// ? Functions ? //

	unsigned int size()
	{
		return this->_size;
	}

	void print()
	{
		for (unsigned int i = 0; i < this->_size; i++)
			std::cout<<BGREEN<<"tab["<<i<<"]: "<<BYELLOW<< _array[i]<<std::endl;
	}

	// ? EXEPTION ? //

	class  InvalidIndexExeption : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Index is out of the range of this array");
		}
	};

	private :
		unsigned int _size;
		T* 			_array;
};
