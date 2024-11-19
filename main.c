#include "point.h"
#include <stdlib.h>

int main(void){

	point *a = mem_guard(malloc(sizeof(point)));
	*a = point_value(1.0, 2.0);
	point_print(a);
	point b = point_value(10.0, 10.0);
	point_offset(a, &b);
	point_print(a);

	free(a);
}
	
