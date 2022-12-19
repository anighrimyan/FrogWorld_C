// In this file is implemented the sun.h functions

#include <stdio.h>
#include <stdbool.h>
#include "sun.h"

typedef struct Sun {
bool result;
} Sun;

void Sun_init(Sun* this_ptr) {}

void Sun_destroy(Sun* this_ptr) {}

bool shine(Sun* this_ptr) {
  printf("Starts a new day!!!!!\n");
	this_ptr->result = true;
	return this_ptr->result;
}

void stop_to_shine(Sun* this_ptr) {
  printf("Look at beautiful sunset!!!!!\n");
	this_ptr->result = false;
}