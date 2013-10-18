/*
Copyright © 2013 Alexander Kumenko <nurumaik@gmail.com>
This work is free. You can redistribute it and/or modify it under the terms of
the Do What The Fuck You Want To Public License, Version 2, as published by Sam
Hocevar. See the COPYING file for more details.
*/
#include "Game.h"

Game::Game(sf::RenderWindow *wnd) :
  mWindow(wnd),
  mBrick(sf::Vector2f(10, 10), sf::Color::Red, wnd)
{
}

void Game::update() {
  mBrick.update();
}

void Game::draw() {
  mBrick.draw();
}
