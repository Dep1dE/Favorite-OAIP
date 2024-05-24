#pragma once
#include "Expression.cpp"
class Number:public Expression{
private:
	double num;
public:
	Number(double num) {
		this->num = num;
	}
	double evaluate()override {
		return num;
	}
};