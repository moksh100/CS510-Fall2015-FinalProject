#include "cplane.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void iterate(ComplexNumber z,ComplexNumber c);

int main(int argc, char **argv){
	printf ("Step 0\n");
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
	printf ("Step 1\n");	
	CPLANE* cpl = CPLANE_new(xmin, xmax, ymin, ymax, xpoints, ypoints);
	printf ("Step 2\n");
	ComplexNumber COMPLEX;
	COMPLEX.x=creal;
	COMPLEX.y=cimag;
	int i;
	printf ("Step 3\n");
	ComplexNumber* arr = (*cpl).mat;
	int size = sizeof(arr);
	printf ("Step 4 loop\n");
	for(i=0;i<size;i++){
	 	printf ("Step %d inside loop\n", i);
		iterate(arr[i],COMPLEX);	
	}
	return 0;
}

int MAXITER=256;

void iterate(ComplexNumber z,ComplexNumber c){
        int out=0;
        while(1>0){
	    printf ("Step %d while loop %d+%di\n", out, z.x, z.y);
            z=juliamap(z,c);
            out+=1;
            if(z.x>2 || z.x<-2){
		printf("%s, %s, %s \n",z.x,z.y, out);                
		return;
	    }
            else if(out>=MAXITER){
		printf("Exceed number of tries %s\n", out);                
		return;
	    }
	}
}
