#pragma
#include <raylib.h>
#include <vector>

class Grid
{
public:
    Grid();
    int grid[20][10];
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int clearFullRows();
private:
    int numRows;
    int numCols;
    int cellSize;    


};