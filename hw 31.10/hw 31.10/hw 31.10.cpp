#include "settings.h"

int main()
{
    int a = 10;
    int b = 28;
    int* p_a = &a;
    int* p_b = &b;
    cout << p_a << "   " << p_b << "\n\n";
    int distance = p_b - p_a;
    cout << "Distance between a and b = " << distance << "B   OR   " << distance / 4 << " int type variable\n";
    Sleep(INFINITE);
}