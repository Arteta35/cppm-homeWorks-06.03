#pragma once
#include <iostream>



class IncorrectFigure : public std::exception {

public:

	IncorrectFigure(int error_number);

	std::string Error_num();
	
protected:

	int error_number =0;

};