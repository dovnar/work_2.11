#include "stdafx.h"
#include "Area.h"
#define PI 3.14159265358979323846		// число ПИ

int Area::count = 0;

Area::Area()
{
}

Area::~Area()
{
}

bool Area::verificationData(bool flag, float data)
{
	if (flag)
		if (data > 0 && data < INT_MAX)
			return false;
		else
			return true;
	else
		if (data > 0 && data <= 180)
			return false;
		else
			return true;
}

int Area::getCountOfClass()
{
	return count;
}

///Triangle ->
float Area::getTriangleArea(float basis, float height)
{
	if (verificationData(true, basis))
		return 1;
	else if (verificationData(true, height))
		return 1;
	else
		++count;
	return (0.5 * basis * height);
}

float Area::getTriangleArea(float party1, float party2, float corner, bool flag)	
{
	if (verificationData(true, party1))
		return 1;
	else if (verificationData(true, party2))
		return 1;
	else
		++count;

	if (flag == true)
	{
		if (verificationData(false, corner))
			return 1;
		else
			return ((0.5 * party1) * party2 * (sin(corner* PI / 180) * PI / 180));
	}
	else
	{
		if (verificationData(true, corner))
			return 1;
		int p = (party1 + party2 + corner) / 2;
		return sqrt(p*(p*party1)*(p*party2)*(p*corner));
	}
		
}
///rectangle ->
float Area::getRectangleArea(float party1, float party2)
{
	if (verificationData(true, party1))
		return 1;
	else if (verificationData(true, party2))
		return 1;
	else
		++count;
	return (party1 * party2);
}

///square ->
float Area::getSquareArea(float party)
{
	if (verificationData(true, party))
		return 1;
	else
		++count;
	return (party *= party);
}

float Area::getSquareArea(float party1, float party2)
{
	if (party1 == party2)
		return 1;
	else if (verificationData(true, party1))
		return 1;
	else
		++count;
	return (party1 * party2);
}

///parallelogram ->
float Area::getParallelogramArea(float party, float height)
{
	if (verificationData(true, party))
		return 1;
	else if (verificationData(true, party))
		return 1;
	else
		++count;
	return (party * height);
}

float Area::getParallelogramArea(float party1, float party2, float corner)
{
	if (verificationData(true, party1))
		return 1;
	else if (verificationData(true, party2))
		return 1;
	else if (verificationData(false, corner))
		return 1;
	else
		++count;
	return (party1 * party2 * (sin(corner* PI / 180) * PI / 180));
}

///rhombus ->
float Area::getRhombusArea(float party, float corner, bool flag)
{
	if (verificationData(true, party))
		return 1;

	if (flag = true)
	{
		if (verificationData(false, corner))
			return 1;
		else
			++count;
		return (party * party * (sin(corner* PI / 180) * PI / 180));
	}
	else
	{
		if (verificationData(true, party))
			return 1;
		else
			++count;
		return (0.5 * party * corner);
	}
}