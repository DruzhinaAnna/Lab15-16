#include "MyFormSecond.h"
#include <Windows.h>
using namespace Second;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormSecond);
	return 0;
}