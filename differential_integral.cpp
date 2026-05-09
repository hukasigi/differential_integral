#include <iostream>
#include <math.h>
using namespace std;

double ex(double x) {
    return (double)exp(x);
}

double ax(double x) {
    return 2.0 * x;
}

double integral(double (*fx)(double), double a, double b, double steps) {
    // ....

    double result = 0.0;

    for (int i = 1; i < steps; i++) {
        result += fx((b - a) / steps * i) * (b - a) / steps;
    }

    return result;
}
double Differential(double (*fx)(double), double x, double delta) {
    double result = 0.0;

    return result = (fx(x + delta) - fx(x)) / delta;
}

int main() {
    double (*ex_ptr)(double) = ex;
    double (*ax_ptr)(double) = ax;

    double result_ex = integral(ex_ptr, 0, 10, 1000);
    double result_ax = integral(ax_ptr, 0, 10, 1000);

    double result_def_ex = Differential(ex_ptr, 1, 0.001);
    double result_def_ax = Differential(ax_ptr, 2, 0.001);

    printf("integral ex:%f ax:%f  Differential ex:%f ax:%f\r\n", result_ex, result_ax, result_def_ex, result_def_ax);
}
