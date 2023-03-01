#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Quadrilateral.h"


namespace FigureLibrary {
	class Parallelogram : public Quadrilateral {
	public:
		FIGURELIBRARY_API Parallelogram(const int lengthAC, const int lengthBD, const int angleAC, const int angleBD);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}