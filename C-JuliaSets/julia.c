#include "cplane.h"

void iterate(ComplexNumber z,ComplexNumber c);

int main(long double xmin, long double xmax, long double  ymin, long double  ymax, unsigned long int xpoints, unsigned long int ypoints, long double  creal, long double cimag){
	CPLANE* cpl = CPLANE_new(xmin, xmax, ymin, ymax, xpoints, ypoints);
	ComplexNumber COMPLEX;
	COMPLEX.x=creal;
	COMPLEX.y=cimag;
	int i;
	ComplexNumber* arr = cpl.mat;
	int size = sizeof(arr);
	for(i=0;i<size;i++){
		iterate(arr[i],COMPLEX);	
	}
	
}

int MAXITER=256;

void iterate(ComplexNumber z,ComplexNumber c){
        int out=0;
        while(1>0){
            z=juliamap(z,c);
            out+=1;
            if(z.x>2 || z.x<-2){
		println("%s, %s, %s",z.x,z.y, out);                
		return;
	    }
            else if(out>=MAXITER){
		println("Exceed number of tries %s", out);                
		return;
	    }
	}
}
