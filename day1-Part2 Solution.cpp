#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int totalFuel = 0, inputModuleMass;
    std::ifstream file("input.txt");

    while(file >> inputModuleMass){
        while ((inputModuleMass / 3) > 0)
        {
            inputModuleMass = (inputModuleMass / 3) - 2;
            if (inputModuleMass > 0){
                totalFuel += inputModuleMass;
            }
        }
    }

    std::cout << "Total Fuel: " << totalFuel;
/*
    What I learned in this challenge:
    -- By combining the input filestream's while loop with a while loop, I could continually calculate the module mass of not only the individual modules, but also the fuel that they used. It actually completely eliminated the "moduleFuelReq" variable from the first part of the solution (though, I kept that separate in the first solution as part of a debugging effort and for legibility, not because I didn't think I could reduce and simplify.)

    -- I did run into a hiccup where values would occasionally print out as negative (assuming what happened was the division of inputmodulemass / 3 was "1" and then subtracting 2 resulted in negative 1), and I had to work around that by using a simple if statement. I don't think there's any way to get around needing that if statement.

    The final answer was 4882337.
*/  
}