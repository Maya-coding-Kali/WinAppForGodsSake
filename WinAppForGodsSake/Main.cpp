#include <windows.h>
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	MessageBox(NULL, TEXT("Hello, Windows!!"), TEXT("HelloMsg"), 0);
	return 0;
}