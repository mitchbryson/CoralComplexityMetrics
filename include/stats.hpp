///////////////////////////////////////////////////////////////////////
// stats.hpp - functions to compute sample statistics
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

int qsort_compare(const void *a, const void *b) {
    double diff_val;
    diff_val = *(double*)a - *(double*)b;
    if (diff_val > 0) {
        return(1);
    }
    else {
        return(-1);
    }
}

template <class myType> double mean(myType *array, int n)
{
    double val = 0;
    for (int i = 0; i < n; i++) {
        val = val + (double)array[i];
    }
    val = val/((double)n);
    return(val);
}
template <class myType> double meanpos(myType *array, int n)
{
    double val = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
    	if (array[i] > 0) {
        	val = val + (double)array[i];
        	c++;
        }
    }
    if (c > 0) {
    	val = val/((double)c);
    }
    else {
    	val = -1;
    }
    return(val);
}
template <class myType> double var(myType *array, int n)
{
    double m = mean(array,n);
    double val = 0;
    for (int i = 0; i < n; i++) {
        val = val + ((double)array[i]-m)*((double)array[i]-m);
    }
    val = val/((double)n);
    return(val);
}
template <class myType> double median_qsort(myType *array, int n)
{
    double *array_s;
    double val;
    
    if (n == 1) {
        return(array[0]);
    }
    
    array_s = (double*)malloc(n*sizeof(double));
    for (int i = 0; i < n; i++) {
        array_s[i] = (double)array[i];
    }
    qsort(array_s, n, sizeof(double), qsort_compare);
    if ((n % 2) == 0) {
        val = (array_s[(n/2)] + array_s[(n/2)-1])/2;
    }
    else {
        val = array_s[(n/2)-1];
    }
    free(array_s);
    return(val);
}
template <class myType> double max(myType *array, int n)
{
    double val = (double)array[0];
    for (int i = 0; i < n; i++) {
    	if ((double)array[i] > val) {
        	val = (double)array[i];
        }
    }
    return(val);
}
template <class myType> double min(myType *array, int n)
{
    double val = (double)array[0];
    for (int i = 0; i < n; i++) {
    	if ((double)array[i] < val) {
        	val = (double)array[i];
        }
    }
    return(val);
}


