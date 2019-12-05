#include <QApplication>
#include "Calculator.h"
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Calculator
            calculator;
    calculator.setWindowTitle("Calculator");
    calculator.resize(400, 400);
    calculator.show();
    return app.exec();
}
