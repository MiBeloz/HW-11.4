#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "Фигуры. Методы\n\n" << std::endl;

	FigureLibrary::Figure* figure = nullptr;

	try {
		figure = new FigureLibrary::Figure();
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Triangle(10, 20, 30, 50, 60, 70);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch(FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::RightTriangle(10, 20, 30, 50, 60);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::RightTriangle(10, 20, 30, 50, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::IsoscelesTriangle(10, 20, 50, 60);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::EquilateralTriangle(30);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Rectangle(10, 20);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Square(20);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Parallelogram(20, 30, 30, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new FigureLibrary::Rhombus(30, 30, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (FigureLibrary::error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	system("pause > nul");

	return 0;
}

void printInfo(FigureLibrary::Figure* figure) {
	std::cout << "Фигура '" + figure->getName() + "' (" + figure->getAllLengths() + "; " + figure->getAllAngles() + ") создана!\n" << std::endl;
}

void deleteFigure(FigureLibrary::Figure* figure) {
	delete figure;
	figure = nullptr;
}
