const int MAX_COLORPAIR_NAME_CHARS = 16

//enum which consists the major colours in the 25 pair colour code table.
typedef enum 
{
    WHITE, 
    RED, 
    BLACK, 
    YELLOW, 
    VIOLET
}MajorColor;

//enum which consists the minor colours in the 25 pair colour code table.
typedef enum 
{
    BLUE, 
    ORANGE, 
    GREEN,
    BROWN, 
    SLATE
}MinorColor;

//extern variables for major and minor colour names array
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

//extern variables for total number of major and minor colours
extern int numberOfMajorColors;
extern int numberOfMinorColors;
