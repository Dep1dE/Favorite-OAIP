#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include "Expression.cpp"
#include "Number.cpp"
#include "BinaryOperation.cpp"

using namespace std;
int main() {
	Expression* sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
	Expression* expr = new BinaryOperation(new Number(3), '+', sube);
	std::cout << expr->evaluate() << std::endl;
	delete expr;
}