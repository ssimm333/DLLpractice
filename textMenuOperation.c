#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include "enum.h"
#define MAX_SETS 10


int indexInBounds(int index) {
	if (index < 1 || index > MAX_SETS) {
		return 0;
	}
	else {
		return 1;
	}
}

