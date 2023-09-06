﻿#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "_Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "IncorrectFigure.h"


void print_info(Figure* figure) {
	figure->print();
}


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try
	{
		Triangle tri(10, 20, 30, 50, 60, 70);
		print_info(&tri);	

	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }

	try
	{
		Right_triangle right_tri(10, 20, 30, 50, 40, 90);
		print_info(&right_tri);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	try
	{
		Isosceles_triangle isosceles_tri(10, 20, 10, 60, 60, 60);
		print_info(&isosceles_tri);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }

	try
	{
		Equilateral_triangle equilateral_tri(10, 20, 10, 60, 60, 60);
		print_info(&equilateral_tri);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	try
	{
		Quadrilateral quad(10, 20, 30, 40, 90, 90, 90, 90);
		print_info(&quad);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	try
	{
		_Rectangle req(10, 20, 10, 20, 90, 90, 90, 90);
		print_info(&req);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }

	try
	{
		Square square(20, 20, 20, 20, 90, 90, 90, 90);
		print_info(&square);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	try
	{
		Parallelogram parallelogram(20, 20, 20, 20, 100, 80, 100, 80);
		print_info(&parallelogram);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	try
	{
		Rhomb rhomb(20, 20, 20, 20, 100, 80, 100, 80);
		print_info(&rhomb);
	}
	catch (IncorrectFigure& er) { std::cout << er.Error_num() << std::endl; }


	return 0;

}