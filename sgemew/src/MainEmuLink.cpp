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

#include <iostream>
#include "ui/MainEmu.h"
#include "main.h"
#include "statics.h"

void sgemew::ui::MainEmu::onFileOpen( wxCommandEvent& event )
{
	std::cout << "onFileOpen" << std::endl;
}

void sgemew::ui::MainEmu::onFileSave( wxCommandEvent& event )
{
	std::cout << "onFileSave" << std::endl;
}

void sgemew::ui::MainEmu::onFileExit( wxCommandEvent& event )
{
	std::cout << "onFileExit" << std::endl;
	mainFrame->Close();
}

void sgemew::ui::MainEmu::onEmuFirmware( wxCommandEvent& event )
{
	std::cout << "onEmuFirmware" << std::endl;
}

void sgemew::ui::MainEmu::onEmuHDD( wxCommandEvent& event )
{
	std::cout << "onEmuHDD" << std::endl;
}

void sgemew::ui::MainEmu::onEmuOptical( wxCommandEvent& event )
{
	std::cout << "onEmuOptical" << std::endl;
}

void sgemew::ui::MainEmu::onEmuPowerOn( wxCommandEvent& event )
{
	std::cout << "onEmuPowerOn" << std::endl;
}

void sgemew::ui::MainEmu::onEmuPause( wxCommandEvent& event )
{
	std::cout << "onEmuPause" << std::endl;
}

void sgemew::ui::MainEmu::onWindowDebug( wxCommandEvent& event )
{
	std::cout << "onWindowDebug" << std::endl;
}

void sgemew::ui::MainEmu::onWindowMemory( wxCommandEvent& event )
{
	std::cout << "onWindowMemory" << std::endl;
}

void sgemew::ui::MainEmu::onWindowSerial( wxCommandEvent& event )
{
	std::cout << "onWindowSerial" << std::endl;
}

void sgemew::ui::MainEmu::pChar( wxKeyEvent& event )
{
	std::cout << "pChar\t" << event.GetKeyCode() << std::endl;
}

void sgemew::ui::MainEmu::pKeyDown( wxKeyEvent& event )
{
	std::cout << "pKeyDown\t" << event.GetKeyCode() << std::endl;
}

void sgemew::ui::MainEmu::pKeyUp( wxKeyEvent& event )
{
	std::cout << "pKeyUp\t" << event.GetKeyCode() << std::endl;
}

void sgemew::ui::MainEmu::pMousieEvent( wxMouseEvent& event )
{
	//std::cout << event.GetPosition() << std::endl;
}

void sgemew::ui::MainEmu::rePaint( wxPaintEvent& event )
{
	std::cout << "rePaint" << std::endl;
}
