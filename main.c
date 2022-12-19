#include <stdio.h>
#include <stdlib.h>
#include "earth.h"

int main() {
 	struct Earth* earth = (Earth*)malloc(12);
  Earth_init(earth);
	mode(earth); 
  return 0;
}