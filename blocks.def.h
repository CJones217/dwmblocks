//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "packages", 60, 8},

	{"", "nettraf",	1, 16},

	{"", "cpu", 10, 14},

	{"", "memory", 10, 14},

	{"", "clock", 60, 1},

	{"", "internet", 5, 4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
