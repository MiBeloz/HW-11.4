#pragma once

#ifdef FIGURELIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // FIGURELIBRARYDYNAMIC_EXPORTS

#include <exception>


namespace FigureLibrary {
	class error_create_figure : public std::exception {
	public:
		FIGURELIBRARY_API error_create_figure(const char* _message);
	};
}