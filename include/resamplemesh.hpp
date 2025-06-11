/////////////////////////////////////////////////////////////////////////////
// resamplemesh.hpp - Used to create a regularly resampled mesh (in 2.5D) from 
// an existing mesh using 2D interpolation of height values across triangles
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <sys/stat.h>
#include <vector>

// Points3D - Structure containing 3D points
typedef struct {
    
    int n;
    int nmem;
    double *X;
    double *Y;
    double *Z;
    
} Points3D;

// TriData - Structure containing triangulation
typedef struct {
    
    int n;
    int *first;
    int *second;
    int *third;
    //int *val;
    
} TriData;

// GridMap
typedef struct {
    double grid_res;
    int nx;
    int ny;
    double xoffset;
    double yoffset;
    double **grid_heights;
    int **grid_occ;
} GridMap;






