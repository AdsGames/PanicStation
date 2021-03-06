#ifndef INIT_H
#define INIT_H

#include "GameState.h"

#include <allegro.h>
#include <loadpng.h>
#include <string>
#include <vector>

#include "globals.h"
#include "tools.h"

class Init : public GameState {
 private:
 protected:
 public:
  // Main loop functions
  Init();
  void update();
  void draw(bool toScreen);
  ~Init();
};

#endif  // INIT_H
