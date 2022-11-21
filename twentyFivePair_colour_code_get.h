//structure which holds the major and minor colour of the colour code pairing
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// function declaration to get the colour from the pair number.
ColorPair GetColorFromPairNumber(int pairNumber);
// function declaration to get the pair number from the colour.
int GetPairNumberFromColor(const ColorPair colorPair);
