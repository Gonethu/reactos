/*
*  TEST.CPP
*
*
*  History:
*
*    25 Aug (Gonethu)
*        started.
*/

#include "precomp.h"

#ifdef INCLUDE_CMD_TEST

INT cmd_test(LPTSTR param) {
	MessageBoxA(0, "Running from CMD", "CMD.EXE", 0);
	return 0;
}

#endif
