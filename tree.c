// In this file is implemented the tree.h functions

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

typedef struct Tree {
bool result;
} Tree;

void Tree_init(Tree* this_ptr) {
  this_ptr->result = true;
}

void Tree_destroy(Tree* this_ptr) {}

bool air_synthesis(Tree* this_ptr) {
  return this_ptr->result;
}

void stop_air_synthesis(Tree* this_ptr) {
  printf("You must sleep otherwise you will die!!!!!!\n");
	this_ptr->result = false;
}
