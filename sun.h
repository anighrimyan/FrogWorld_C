// In this file define the Sun Struct

#ifndef SUN_H
#define SUN_H

#include <stdbool.h>

typedef struct Sun Sun;

// Constructor and destructor functions

void Sun_init(Sun* this_ptr);
void Sun_destroy(Sun* this_ptr);

// These function declarations are the behaviors of a sun object

bool shine(Sun* this_ptr);
void stop_to_shine(Sun* this_ptr);

#endif // SUN_H