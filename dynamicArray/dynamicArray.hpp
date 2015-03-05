template <class T>
DynamicArray<T>::DynamicArray()
{
	capacite = 100;
	tabElements = new T[100];
}

template <class T>
DynamicArray<T>::~DynamicArray()
{
	delete[] tabElements;
}

template <class T>
int DynamicArray<T>::getCapacite() const
{
	return capacite;
}

template <class T>
T DynamicArray<T>::getElement(const int& _index) const
{
	return tabElements[_index];
}

template <class T>
void DynamicArray<T>::setElement(const unsigned _index, const T& _valeur)
{
	tabElements[_index] = _valeur;
}

//template <class T>
//void DynamicArray<T>::setCapacite(const unsigned int _capacite)
//{
//	capacite = _capacite;
//}