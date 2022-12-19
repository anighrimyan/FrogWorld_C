// In this file is implemented the earth.h functions

#include <stdio.h>
#include "earth.h"
#include "sun.h"
#include "tree.h"
#include "frog.h"

typedef struct Earth {
  int day;
	int night;
	int time;
} Earth;

 void Earth_init(Earth* this_ptr) {
   this_ptr->day = 6;
   this_ptr->night = 4;
   this_ptr->time = 0;
 }

  void Earth_destroy(Earth* this_ptr) {}

	void mode(Earth* this_ptr) {
    Earth_init(this_ptr);
   while (this_ptr->time < this_ptr->day) {
		Frog* frog;
		Sun* sun;
	  Tree* tree;
		if (this_ptr->time == 0 && shine(sun)) {
			while (air_synthesis(tree)) {
			      wake_up(frog);
				    breathe(frog);
				++this_ptr->time;
				if (this_ptr->time == 1) {
					  jump_to_grass(frog);
					++this_ptr->time;
				}
				if (this_ptr->time == 2) {
					   eat(frog);
					++this_ptr->time;
				}
			   while (this_ptr->time < 5) {
					   jump(frog);
					++this_ptr->time;
					}
			   if (this_ptr->time == 5) {
	    		   eat(frog);
		   			++this_ptr->time;
				}
			   if (this_ptr->time == this_ptr->day) {
					    stop_to_shine(sun);
				      sleep(frog);
			 	      stop_air_synthesis(tree);
		     	  ++this_ptr->time;
          }
			}
		}		
	} 
}