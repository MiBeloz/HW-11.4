#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Parallelogram.h"


namespace FigureLibrary {
	class Rhombus : public Parallelogram {
	public:
		FIGURELIBRARY_API Rhombus(const int lengthABCD, const int angleAC, const int angleBD);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}