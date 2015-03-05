#pragma once

template<class T>
class DynamicArray
{
public:
	DynamicArray();
	~DynamicArray();

	int getCapacite() const;
	//T getElement(const int & _index) const;
	//void setElement(const unsigned int _index, const T& _valeur);
	//void setCapacite(const unsigned int _capacite);

private:
	unsigned int capacite;
	T * tabElements;
};

#include "dynamicArray.hpp"