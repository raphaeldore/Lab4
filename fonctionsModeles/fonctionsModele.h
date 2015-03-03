#pragma once

template<typename TYPE>
TYPE TrouverMax(const TYPE _tableau[], const int& _nbElements);

template<typename TYPE>
TYPE CalculerSomme(const TYPE _tableau[], const int& _nbElements);

template<typename TYPE>
unsigned int CompterElement(const TYPE& _element, const TYPE _tableau[], const int& _nbElements);

#include "fonctionsModele.hpp"