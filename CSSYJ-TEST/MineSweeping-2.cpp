#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rows;
    int cols;
    string MineGrid;

    rows = 3;
    cols = 4;
    MineGrid = "??*??*??*??*";
    // MineGrid = 
    // "
    // ??*?
    // ?*??
    // *??*
    // ";

    if (MineGrid.size() != (size_t)(rows * cols))
    {
        cerr << "Error: input length (" << MineGrid.size() << ") != rows*cols (" << (rows * cols) << ")\n";
        return 1;
    }

    string MineList;
    for (char character : MineGrid)
    {
        if (character == '*')
            MineList.append("*");
        else
            MineList.append("0");
    }

    int count = 0;
    for (char character : MineList)
    {
        if (character == '*')
        {
            // if(count>rows&&count>cols) MineList[count-]
        }
        count += 1;
    }
}