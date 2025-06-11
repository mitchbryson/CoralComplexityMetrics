/////////////////////////////////////////////////////////////////////////////////
// coordtransforms.hpp - functions for transforming coordinate systems etc.
//

#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void DCM_bn(double *Euler, double *DCM);
void DCM_nb(double *Euler, double *DCM);
double heading_mod(double heading);
