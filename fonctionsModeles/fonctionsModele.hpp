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
	TYPE somme = 0;
	for (int i = 0; i < _nbElements; i++)
	{
		somme += _tableau[i];
	}

	return somme;
}