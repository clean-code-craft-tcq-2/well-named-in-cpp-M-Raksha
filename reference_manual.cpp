#include <iostream> 
#include "declarations.h"

void PrintManual()
{
    std::cout<<"****Reference manual****"<<std::endl;
    std::cout<<"PairNum   ColorCode"<<std::endl;
    for(int PairNum =1; PairNum<=25;PairNum++)
    {
        TelCoColorCoder::ColorPair PrintclrCode = TelCoColorCoder::GetColorFromPairNumber(PairNum);
        std::cout<<PairNum<<"         "<<PrintclrCode.ToString()<<std::endl;
    }
}
