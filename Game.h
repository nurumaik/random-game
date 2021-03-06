/*
Copyright © 2013 Alexander Kumenko <nurumaik@gmail.com>
This work is free. You can redistribute it and/or modify it under the terms of
the Do What The Fuck You Want To Public License, Version 2, as published by Sam
Hocevar. See the COPYING file for more details.
*/
#ifndef _GAME_H_
#define _GAME_H_

#include <SFML/Graphics.hpp>

#include "Brick.h"

class Game {
public:
  Game(sf::RenderWindow *wnd);
  void update();
  void draw();

private:
  sf::RenderWindow *mWindow;
  Brick mBrick;
};

#endif /* _GAME_H_ */
