#include "FRS1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FlightReservationSystem::FRS1 frm;
	Application::Run(% frm);
}

