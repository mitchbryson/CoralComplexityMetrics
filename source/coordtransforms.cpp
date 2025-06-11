/////////////////////////////////////////////////////////////////////////////////
// coordtransforms.cpp - functions for transforming coordinate systems etc.
//

#include "coordtransforms.hpp"

// DCM_bn - Compute Body to NED Frame Direction Cosine Matrix
void DCM_bn(double *Euler, double *DCM)
{

	double sinphi = sin(Euler[0]);
	double cosphi = cos(Euler[0]);
	double sintheta = sin(Euler[1]);
	double costheta = cos(Euler[1]);
	double sinpsi = sin(Euler[2]);
	double cospsi = cos(Euler[2]);

	DCM[0] = cospsi*costheta;
	DCM[1] = cospsi*sintheta*sinphi - sinpsi*cosphi;
	DCM[2] = cospsi*sintheta*cosphi + sinpsi*sinphi;

	DCM[3] = sinpsi*costheta;
	DCM[4] = sinpsi*sintheta*sinphi + cospsi*cosphi;
	DCM[5] = sinpsi*sintheta*cosphi - cospsi*sinphi;

	DCM[6] = -sintheta;
	DCM[7] = costheta*sinphi;
	DCM[8] = costheta*cosphi;

}

////////////////////////////////////////////////////////////////
// DCM_nb - Compute NED to Body Frame Direction Cosine Matrix
void DCM_nb(double *Euler, double *DCM)
{

	double sinphi = sin(Euler[0]);
	double cosphi = cos(Euler[0]);
	double sintheta = sin(Euler[1]);
	double costheta = cos(Euler[1]);
	double sinpsi = sin(Euler[2]);
	double cospsi = cos(Euler[2]);

	DCM[0] = cospsi*costheta;
	DCM[1] = sinpsi*costheta;
	DCM[2] = -sintheta;

	DCM[3] = cospsi*sintheta*sinphi - sinpsi*cosphi;
	DCM[4] = sinpsi*sintheta*sinphi + cospsi*cosphi;
	DCM[5] = costheta*sinphi;

	DCM[6] = cospsi*sintheta*cosphi + sinpsi*sinphi;
	DCM[7] = sinpsi*sintheta*cosphi - cospsi*sinphi;
	DCM[8] = costheta*cosphi;

}

/////////////////////////////////////////////////////////////////
// heading_mod - modulus of heading angle to be between +/- pi
double heading_mod(double heading)
{
	double head_out;

	head_out = heading;
	if (head_out != 0) {
		while ( (head_out > M_PI) || (head_out < -M_PI) ) {
			if (head_out > 0) {
				head_out = head_out - 2*M_PI;
			}
			else {
				head_out = head_out + 2*M_PI;
			}
		}
	}
	return(head_out);
}

