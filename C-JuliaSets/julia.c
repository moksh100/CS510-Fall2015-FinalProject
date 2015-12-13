#include "cplane.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void iterate(ComplexNumber z,ComplexNumber c);

int main(int argc, char **argv){
	if(argc< 9){
	 return 1;
	}
        long double xmin = atoi(argv[1]); 
	long double xmax= atoi(argv[2]); 
	long double ymin= atoi(argv[3]); 
	long double  ymax= atoi(argv[4]); 
	unsigned long int xpoints= atoi(argv[5]); 
	unsigned long int ypoints= atoi(argv[6]); 
	long double  creal= atoi(argv[7]); 
	long double cimag= atoi(argv[8]);	
	CPLANE* cpl = CPLANE_new(xmin, xmax, ymin, ymax, xpoints, ypoints);
	ComplexNumber COMPLEX;
	COMPLEX.x=creal;
	COMPLEX.y=cimag;
	int i;
	int j = xpoints*ypoints;
	ComplexNumber* arr = (*cpl).mat;
	for(i=0;i<j;i++){
		iterate(arr[i],COMPLEX);	
	}
	return 0;
}

int MAXITER=256;

void iterate(ComplexNumber z,ComplexNumber c){
        int out=0;
        while(1>0){     
            z=juliamap(z,c);
            out= out+1;
            if(sqrt((z.x*z.x)+(z.y*z.y))>2){
		printf("%f, %f, %d \n",z.x,z.y, out);                
		return;
	    }
            else if(out>=MAXITER){
		printf("%f, %f, %d \n",z.x,z.y, out);         
		return;
	    }
	}
}
