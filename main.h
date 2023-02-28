#pragma once

#include "classes/Figure.h"
#include "classes/Triangle.h"
#include "classes/Quadrilateral.h"
#include "classes/Parallelogram.h"
#include "classes/Rectangle.h"
#include "classes/Rhombus.h"
#include "classes/Square.h"
#include "classes/RightTriangle.h"
#include "classes/IsoscelesTriangle.h"
#include "classes/EquilateralTriangle.h"

#include <iostream>


void printInfo(FigureLibrary::Figure* figure);

void deleteFigure(FigureLibrary::Figure* figure);
