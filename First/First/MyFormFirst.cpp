#include "MyFormFirst.h"
#include <Windows.h>
using namespace First;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormFirst);
	return 0;

}
