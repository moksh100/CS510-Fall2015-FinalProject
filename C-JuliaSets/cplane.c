#include "cplane.h"
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

CPLANE* CPLANE_new(long double xmin, xmax, ymin, ymax; unsigned long int xpoints, ypoints){
	CPLANE* p = malloc(sizeof(CPLANE));
	p->xmin=xmin;
	p->xmax=xmax;
	p->ymin = ymin;
	p->ymax=ymax;
	p->xpoints = xpoints;
	p->ypoints=ypoints;
	long double stepx = (xmax-xmin)/xpoints;
	long double stepy = (ymax-ymin)/ypoints;
	long double x;
	long double y;
	ComplexNumber mat[ypoints][xpoints];
	int i;
	i=0;
	for (x=xmin; x<=xmax; x=x+stepx){
		int j;
		j=0;
		for (y=ymin; y<=ymax; y=y+stepy){
			mat[j][i].x= x;
			mat[j][i].y=y;
			j=j+1;
		}
		i=i+1;
	}

	p->mat=mat;
	return p;
}
