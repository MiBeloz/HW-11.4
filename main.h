#pragma once

#include "FigureLibrary/Figure.h"
#include "FigureLibrary/Triangle.h"
#include "FigureLibrary/Quadrilateral.h"
#include "FigureLibrary/Parallelogram.h"
#include "FigureLibrary/Rectangle.h"
#include "FigureLibrary/Rhombus.h"
#include "FigureLibrary/Square.h"
#include "FigureLibrary/RightTriangle.h"
#include "FigureLibrary/IsoscelesTriangle.h"
#include "FigureLibrary/EquilateralTriangle.h"

#include <iostream>


void printInfo(FigureLibrary::Figure* figure);

void deleteFigure(FigureLibrary::Figure* figure);
