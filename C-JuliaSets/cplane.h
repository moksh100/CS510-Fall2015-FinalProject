#include "complex.h"

typedef struct cplane  { long double xmin, xmax, ymin, ymax; unsigned long int xpoints, ypoints, ComplexNumber *mat} CPLANE;
CPLANE* CPLANE_new(long double xmin, xmax, ymin, ymax; unsigned long int xpoints, ypoints);
