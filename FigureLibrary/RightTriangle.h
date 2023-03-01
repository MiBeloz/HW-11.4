#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Triangle.h"


namespace FigureLibrary {
	class RightTriangle : public Triangle {
	public:
		FIGURELIBRARY_API RightTriangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}