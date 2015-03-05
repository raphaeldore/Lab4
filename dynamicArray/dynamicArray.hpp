template <class T>
DynamicArray<T>::DynamicArray()
{
	capacite = 100;
	tabElements = new T[100]();
}

template <class T>
DynamicArray<T>::DynamicArray(const unsigned int _capacite)
{
	if (_capacite < 1)
		throw std::invalid_argument("Vous ne pouvez pas initialiser un tableau plus petit que 1");

	capacite = _capacite;
	tabElements = new T[_capacite]();
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
T DynamicArray<T>::getElement(const unsigned int& _index) const
{
	if (_index >= capacite)
		throw std::out_of_range("Vous avez tenté d'accèder à un élément hors du tableau");

	return tabElements[_index];
}

template <class T>
void DynamicArray<T>::setElement(const unsigned _index, const T& _valeur)
{
	if (_index >= capacite)
		setCapacite(_index + 1);

	tabElements[_index] = _valeur;
}

template <class T>
void DynamicArray<T>::setCapacite(const unsigned int _capacite)
{
	if (_capacite < 1)
		throw std::invalid_argument("Vous ne pouvez pas redimensionner un tableau d'une capacité plus petite que 1");

	if (capacite != _capacite)
	{
		T * vieuxTableau = tabElements;
		tabElements = new T[_capacite]();

		unsigned int tmpCapacite = capacite > _capacite ? _capacite : capacite;
		for (unsigned int i = 0; i < tmpCapacite; i++)
		{
			tabElements[i] = vieuxTableau[i];
		}

		capacite = _capacite;

		delete[] vieuxTableau;
	}
}
