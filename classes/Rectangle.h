#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Parallelogram.h"


namespace FigureLibrary {
	class Rectangle : public Parallelogram {
	public:
		FIGURELIBRARY_API Rectangle(const int lengthAC, const int lengthBD);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API bool getCorrect() override;
	};
}