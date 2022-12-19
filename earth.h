// In this file define the Earth behavior functions

#ifndef EARTH_H
#define EARTH_H

typedef struct Earth Earth;

// Constructor and destructor functions

void Earth_init(Earth* this_ptr);
void Earth_destroy(Earth* this_ptr);

// These function declarations are the behaviors of a earth object

void mode(Earth* this_ptr);

#endif // EARTH_H