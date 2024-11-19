#ifndef POINT_H
#define POINT_H

typedef struct Point {
	double x;
	double y;
} point;

point point_value(double x, double y);

void *mem_guard(void *p);

void point_print(point *self);

void point_offset(point *self, const point *offset_by);

#endif
