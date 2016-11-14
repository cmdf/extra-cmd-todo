#include "Main.h"
#include "In\Help.h"
#include "Out\Help.h"


int main() {
	BOOL ret;
	DWORD dw = 0;
	COORD c = {0, 0};
	TCHAR buff[256];
	// AttachConsole(ATTACH_PARENT_PROCESS);
	// HANDLE sb = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	HANDLE in = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	// HANDLE err = GetStdHandle(STD_ERROR_HANDLE);
	ret = FillConsoleOutputAttribute(out, FOREGROUND_BLUE | BACKGROUND_GREEN, 200, c, &dw);
	ret = FillConsoleOutputCharacter(out, TEXT('O'), 200, c, &dw);
	ret = FlushConsoleInputBuffer(in);
	UINT cp = GetConsoleCP();
	wsprintf(buff, TEXT("CodePage: %d\n"), cp);
	WriteConsole(out, buff, lstrlen(buff), &dw, NULL);
	WriteConsole(out, ret? TEXT("TRUE \n") : TEXT("FALSE\n"), 7, &dw, NULL);
	CONSOLE_CURSOR_INFO curInf;
	ret = GetConsoleCursorInfo(out, &curInf);
	wsprintf(buff, TEXT("Visible: %d, Size: %d\n"), curInf.bVisible, curInf.dwSize);
	WriteConsole(out, buff, lstrlen(buff), &dw, NULL);
	ret = GetConsoleDisplayMode(&dw);
	wsprintf(buff, TEXT("Display Mode: %d\n"), dw);
	WriteConsole(out, buff, lstrlen(buff), &dw, NULL);
	ret = GetConsoleMode(in, &dw);
	wsprintf(buff, TEXT("Mode: %X\n"), dw);
	WriteConsole(out, buff, lstrlen(buff), &dw, NULL);

	// CloseHandle(err);
	CloseHandle(out);
	CloseHandle(in);
	// CloseHandle(sb);
	// FreeConsole();
	return 0;
}
