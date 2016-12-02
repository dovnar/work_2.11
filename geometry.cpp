// geometry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Area.h"

int _tmain(int argc, _TCHAR* argv[])
{

	std::cout << Area::getTriangleArea(2.0, 3.6) << std::endl
		<< Area::getTriangleArea(2.0, 3.6, 50, true) << std::endl
		<< Area::getTriangleArea(2.0, 3.6, 2.6, false) << std::endl
		<< Area::getRectangleArea(3.6, 2.5) << std::endl
		<< Area::getSquareArea(3.6) << std::endl
		<< Area::getSquareArea(3.6, 3.6) << std::endl
		<< Area::getParallelogramArea(2.0, 3.6) << std::endl
		<< Area::getParallelogramArea(3.5, 2.8, 60) << std::endl
		<< Area::getRhombusArea(5.1, 80, true) << std::endl
		<< Area::getRhombusArea(5.1, 8.0, false) << std::endl
		<< "count " << Area::getCountOfClass() << std::endl;
	return 0;
}


