#include <stdio.h>
#include "khich1.h"

#define MAXLINE 1000

/* OVERVIEW: REPLACES STRINGS OF BLANKS BY THE MINIMUM NUMBER OF TABS AND BLANKS
EXAMPLE: TAB STOP = 5: STRING = "' '' '' '' '' '' '' '' '' '" (9 BLANK SPACES) WOULD BECOME "\T ' '' '' '' '"
USE THE SAME TAB STOP AS DETAB (AS DEFINED IN THE HEADER FILE KHICH1.H)

WHILE: THERE ARE MORE LINES:
	PRINT OUT LINE WITH MINIMUM NUMBER OF BLANKS AND TABS TO REPLACE LONG STRINGS OF BLANKS
PRINT OUT LAST LINE WITH MINIMUM NUMBER OF BLANKS AND TABS TO REPLACE LONG STRINGS OF BLANKS

MAIN CALLS ENTAB WHICH UPDATES ITS ARGUMENT LINE WITH THE REVISED LINE AND OUTPUTS THE LINE LENGTH (WHICH IS LESS THAN MAXLINE)
ENTAB TRACKS THE LENGTH OF STRINGS OF BLANKS WITH A LOCAL PARAMETER I.
IT COMPUTES THE LOCATION OF TAB STOPS, AS IN DETAB. IT NEEDS TO IDENTIFY HOW HOW MANY TAB STOPS THE STRING COVERS. THIS IS COUNTED BY J. IT ALSO NEEDS
TO IDENTIFY HOW MANY BLANK SPACES IT 'HANGS OVER' THE NEXT TAB STOP. 
	X := NUMBER OF SPACES UNTIL THE NEXT TAB STOP
	N := NUMBER OF SPACES IN THE STRING
	STOP := SIZE OF TAB STOP
	if N >= X
	TAB CHARACTERS = FLOOR(N-X)/STOP + 1
	BLANK SPACES = 


*/


int entab(char line[], int maxlength, int stoplength);
main()
{
	char line[MAXLINE];
	int stoplength;
	int maxlength;
	int c, i;

	maxlength = MAXLINE;
	stoplength = STOP 
	while ((c = entab(line, maxlength, stoplength)) != '\0') {
		for (i = 0; i < c; ++i) {
			putchar(line[i]);
		}
		c = entab(line, maxlength, stoplength);
	}
	for (i = 0; i < c; ++i) {
		putchar(line[i])
	}

}

int entab(char s[], int lim, int stop)
{

}
	