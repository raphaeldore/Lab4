#pragma once

template<class T>
class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(const unsigned int _capacite);
	~DynamicArray();

	int getCapacite() const;
	T getElement(const unsigned int & _index) const;
	void setElement(const unsigned int _index, const T& _valeur);
	void setCapacite(const unsigned int _capacite);

private:
	DynamicArray(const DynamicArray& _otherDynamicArray);
	DynamicArray& operator=(const DynamicArray& _otherDynamicArray);

	unsigned int capacite;
	T * tabElements;
};

#include "dynamicArray.hpp"