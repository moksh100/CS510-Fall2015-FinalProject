#include "cplane.h"
#include <stdio.h>
#include <stdlib.h>


CPLANE* CPLANE_new(long double xmin, long double xmax, long double ymin, long double ymax, unsigned long int xpoints, unsigned long int  ypoints){
	CPLANE p;
	p.xmin=xmin;
	p.xmax=xmax;
	p.ymin = ymin;
	p.ymax=ymax;
	p.xpoints = xpoints;
	p.ypoints=ypoints;
	long double stepx = (xmax-xmin)/xpoints;
	long double stepy = (ymax-ymin)/ypoints;
	long double x;
	long double y;
	ComplexNumber mat[ypoints][xpoints];
	int i;
	int j;
	i=0;
	printf (" enter loop %d \n",i);
	for (x=xmin; i<xpoints; x=x+stepx){
		j=0;
		for (y=ymin; j<ypoints; y=y+stepy){
			ComplexNumber temp;
			temp.x= x;
			temp.y= y;
			mat[j][i] = temp;
			j=j+1;
			printf ("loop j %d \n",j); 
		}
		i=i+1;
	 printf ("loop i %d \n",i);
	}
	printf ("assigning mat \n");
	p.mat= &mat;
	printf ("assigned mat \n");
	return &p;
}
