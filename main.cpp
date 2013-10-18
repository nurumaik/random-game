/*
Copyright © 2013 Alexander Kumenko <nurumaik@gmail.com>
This work is free. You can redistribute it and/or modify it under the terms of
the Do What The Fuck You Want To Public License, Version 2, as published by Sam
Hocevar. See the COPYING file for more details.
*/
#include <iostream>
#include <SFML/Graphics.hpp>


int main(int argc, char* argv[]) {

  /* Code adapted from the SFML 2 "Window" example */


  sf::RenderWindow wnd(sf::VideoMode(800*1.5, 600*1.5), "myproject");
  sf::Texture brick;
  brick.loadFromFile("Sprites/brick.bmp");
  sf::Sprite brickSprite;
  brickSprite.setTexture(brick);
  brickSprite.setPosition(sf::Vector2f(10, 50));
  
  

  while (wnd.isOpen()) {
    sf::Event Event;
    while (wnd.pollEvent(Event)) {
      if (Event.type == sf::Event::Closed)
        wnd.close();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2))
      brickSprite.move(sf::Vector2f(0, 1));
    wnd.clear(sf::Color::Black);
    wnd.draw(brickSprite);
    wnd.display();
  }
}
