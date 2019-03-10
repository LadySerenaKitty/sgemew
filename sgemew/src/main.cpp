/** @internal
 *  Copyright 2019 StarPhoenix Media
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 * @endinternal
**/

#include <wx/app.h>
#include <wx/event.h>
#include "ui/MainEmu.h"
#include <wx/image.h>
#include "main.h"
#include "statics.h"

#include "hardware/SystemMemory.h"

// Define the MainApp
MainApp::MainApp() {}

bool MainApp::OnInit()
{
// Add the common image handlers
	wxImage::AddHandler( new wxPNGHandler );
	wxImage::AddHandler( new wxJPEGHandler );

	mainFrame = new sgemew::ui::MainEmu(NULL);
	SetTopWindow(mainFrame);
	bool r = GetTopWindow()->Show();

	sgemew::hardware::SystemMemory *sm = new sgemew::hardware::SystemMemory();
	sm->createA(0x08000000, 0x0fffffff); // main memory (128MB)
	sm->addA(0x00000000, 0x0007ffff, sm->getByAddress(0x09000000)); // first 512k
	sm->addA(0x20000000, 0x27ffffff, sm->getByAddress(0x09000000)); // copy of main memory

	std::cout << "Access: " << std::to_string((*sm)[0x09000000]) << std::endl;
	return r;
}

void MainApp::CleanUp()
{
	delete[] mainFrame;
}

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)
