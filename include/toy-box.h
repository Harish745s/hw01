/**
 * @brief
 */

#ifndef CSC232_TOY_BOX_H__
#define CSC232_TOY_BOX_H__

#include "plain-box.h"

enum Color
{
    BLACK, RED, BLUE, GREEN, YELLOW, WHITE
};

template<typename ItemType>
class ToyBox : public PlainBox<ItemType>
{
private:
    Color boxColor;
public:
    explicit ToyBox(const ItemType& theItem = ItemType{}, const Color& theColor = BLACK);
    explicit ToyBox(const Color& theColor);
    Color GetColor() const;
};

#include "toy-box.cpp"

#endif