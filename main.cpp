#include <iostream>
#include <assert.h>
#include"declarations.h"


ColorPair GetColorFromPairNumber(int pairNumber) 
{ 
        int zeroBasedPairNumber = pairNumber - 1; 
         TelCoColorCoder::MajorColor majorColor =  (MajorColor)(zeroBasedPairNumber / numberOfMinorColors); 
        TelCoColorCoder::MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors); 
		
        return ColorPair(majorColor, minorColor);
} 

int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) 
{ 
         return major * numberOfMinorColors + minor + 1; 
} 



int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
