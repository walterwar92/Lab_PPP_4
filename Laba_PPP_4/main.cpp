#include "ConnectWindow.h"
#include "MainWindow.h"


using namespace System;
using namespace DBC;

[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // �������� � ������ �����
    DBC::ConnectWindow^ connectWindow = gcnew DBC::ConnectWindow();
    Application::Run(connectWindow);
    return 0;
}