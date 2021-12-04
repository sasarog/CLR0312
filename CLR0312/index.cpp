#include "index.h"
#include <WinUser.h>
#include <Windows.h>
#include <cstdlib>
using namespace CLR0312;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLR0312::index form;
	Application::Run(% form);

}