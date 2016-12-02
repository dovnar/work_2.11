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
	static float getTriangleArea(float basis, float height);	//���������� ������� �� ��������� � ������ 
	static float getTriangleArea(float party1, float party2, float corner, bool flag);	//���������� ������� �� ���� �������� � ���� ����� ���� = true
	// float getTriangleArea(float party1, float party2, float party3);	//���������� ������� �� ���� �������� = false
	
	///rectangle ->
	static float getRectangleArea(float party1, float party2);	//���������� ������� �� ���� ��������
	///square ->
	static float getSquareArea(float party);	//���������� ������� �� ����� �������
	static float getSquareArea(float party1, float party2);	//���������� ������� �� ���� ��������	///parallelogram ->
	static float getParallelogramArea(float party, float height);	//���������� ������� �� ����� ������� � ������
	static float getParallelogramArea(float party1, float party2, float corner);	//���������� ������� �� ���� �������� � ���� ����� ����
	///rhombus ->
	static float getRhombusArea(float party, float corner, bool flag);	//���������� ������� �� ������� � ���� = true
	//static float getRhombusArea(float diagonal1, float diagonal2); //���������� ������� �� ���� ���������� = false
};

