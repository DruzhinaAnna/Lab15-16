#include "MyFormThird.h"
#include <Windows.h>
using namespace Third;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormThird);
	return 0;

}
