#include "cplane.h"

CPLANE* CPLANE_new(long double xmin, xmax, ymin, ymax; unsigned long int xpoints, ypoints){
	CPLANE* p = malloc(sizeof(CPLANE));
	p->xmin=xmin;
	p->xmax=xmax;
	p->ymin = ymin;
	p->ymax=ymax;
	p->xpoints = xpoints;
	p->ypoints=ypoints;

	return p;
}
