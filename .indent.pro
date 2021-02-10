-bad   // blank lines after declarations
-bap   // blank lines after prodcedures
-bbb   // blank lines after boxed comments
-sc    // place stars at the beginning of multi-line comments
-bl    // allman style braces
-bli0  // braces have 0 indent
-nce   // do not cuddle the else
-ncdw  // do not cuddle the while in do-whiles
-cli4  // indent cases in a switch by 4
-cbi0  // do not indent braces under a switch
-ss    // emphasize semicolons after control blocks
-npcs  // do not place a space between a function and its opening parenthesis
-cs    // put a space between a C-style cast and its operator
-nbs   // do not space out the sizeof statements
-saf   // put a space between for and its (...)
-sai   // put a space between if and its (...)
-saw   // put a space between while and its (...)
-bc    // put a newline for each variable that is declared in a single statement
-psl   // put a function's return type on its own line
-bls   // allman braces on structs
-blf   // allman braces for functions
-lp    // function parameters are lined up when function calls span multiple lines
-i4    // common indentation width is 4 spaces
-il0   // goto labels go to the left margin
-ci4   // for line continuations, use additional indent of 0
-ts4   // tabs are 4 spaces wide
-nsob  // do not remove optional empty lines
-l120  // maximum width of a line
-lc120 // right margin
-ppi4  // indent preprocessor directives with 4 spaces
-bfda  // put a newline before each paramter in a function's parameter list
-bfde  // put a newline before the closing parenthesis in a function's parameter list

// do not splat block comments from single to multi-line
// because sometimes i put them in the middle of lines of code
// f(param1, param2, /* TODO */ 0, param4);
-ncdb

