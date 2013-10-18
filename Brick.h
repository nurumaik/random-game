#ifndef _BRICK_H_
#define _BRICK_H_

#include <SFML/Graphics.hpp>

class Brick {
public:
  Brick(sf::Vector2f initialPos, sf::Color initialColor, sf::RenderWindow *wnd);

  void draw();
  void move();
  void checkEvents();

  static const float SizeX = 150;
  static const float SizeY = 68;
  static const float Acceleration = 0.1;
  static const float RotationSpeed = 0.5;
private:
  sf::RenderWindow *mWindow;
  sf::Vector2f mCoords;
  float mSpeed;
  float mAngle;
  sf::Texture mTexture;
  sf::Sprite mSprite;
};

#endif
