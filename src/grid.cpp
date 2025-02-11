#include "grid.h"
#include <iostream>
#include "colors.cpp"


Grid::Grid()
{
    numRows = 20;
    numCols = 10;
    cellSize = 30;

}

void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for(int column = 0; column < numCols; column++)
        {
            _grid[row][column] = 0;
        }
    }
}

void Grid::Print()
{
    for (int row = 0; row < numRows; row++)
    {
        for(int column = 0; column < numCols; column++)
        {
            std::cout << _grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    auto& colors(getCellColors());
    for (int row = 0; row < numRows; row++)
    {
        for (int column = 0; column < numCols; column++)
        {
            int cellValue = _grid[row][column];
            DrawRectangle(column * cellSize + 11, row * cellSize + 11, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}

bool Grid::IsCellEmpty(int row, int column)
{
    return (0 == _grid[row][column]);
}

bool Grid::IsCellOutside(int row, int column)
{
    return !(row >= 0 && row < numRows && column >=0 && column < numCols);
}

int Grid::clearFullRows()
{
    int completed = 0;
    for (int row = numRows-1; row >0; --row)
    {
        if(isRowFull(row))
        {
            clearRow(row);
            completed++;
        }
        else if(completed >0)
        {
            moveRowDown(row, completed);
        }
    }
}
bool Grid::isRowFull(int row) 
{
    bool isFull = true;
    for(int column = 0; column < numCols ; ++column)
    {
        if(_grid[row][column] == 0)
        {
            isFull = false;
            break;
        }
    }
    return isFull;
}

void Grid::clearRow( int row)
{
    for(int column = 0; column < numCols ; ++column)
    {
        _grid[row][column] = 0;
    }
}

void Grid::moveRowDown(int row, int numRows)
{
    for(int column = 0; column < numCols; ++column)
    {
        _grid[row + numRows][column] = _grid[row][column];
        _grid[row][column] = 0;
    }

}
