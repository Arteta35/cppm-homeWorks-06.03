#include <iostream>
#include "IncorrectFigure.h"


std::string IncorrectFigure::Error_num() {

	switch (error_number)
	{
	case(1):
		return "������! ����� ����� � ������������ �� ����� 180!";
		break;
	case(2):
		return "������! ���� '�' � �������������� ������������ �� ����� 90 ��������!";
		break;
	case(3):
		return "������! ���� 'a' �� ����� ���� 'c' � ������� 'A' �� ����� ������� 'C'!";
		break;
	case(4):
		return "������! � �������������� ������������ �� ����� ������� ��� ����!";
		break;
	case(5):
		return "������! ����� ����� � �������� �� ����� 360 ��������!";
		break;
	case(6):
		return "������! � �������������� �������� ������� �� �����!";
		break;
	case(7):
		return "������! � �������������� ����/���� �� ����� 90 ��������!";
		break;
	case(8):
		return "������! � �������� ������� �� �����!";
		break;
	case(9):
		return "������! � �������� ����/���� �� ����� 90 ��������!";
		break;
	case(10):
		return "������! � ��������������� �������� ������� �� �����!";
		break;
	case(11):
		return "������! � ��������������� �������� ���� �� �����!";
		break;
	case(12):
		return "������! � ����� ������� �� �����!";
		break;
	case(13):
		return "������! � ����� �������� ���� �� �����!";
		break;
	default:
		break;
	}
	
}


IncorrectFigure::IncorrectFigure(int error_number) {

	this->error_number = error_number;

}










