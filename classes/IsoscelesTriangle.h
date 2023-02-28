#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Triangle.h"


namespace FigureLibrary {
	class IsoscelesTriangle : public Triangle {
	public:
		FIGURELIBRARY_API IsoscelesTriangle(const int lengthAC, const int lengthB, const int angleAC, const int angleB);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}