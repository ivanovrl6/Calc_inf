#include "MyForm.h" 
using namespace calc;
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
	return 0;
}