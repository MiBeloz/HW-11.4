#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS


#include "error_create_figure.h"

#include <string>


namespace FigureLibrary {
	class Figure {
	public:
		FIGURELIBRARY_API Figure();

		FIGURELIBRARY_API virtual std::string getName();

		FIGURELIBRARY_API int getSides();

		FIGURELIBRARY_API virtual std::string getAllLengths();

		FIGURELIBRARY_API virtual std::string getAllAngles();

		FIGURELIBRARY_API virtual bool getCorrect();

		FIGURELIBRARY_API virtual std::string getInfo();

	protected:
		FIGURELIBRARY_API Figure(const int _sides) { sides = _sides; }

	private:
		int sides;
	};
}