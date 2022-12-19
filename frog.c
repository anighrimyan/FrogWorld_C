// In this file is implemented the frog.h functions

#include <stdio.h>
#include "frog.h"

void Frog_init(Frog* this_ptr) {
  
}
void Frog_destroy(Frog* this_ptr) {}

void wake_up(Frog* this_ptr) {
  printf("Good morning!!!!!\n");
}

void breathe(Frog* this_ptr) {
  printf("OMG, how is shining sun!!!!!\n");
}

void jump_to_grass(Frog* this_ptr) {
  printf("It's time for breakfast. kvuaaaa-kvuaaaa!!!!!!\n");
}

void eat(Frog* this_ptr) {
  printf("Nyum - Nyum, sweet grossssss!!!!!\n");
}

void jump(Frog* this_ptr) {
  printf("jump-kvuaaaa-kvuaaaa, jump-kvuaaaa-kvuaaaa\n");
}

void sleep(Frog* this_ptr) {
  printf("zzzzzzzzkvaaaaaaaaaaaaaa!!!!!!\n");
}