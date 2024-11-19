#include <stdio.h>
#include <stdlib.h>
#include "point.h"

//typedef struct Point {
//	double x;
//	double y;
//} point;

void *mem_guard(void *p){
	if(p == NULL){
		fprintf(stderr, "out of memory\n");
		exit(1);
	}
	return p;
}

point point_value(double x, double y){
	point initialized = {x, y};
	return initialized;
}

void point_print(point* self){
        printf("(%.2f, %.2f)\n", self->x, self->y);
}

void point_offset(point *self, const point *offset_by){
        self->x += offset_by->x;
        self->y += offset_by->y;
}
