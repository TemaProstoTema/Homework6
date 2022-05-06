#include <iostream>

class Calculator{
public:
    double Exp(double a, char x, double b);
};

int main(){
    Calculator calc;
    while (true){
        std::cout << "Введите выражение вида a T b, где T - один из знаков(+, -, *, /)\n";
        double a = 0.0;
        double b = 0.0;
        double result = 0.0;
        char T = '0';
        std::cin >> a >> T >> b;
        if ((std::cin.fail()) || (T != '+') || (T != '-') || (T != '*') || (T != '/')){
            std::cin.clear();
            std::cout << "Введен некорректный знак операции, или операнд\n";
        }
        else{
            if ((b != 0.0) && (T != '/')){
                result = calc.Exp(a, T, b);
                std::cout << a << T << b << '=' << result << '\n';
            }
            else{
                std::cout << "На ноль делить нельзя\n";
            }
        }
    }
}

double Calculator::Exp(double a, char T, double b){
    switch (T){
        case '+':
            return (a + b);
        case '-':
            return (a - b);
        case '*':
            return (a * b);
        case '/':
            return (a / b);
    }
}