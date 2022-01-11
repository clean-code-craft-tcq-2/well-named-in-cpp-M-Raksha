#include <iostream> 
#include "declarations.h"

void PrintManual()
{
    for(int PairNum =1; PairNum<=25;PairNum++)
    {
        TelCoColorCoder::ColorPair PrintclrCode = TelCoColorCoder::GetColorFromPairNumber(PairNum);
        std::cout<<PairNum<<"   "<<PrintclrCode.ToString()<<std::endl;
    }
}
