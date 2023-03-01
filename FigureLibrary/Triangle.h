#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include "Figure.h"


namespace FigureLibrary {
	class Triangle : public Figure {
	public:
		FIGURELIBRARY_API Triangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB, const int angleC);

		FIGURELIBRARY_API std::string getName() override;

		FIGURELIBRARY_API int getLengthA();
		FIGURELIBRARY_API int getLengthB();
		FIGURELIBRARY_API int getLengthC();
		FIGURELIBRARY_API int getAngleA();
		FIGURELIBRARY_API int getAngleB();
		FIGURELIBRARY_API int getAngleC();

		FIGURELIBRARY_API std::string getAllLengths() override;

		FIGURELIBRARY_API std::string getAllAngles() override;

		FIGURELIBRARY_API bool getCorrect() override;

		FIGURELIBRARY_API std::string getInfo() override;

	private:
		int a, b, c;
		int A, B, C;
	};
}