//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#define BXL_EXTEND 0x5A

const char* aCmdsBasicXl[] =
{
	"REM",			//00
	"DATA",			//01
	"INPUT",			//02
	"COLOR",			//03
	"LIST",			//04
	"ENTER",			//05
	"LET",			//06
	"IF",				//07
	"FOR",			//08
	"NEXT",			//09
	"GOTO",			//0a
	"GO TO",			//0b
	"GOSUB",			//0c
	"TRAP",			//0d
	"BYE",			//0e
	"CONT",			//0f
	"COM",			//10
	"CLOSE",			//11
	"CLR",			//12
	"DEG",			//13
	"DIM",			//14
	"END",			//15
	"NEW",			//16
	"OPEN",			//17
	"LOAD",			//18
	"SAVE",			//19
	"STATUS",		//1a
	"NOTE",			//1b
	"POINT",			//1c
	"XIO",			//1d
	"ON",				//1e
	"POKE",			//1f
	"PRINT",			//20
	"RAD",			//21
	"READ",			//22
	"RESTORE",		//23
	"RETURN",		//24
	"RUN",			//25
	"STOP",			//26
	"POP",			//27
	"?",				//28
	"GET",			//29
	"PUT",			//2a
	"GRAPHICS",		//2b
	"PLOT",			//2c
	"POSITION",		//2d
	"DOS",			//2e
	"DRAWTO",		//2f
	"SETCOLOR",		//30
	"LOCATE",		//31
	"SOUND",			//32
	"LPRINT",		//33
	"CSAVE",			//34
	"CLOAD",			//35
	"",				//36 silent let
	"ERROR -",		//37 last Atari Basic command

	"WHILE",			//38
	"ENDWHILE",		//39
	"TRACEOFF",		//3A
	"TRACE",			//3B
	"ELSE",			//3C
	"ENDIF",			//3D
	"DPOKE",			//3E
	"LOMEM",			//3F
	"DEL",			//40
	"RPUT",			//41
	"RGET",			//42
	"BPUT",			//43
	"BGET",			//44
	"TAB",			//45
	"CP",				//46
	"ERASE",			//47
	"PROTECT",		//48
	"UNPROTECT",	//49
	"DIR",			//4A
	"RENAME",		//4B
	"MOVE",			//4C
	"MISSILE",		//4D
	"PMCLR",			//4E
	"PMCOLOR",		//4F
	"PMGRAPHICS",	//50
	"PMMOVE",		//51
	"PMWIDTH",		//52
	"SET",			//53
	"LVAR",			//54
	"RENUM",			//55
	"FAST",			//56
	"NUM",			//57
	"END",			//58

	"?59?",		//59
	"BXL_EXTEND",	//5A

};

const char* aOpsBasicXl[] = {
	"NHCONST",		//0D
	"NCONST",		  //0E
	"SCONST",		  //0F
	"NOUSE",			  //10
	"NOUSE",			  //11
	",",				  //12
	"$",				  //13
	":",				  //14
	";",				  //15
	"EOL",			  //16
	" GOTO ",		  //17
	" GOSUB ",		  //18
	" TO ",			  //19
	" STEP ",		  //1A
	" THEN ",		  //1B
	"#",				  //1C
	"<=",				  //1D
	"<>",				  //1E
	">=",				  //1F
	"<",				  //20
	">",				  //21
	"=",				  //22
	"^",				  //23
	"*",				  //24
	"+",				  //25
	"-",				  //26
	"/",				  //27
	" NOT ",			  //28
	" OR ",			  //29
	" AND ",			  //2A
	"(",				  //2B
	")",				  //2C
	"=",				  //2D
	"=",				  //2E
	"<=",				  //2F
	"<>",				  //30
	">=",				  //31
	"<",				  //32
	">",				  //33
	"=",				  //34
	"+",				  //35
	"-",				  //36
	"(",				  //37
	"(",				  //38
	"(",				  //39
	"(",				  //3A
	"(",				  //3B
	",",				  //3C
	"STR$",			  //3D
	"CHR$",			  //3E
	"USR",			  //3F
	"ASC",			  //40
	"VAL",			  //41
	"LEN",			  //42
	"ADR",			  //43
	"ATN",			  //44
	"COS",			  //45
	"PEEK",			  //46
	"SIN",			  //47
	"RND",			  //48
	"FRE",			  //49
	"EXP",			  //4A
	"LOG",			  //4B
	"CLOG",			  //4C
	"SQR",			  //4D
	"SGN",			  //4E
	"ABS",			  //4F
	"INT",			  //50
	"PADDLE",		  //51
	"STICK",			  //52
	"PTRIG",			  //53
	"STRIG",			  //54	last Atari Basic
	" USING ",		//55
	"%",				//56
	"!",				//57
	"&",				//58
	";",				//59
	"BUMP(",			//5A
	"FIND(",			//5B
	"HEX$",			//5C
	"RANDOM(",		//5D
	"DPEEK",			//5E
	"SYS",			//5F
	"VSTICK",		//60
	"HSTICK",		//61
	"PMADR",			//62
	"ERR",			//63
	"TAB",			//64
	"PEN",			//65
	"LEFT$",			//66
	"RIGHT$",		//67
	"MID$",			//68
};

#define BASICXL_CMD_NUM ( sizeof( aCmdsBasicXl ) / sizeof( aCmdsBasicXl[ 0 ] ) )
#define BASICXL_OPS_NUM ( sizeof( aOpsBasicXl ) / sizeof( aOpsBasicXl[ 0 ] ) )

