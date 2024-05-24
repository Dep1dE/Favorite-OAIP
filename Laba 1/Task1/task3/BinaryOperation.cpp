#pragma once
#include "Expression.cpp"
class BinaryOperation :public Expression {
private:
	char znak;
	Expression* left;
	Expression* right;
public:
	BinaryOperation(Expression* left, char znak, Expression* right) {
		this->left = left;
		this->znak = znak;
		this->right = right;
	}
	double evaluate()override {
		if (znak == '+') {
			return left->evaluate() + right->evaluate();
		}
		else if (znak == '-') {
			return left->evaluate() - right->evaluate();
		}
		else if (znak == '*') {
			return left->evaluate() * right->evaluate();
		}
		else if (znak == '/') {
			return left->evaluate() / right->evaluate();
		}
	}
};