#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	zadanie3::MyForm form;
	Application::Run(% form);
};