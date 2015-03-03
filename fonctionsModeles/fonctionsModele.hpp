using namespace  std;

template<typename TYPE>
TYPE TrouverMax(const TYPE _tableau[], const int& _nbElements)
{
	TYPE maxValueFound = TYPE();
	for (int i = 0; i < _nbElements; i++)
	{
		if (_tableau[i] > maxValueFound)
			maxValueFound = _tableau[i];
	}

	return maxValueFound;
}

template<typename TYPE>
TYPE CalculerSomme(const TYPE _tableau[], const int& _nbElements)
{
	TYPE somme = TYPE();
	for (int i = 0; i < _nbElements; i++)
	{
		somme += _tableau[i];
	}

	return somme;
}

template<typename TYPE>
unsigned int CompterElement(const TYPE& _element, const TYPE _tableau[], const int& _nbElements)
{
	int nbOccurences = 0;
	for (int i = 0; i < _nbElements; i++)
	{
		if (_tableau[i] == _element)
			++nbOccurences;
	}

	return nbOccurences;
}