    #pragma once

    class PClass
    {
    private:
        double a, b;

    public:
        // constructor
        PClass() { a = 1; b = 1; }

        // function to calculate b
        void fn_b(double x, double y, double z);

        // function to calculate a
        void fn_a(double x, double y, double z);

        // function to calculate factorial
        double faktr(int n);

        // functions to retrieve values of a and b
        double getA() const { return a; }
        double getB() const { return b; }
    };
 

