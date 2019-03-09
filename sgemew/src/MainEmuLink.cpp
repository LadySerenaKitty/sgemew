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
