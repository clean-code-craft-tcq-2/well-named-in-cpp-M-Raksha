#include <iostream> 
#include <assert.h> 

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) 
{ 
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor); 
     std::cout << "Got pair number " << pairNumber << std::endl; 
     assert(pairNumber == expectedPairNumber); 
} 

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) 
{ 
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor); 
     std::cout << "Got pair number " << pairNumber << std::endl; 
     assert(pairNumber == expectedPairNumber); 
} 
