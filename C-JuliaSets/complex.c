#include <stdio.h>
#include "complex.h"


char ** complex_to_str(ComplexNumber z){
	char  tagstr[160];
	sprintf(tagstr, "%d+%di", z.x, z.y);
	printf("String %s \n", tagstr);
	return & tagstr;
}

ComplexNumber juliamap(ComplexNumber z, ComplexNumber c){
	ComplexNumber result;
 	printf ("juliamap z= %d+%di; c= %d+%di;\n",  z.x, z.y, c.x,c.y);
	result = add2(square(z),c);
	printf ("juliamap result = %d+%di;\n",  result.x, result.y);
	return result;
}

ComplexNumber add2(ComplexNumber a, ComplexNumber b){
	printf ("enter add2\n");
	printf ("add2 a= %d+%di; b= %d+%di;\n",  a.x, a.y, b.x,b.y);
	ComplexNumber result;
	result.x=a.x+b.x;
	printf ("x= %d\n", result.x);
	result.y=a.y+b.y;
	printf ("y= %d\n", result.y);
	return result;
}



ComplexNumber mult2(ComplexNumber a, ComplexNumber b){
	ComplexNumber result;
	result.x=((a.x*b.x)-(a.y*b.y));
	result.y=((a.x*b.y)+(b.x*a.y));
	return result;
};

ComplexNumber square (ComplexNumber a){
	printf ("enter square\n");
	ComplexNumber result;
	result.x=(a.x*a.x)-(a.y*a.y);
	result.y=a.y*a.y;
	return result; 
};
