#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

void menuLagrange();

class Lagrange {

    private:

        float Matriz[3][2];
        int N = 3;
        int I;
        int J;
        float Li[3];

    public:

        int setValores();
        void setContadores ();
        void calcularLx ();
        void calcularPolinomio ();

};

#endif // LAGRANGE_H
