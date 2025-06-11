/////////////////////////////////////////////////////////////////////////////
// rugositymultiscale.hpp - Used to generate rugosity measurements of a give terrain
// and bounding box file over multiple link scales
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

// Metrics
typedef struct {
	
	int nquad; // number of quadrats
	
	double quad_size; // linear size in (m)
	double landscape_slope; // slope value for whole mesh (deg)
	
	int *quad_coordx; // x-y coordinate position in sampling grid
	int *quad_coordy;
	
	double *quad_x; // x-y coords
	double *quad_y;
	double *quad_mean_h;
	
	int *numfaces; // number of mesh faces in each quadrat
	int *numverts; // number of mesh vertices in each quadrat
	
	double **vertangle_bins; // histogram bin values for vertical angle
	double *vertangle_mean; // mean of quadrat vertical angles (deg)
	double *vertangle_std; // standard deviation of quadrat vertical angles (deg)
	double *fitted_slope;  // quadrat slope angle
	
    int nresolutions;
    double *resolutions;
    
    double **area2D; // total projected 2D area (w.r.t vertical) for quadrat, per resolution
    double **area2Dplane; // total projected 2D area (w.r.t plane-of-best-fit) for quadrat, per resolution
    double **area3D; // total 3D area (w.r.t vertical) for quadrat, per resolution
    double **rugosity; // total rugosity for quadrat, per resolution
    double **rugosityplane; // total rugosity for quadrat, per resolution
    double **height_std; // standard deviation of height values in quadrat, per resolution
    double **height_range; // range of height values in quadrat, per resolution
    
} Metrics;







