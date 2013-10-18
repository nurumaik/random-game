/*
Copyright © 2013 Alexander Kumenko <nurumaik@gmail.com>
This work is free. You can redistribute it and/or modify it under the terms of
the Do What The Fuck You Want To Public License, Version 2, as published by Sam
Hocevar. See the COPYING file for more details.
*/
#include "Brick.h"

#include <cmath>

Brick::Brick(sf::Vector2f initialPos, sf::Color initialColor,
             sf::RenderWindow *wnd) :
    mWindow(wnd),
    mCoords(initialPos),
    mSpeed(0),
    mAngle(0)
  {
    mTexture.loadFromFile("Sprites/brick.bmp");
    mSprite.setTexture(mTexture);
    mSprite.setColor(initialColor);
    //mSprite.setPosition(initialPos);
  }

void Brick::draw() {
  mSprite.setPosition(mCoords);
  mSprite.setRotation(mAngle / M_PI * 180);
  mWindow->draw(mSprite);
}

void Brick::checkEvents() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8))
    mSpeed += Acceleration;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2))
    mSpeed -= Acceleration;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6))
    mAngle += RotationSpeed;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4))
    mAngle -= RotationSpeed;
}

void Brick::move() {
  mCoords.x += mSpeed * cos(mAngle);
  mCoords.y += mSpeed * sin(mAngle);
  mSpeed *= FrictionCoef;
}

void Brick::update() {
  checkEvents();
  move();
}
