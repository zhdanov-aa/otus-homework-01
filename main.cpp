#include <iostream>
#include <vector>
//#include <QuadEqu.h>

int main(int argc, char* argv[])
{
    std::vector<double> result { 256, 512 }; // = SolveQuadEqu(1, 2, 3);

    std::cout << "roots (" << result.size() << "): ";
    for(double r: result)
    {
        std::cout << r << "\t";
    }
    std::cout << std::endl;

    return 0;
}