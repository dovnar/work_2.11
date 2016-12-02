#pragma once
#include <math.h>
#include <utility>

class Area
{
private:
	static int count;
	static bool verificationData(bool flag, float data);
public:
	
	Area();
	~Area();
	static int getCountOfClass();
	

	///Triangle ->
	static float getTriangleArea(float basis, float height);	//вычисление площади по основанию и высоте 
	static float getTriangleArea(float party1, float party2, float corner, bool flag);	//вычисление площади по двум сторонам и углу между ними = true
	// float getTriangleArea(float party1, float party2, float party3);	//вычисление площади по трем сторонам = false
	
	///rectangle ->
	static float getRectangleArea(float party1, float party2);	//вычисление площади по двум сторонам
	///square ->
	static float getSquareArea(float party);	//вычисление площади по одной стороне
	static float getSquareArea(float party1, float party2);	//вычисление площади по двум сторонам	///parallelogram ->
	static float getParallelogramArea(float party, float height);	//вычисление площади по одной стороне и высоте
	static float getParallelogramArea(float party1, float party2, float corner);	//вычисление площади по двум сторонам и углу между ними
	///rhombus ->
	static float getRhombusArea(float party, float corner, bool flag);	//вычисление площади по стороне и углу = true
	//static float getRhombusArea(float diagonal1, float diagonal2); //вычисление площади по двум диагоналям = false
};

