#ifndef TOOLS_H
#define TOOLS_H

#include <allegro.h>
#include <loadpng.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Collision
extern bool collisionAny(int xMin1,
                         int xMax1,
                         int xMin2,
                         int xMax2,
                         int yMin1,
                         int yMax1,
                         int yMin2,
                         int yMax2);
extern bool collisionBottom(int yMin1, int yMax1, int yMin2, int yMax2);
extern bool collisionTop(int yMin1, int yMax1, int yMin2, int yMax2);
extern bool collisionRight(int xMin1, int xMax1, int xMin2, int xMax2);
extern bool collisionLeft(int xMin1, int xMax1, int xMin2, int xMax2);

// Mouse position including resolution difference
extern int mouseX();
extern int mouseY();

// Checks if file exists
extern bool fexists(const char* filename);

// Random number generator
extern int random(int newLowest, int newHighest);

// Convert int to string
extern string convertInt(int number);

// Convert bool to string
extern string convertBool(bool boolean);

// Fade in and out
extern void highcolor_fade_in(BITMAP* bmp_orig, int speed);
extern void highcolor_fade_out(int speed);

// Next state
extern void set_next_state(int newState);

// Error reporting
extern void abort_on_error(const char* message);

#endif  // TOOLS_H
