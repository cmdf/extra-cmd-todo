#ifndef _OREZ_CON_OUT_HELP_H_
#define _OREZ_CON_OUT_HELP_H_


// Includes
#include "../Main.h"


// Help Strings
const TCHAR* H_OUT_FILL = TEXT(
	"def: ocon out fill attr <attr> <len> <coord>\n\n"
	"Fill buffer with attribute <attr> by <len> units at coordinate <coord>. "
	"All parameters <attr>, <len> and <coord> are optional. By default, <attr> is "
	"foreground white and background black (7), <len> is 80, and <coord> is the "
	"current cursor coordinate.\n\n"
	":: highlight current line with bright red\n"
	"> ocon out fill attr 0x0C 80 0;?\n"
	":: reverse color of row 10\n"
	"> ocon out fill attr 0x70 80 0;10\n"
);

const TCHAR* H_OUT_FILL_ATTR = TEXT(
	"def: ocon out fill attr <attr> <len> <coord>\n\n"
	"Fill buffer with attribute <attr> by <len> units at coordinate <coord>. "
	"All parameters <attr>, <len> and <coord> are optional. By default, <attr> is "
	"foreground white and background black (7), <len> is 80, and <coord> is the "
	"current cursor coordinate.\n\n"
	":: highlight current line with bright red\n"
	"> ocon out fill attr 0x0C 80 0;?\n"
	":: reverse color of row 10\n"
	"> ocon out fill attr 0x70 80 0;10\n"
);
const TCHAR* H_OUT_FILL_ATTR_V = TEXT(
	"Buffer filled with attribute <attr> by <len> characters at coordinate <coord>.\n"
);

const TCHAR* H_OUT_FILL_CHAR = TEXT(
	"def: ocon out fill char <char> <len> <coord>\n\n"
	"Fill buffer with character <char> by <len> units at coordinate <coord>. "
	"All parameters <char>, <len>, and <coord> are optional. By default, <char> is "
	"null character (0), <len> is one line (80), and <coord> is the current cursor coordinate.\n\n"
	":: erase current line\n"
	"> ocon out fill char 0 80 0;?\n"
	":: fill row 10 with zero\n"
	"> ocon out fill char \'0\' 80 0;10\n"
);

const TCHAR* H_OUT_MOVE = TEXT(
	"def: ocon out fill attr <attr> <len> <coord>\n\n"
	"Fill buffer with attribute <attr> by <len> units at coordinate <coord>. "
	"All parameters <attr>, <len> and <coord> are optional. By default, <attr> is "
	"foreground white and background black (7), <len> is 80, and <coord> is the "
	"current cursor coordinate.\n\n"
	":: highlight current line with bright red\n"
	"> ocon out fill attr 0x0C 80 0;?\n"
	":: reverse color of row 10\n"
	"> ocon out fill attr 0x70 80 0;10\n"
);

const TCHAR* H_OUT_READ = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);

const TCHAR* H_OUT_READ_ATTR = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);

const TCHAR* H_OUT_READ_CHAR = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);

const TCHAR* H_OUT_WRITE = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);

const TCHAR* H_OUT_WRITE_ATTR = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);

const TCHAR* H_OUT_WRITE_CHAR = TEXT(
	"def: ocon out read <coord> <rect>\n\n"
	"Read buffer units, with characters and attributes, at coordinate <coord>, "
	"and within region <rect>. All parameters <coord>, and <rect> are optional. "
	"By default, <coord> is current cursor coordinate, and <rect> is one line (80;0).\n\n"
	":: read unit data from current line\n"
	"> ocon out read 0;? 80;0\n"
	":: read unit data from row 10\n"
	"> ocon out read 0;10 80;0\n"
);


#endif
