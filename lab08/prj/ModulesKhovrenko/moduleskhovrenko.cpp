#include "moduleskhovrenko.h"
#include <cmath>


double s_calculation(float x, float z)
{
    double S = pow(3*sin(sqrt((12*pow(x,2))/log10(x-3))),2)+(z/2);
    return S;
}
