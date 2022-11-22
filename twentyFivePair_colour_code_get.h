//structure which holds the major and minor colour of the colour code pairing
typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

// declaration of print util function for displaying the colour pairs in strings.
void ColorPairToString(const ColorPair* colorPair, char* buffer);
// function declaration to get the colour from the pair number.
ColorPair GetColorFromPairNumber(int pairNumber);
// function declaration to get the pair number from the colour.
int GetPairNumberFromColor(const ColorPair* colorPair);
