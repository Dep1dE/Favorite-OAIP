#include "opz.h"
#include <QDebug>


double OPZ::evaluate(List l)
{
        stack eval;

        eval.push(0.0, ' ');
        eval.push(0.0, ' ');

        List::Element* temp;
        double res = 0.0;

        for (int i = 0; i < opz.size; ++i)
        {
            temp = opz.getElement(i);
            if (!(temp->isOperator())) eval.push(temp->data.toDouble(), ' ');
            else
            {
                res = oper(eval.top->next->num, eval.top->num, temp->data);
                eval.pop(0); eval.pop(0);
                eval.push(res, ' ');
                if (!eval.Size()) { eval.push(0.0, ' '); eval.push(0.0, ' '); }
            }
        }

        return eval.top->num;
}

double OPZ::oper(double &a, double &b, const QString &c)
{
    if (c == "+") return a + b;
    if (c == "-") return a - b;
    if (c == "/") return a / b;
    return a * b;
}

void OPZ::swap()
{
    int idx = 0;
    std::string ogStr = og.toStdString();
    std::string buff{};
    for (int i = 0; i < og.length(); ++i)
    {
        if (og[i].isLetter())
        {
            idx = (int)ogStr[i] - 'a';
            buff = a[idx].toStdString();
            og.remove(i, 1);
            for (int j = 0; j < a[idx].length(); ++j)
                og.insert(i + j, a[idx][j]);
            ogStr.erase(i, 1);
            for (std::size_t j = 0; j < buff.length(); ++j)
                ogStr.insert(ogStr.begin() + i + j, buff[j]);
        }
    }
}

List OPZ::infix(QString str)
{
        QString buff{};

        stack operands;
        List result;

        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == '-' && str[++i] == '(')
            {
                change(str, i);

                if (i - 1)
                {
                    str[i - 1] = '+';
                }
                else
                {
                    str = str.remove(i - 1, 1);
                }

            }
        }

        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i].isDigit()||str[i] == '.') buff += str[i];
            else if (str[i] == '-')
            {
                if (!i && str[i + 1] != '(') buff += str[i];
                else if (i && str[i - 1] == '(' && str[i + 1].isDigit()) buff += str[i];
                else
                {
                    if (buff.length()) result.pushBack(buff);
                    buff = "";

                    while (operands.Size())
                    {
                        if (getPriority(str[i]) > getPriority(operands.top->op)) break;
                        result.pushBack(operands.top->op);
                        operands.pop(0);
                    }

                    operands.push(0.0, str[i]);
                }
            }
            else
            {
                if (buff.length()) result.pushBack(buff);
                buff = "";

                if (str[i] != ')' && str[i] != '(')
                {
                    while (operands.Size())
                    {
                        if (getPriority(str[i]) > getPriority(operands.top->op)) break;
                        result.pushBack(operands.top->op);
                        operands.pop(0);
                    }

                    operands.push(0.0, str[i]);
                }
                else if (str[i] == ')')
                {
                    while (operands.Size())
                    {
                        if (operands.top->op == '(') break;
                        result.pushBack(operands.top->op);
                        operands.pop(0);
                    }
                    if (operands.Size()) operands.pop(0);
                }
                else
                {
                    operands.push(0.0, str[i]);
                }
            }
        }

        if (buff.length()) result.pushBack(buff);

        while (operands.Size()) { result.pushBack(operands.top->op); operands.pop(0); }

        return result;
}

void OPZ::change(QString &str, int begin)
{
        int count = 1;
        if (str[begin + 1].isDigit()) str.insert(begin + 1, QChar('+'));
        for (int i = begin + 1; i < str.length(); ++i)
        {
            if (str[i] == '-') { str[i] = '+';  }
            else if (str[i] == '(')
            {
                ++count;
                ++i;

                while (count ^ 1)
                {
                    if (str[i] == '(') ++count;
                    else if (str[i] == ')') --count;
                    ++i;

                    if (!(count ^ 1)) --i;
                }

            }
            else if (str[i] == ')') { --count; if (!count) return; }
            else if (str[i] == '+') str[i] = '-';
        }
}

int OPZ::getPriority(const QChar &c)
{
    if (c == '(' || c == ')') return 0;
    if (c == '+' || c == '-') return 1;
    if (c == '/' || c == '*') return 2;
    return 3;
}

OPZ::OPZ()
{
    og = "";

    evaluation = 0.0;

    opz = List();
}

OPZ::OPZ(const QString &s, QString _arr[], const int & _size)
{
    evaluation = 0.0;
    og = s;

    size = _size;

    for (int i = 0; i < size; ++i) a[i] = _arr[i];

    swap();

    opz = infix(og);


    evaluation = evaluate(opz);
}

QString OPZ::getOpz()
{
    QString res{};

    for (int i = 0; i < opz.size; ++i) res += opz.getElement(i)->data + ' ';

    return res;
}

double OPZ::getEvaluation()
{
    return evaluation;
}
