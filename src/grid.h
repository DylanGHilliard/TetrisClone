#pragma once
#include <raylib.h>
#include <vector>

class Grid
{
public:
    Grid();

    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int clearFullRows();

    int& grid(int row, int column)
    {
        return _grid[row][column];
    }

private:
    int numRows;
    int numCols;
    int cellSize;
    
    bool isRowFull(int row);
    void clearRow(int row);
    void moveRowDown(int row, int numRows);

    int _grid[20][10];

};