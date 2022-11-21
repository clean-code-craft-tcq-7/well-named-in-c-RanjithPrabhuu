//array pointer to hold the names of the major colours
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

//integer variable to hold the total number of major colours
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

//array pointer to hold the names of the minor colours
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

//integer variable to hold the total number of minor colours
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

//structure which holds the major and minor colour of the colour code pairing
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
