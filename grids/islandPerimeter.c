/* This is a posible solution for the island perimeter excersice from Leetcode.
 * Considerations: You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.*/


int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;
    int row = gridSize;
    int* col = gridColSize;
    int i = 0;
    int j = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            if (grid[i][j]==1)
            {
                perimeter +=4;

                if (i + 1 < row && grid[i+1][j] == 1) /* i + 1 checks if the next cell exist and then especify the conditions for land cells*/
                {perimeter --;}
                if (i - 1 >= 0 && grid[i-1][j] == 1) /* i -1 checks if the cell exist and meet the land requirements*/
                {perimeter --;}
                if (j + 1 < row && grid[i][j+1] == 1)
                {perimeter --;}
                if (j - 1 >= 0 && grid[i][j-1] == 1)
                {perimeter --;}
            }
        }
    }
    return perimeter;
}
