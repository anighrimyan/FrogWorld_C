// In this file define the Frog behavior functions

#ifndef FROG_H
#define FROG_H

typedef struct Frog Frog;

// Constructor and destructor functions

  void Frog_init(Frog* this_ptr);
  void Frog_destroy(Frog* this_ptr);

// These function declarations are the behaviors of a frog object

	void wake_up(Frog* this_ptr);
	void breathe(Frog* this_ptr);
	void jump_to_grass(Frog* this_ptr);
	void eat(Frog* this_ptr);
	void jump(Frog* this_ptr);
	void sleep(Frog* this_ptr);

#endif // FROG_H