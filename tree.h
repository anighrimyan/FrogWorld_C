// In this file define the Tree Struct

#ifndef TREE_H
#define TREE_H

#include <stdbool.h>

typedef struct Tree Tree;

// Constructor and destructor functions

void Tree_init(Tree* this_ptr);
void Tree_destroy(Tree* this_ptr);

// These function declarations are the behaviors of a sun object

bool air_synthesis(Tree* this_ptr);
void stop_air_synthesis(Tree* this_ptr);

#endif // TREE_H