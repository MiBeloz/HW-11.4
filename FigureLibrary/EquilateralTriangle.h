#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "IsoscelesTriangle.h"


namespace FigureLibrary {
	class EquilateralTriangle : public IsoscelesTriangle {
	public:
		FIGURELIBRARY_API EquilateralTriangle(const int lengthABC);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}