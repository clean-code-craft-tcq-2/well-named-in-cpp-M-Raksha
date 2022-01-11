#include <iostream>
#include <assert.h>
#include"declarations.h"

namespace TelCoColorCoder 
{ 
 
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet" }; 
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]); 
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate"}; 
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


 std::string ColorPair:: ToString()
             { 
                 std::string colorPairStr = MajorColorNames[majorColor]; 
                 colorPairStr += " "; 
                 colorPairStr += MinorColorNames[minorColor]; 
                 return colorPairStr; 
             } 
	
ColorPair GetColorFromPairNumber(int pairNumber) 
{ 
        int zeroBasedPairNumber = pairNumber - 1; 
        MajorColor majorColor =  (MajorColor)(zeroBasedPairNumber / numberOfMinorColors); 
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors); 
		
        return ColorPair(majorColor, minorColor);
} 

int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
{ 
         return major * numberOfMinorColors + minor + 1; 
} 

}

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
