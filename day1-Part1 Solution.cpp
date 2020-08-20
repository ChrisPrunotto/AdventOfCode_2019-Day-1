#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int totalFuel = 0, moduleFuelReq, inputModuleMass;
    std::ifstream file("input.txt");

    while(file >> inputModuleMass){
        moduleFuelReq = (inputModuleMass / 3) - 2;
        totalFuel += moduleFuelReq;
//        std::cout << "Input: " << inputModuleMass << "\nOutput: " << moduleFuelReq << "\n"; //Debug Line.
    }

    std::cout << "The total fuel needed is: " << totalFuel;
/*
    What I learned in this challenge:
    -- creating the ifstring object allowed me to process an *I*nput *F*ile*STREAM*
    -- the >> operand is the "extraction" operator. I've used it before with std::cout >>. It allows you to "extract" characters from the input stream. I did not know you could use it beyond just the cout output stream - you can also use it on the filestream to grab the stream line by line. I also learned that if I changed the type of "inputModuleMass" it would try to convert to whatever type that was (probably because it has overloads I'm not yet aware of).

    The final answer was 32566794.
*/  
}