#include <QRandomGenerator>
#include <iostream>
#include "brick.h"

Brick::Brick(int x, int y,int c) {

  if(c == 0)
    image.load(":/images/brick.png");
  else if(c == 1)
    image.load(":/images/red_brick.png");
  else if(c == 2)
    image.load(":/images/green_brick.png");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {

  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {

  return rect;
}

void Brick::setRect(QRect rct) {

  rect = rct;
}

QImage & Brick::getImage() {

  return image;
}

bool Brick::isDestroyed() {

  return destroyed;
}

void Brick::setDestroyed(bool destr) {

  destroyed = destr;
}
