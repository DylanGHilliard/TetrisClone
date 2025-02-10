#pragma once

#include <vector>
#include "colors.h"
#include "Position.h"
#include<map>


class Block
{
public:
    Block();
    void draw(int offSetX, int offSetY);
    void move(int rows, int colums);

    using PositionVector = std::vector<Position>;

    PositionVector getCellPositions();


private:
};