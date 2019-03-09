///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar  8 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainEmu.h"

///////////////////////////////////////////////////////////////////////////
using namespace sgemew::ui;

MainEmu::MainEmu( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	MainMenu = new wxMenuBar( 0 );
	mFile = new wxMenu();
	mfOpen = new wxMenuItem( mFile, wxID_ANY, wxString( wxT("Open") ) , wxEmptyString, wxITEM_NORMAL );
	mFile->Append( mfOpen );
	
	mfSave = new wxMenuItem( mFile, wxID_ANY, wxString( wxT("Save") ) , wxEmptyString, wxITEM_NORMAL );
	mFile->Append( mfSave );
	
	mFile->AppendSeparator();
	
	mfExit = new wxMenuItem( mFile, wxID_ANY, wxString( wxT("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	mFile->Append( mfExit );
	
	MainMenu->Append( mFile, wxT("File") ); 
	
	mEmu = new wxMenu();
	meFirmware = new wxMenuItem( mEmu, wxID_ANY, wxString( wxT("Select Firmware") ) , wxEmptyString, wxITEM_NORMAL );
	mEmu->Append( meFirmware );
	
	meHDD = new wxMenuItem( mEmu, wxID_ANY, wxString( wxT("Select Hard Drive") ) , wxEmptyString, wxITEM_NORMAL );
	mEmu->Append( meHDD );
	
	meODD = new wxMenuItem( mEmu, wxID_ANY, wxString( wxT("Select Optical Disk") ) , wxEmptyString, wxITEM_NORMAL );
	mEmu->Append( meODD );
	
	m_separator2 = mEmu->AppendSeparator();
	
	mePowerOn = new wxMenuItem( mEmu, wxID_ANY, wxString( wxT("Power On") ) , wxEmptyString, wxITEM_NORMAL );
	mEmu->Append( mePowerOn );
	
	mePauseCPU = new wxMenuItem( mEmu, wxID_ANY, wxString( wxT("Pause CPU") ) , wxEmptyString, wxITEM_NORMAL );
	mEmu->Append( mePauseCPU );
	mePauseCPU->Enable( false );
	
	MainMenu->Append( mEmu, wxT("Emulator") ); 
	
	mWindow = new wxMenu();
	mwDebug = new wxMenuItem( mWindow, wxID_ANY, wxString( wxT("Debug Emulator") ) , wxEmptyString, wxITEM_NORMAL );
	mWindow->Append( mwDebug );
	
	mwMemory = new wxMenuItem( mWindow, wxID_ANY, wxString( wxT("View Memory") ) , wxEmptyString, wxITEM_NORMAL );
	mWindow->Append( mwMemory );
	
	mwSerial = new wxMenuItem( mWindow, wxID_ANY, wxString( wxT("Serial Console") ) , wxEmptyString, wxITEM_NORMAL );
	mWindow->Append( mwSerial );
	
	MainMenu->Append( mWindow, wxT("Window") ); 
	
	this->SetMenuBar( MainMenu );
	
	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );
	
	scrollerView = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	scrollerView->SetScrollRate( 5, 5 );
	scrollerView->SetForegroundColour( wxColour( 229, 229, 229 ) );
	scrollerView->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	drawpane = new wxPanel( scrollerView, wxID_ANY, wxDefaultPosition, wxSize( 1280,1024 ), wxTAB_TRAVERSAL );
	bSizer2->Add( drawpane, 1, wxEXPAND | wxALL, 5 );
	
	
	scrollerView->SetSizer( bSizer2 );
	scrollerView->Layout();
	bSizer2->Fit( scrollerView );
	bSizer->Add( scrollerView, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( mfOpen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileOpen ) );
	this->Connect( mfSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileSave ) );
	this->Connect( mfExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileExit ) );
	this->Connect( meFirmware->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuFirmware ) );
	this->Connect( meHDD->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuHDD ) );
	this->Connect( meODD->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuOptical ) );
	this->Connect( mePowerOn->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuPowerOn ) );
	this->Connect( mePauseCPU->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuPause ) );
	this->Connect( mwDebug->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowDebug ) );
	this->Connect( mwMemory->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowMemory ) );
	this->Connect( mwSerial->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowSerial ) );
	drawpane->Connect( wxEVT_CHAR, wxKeyEventHandler( MainEmu::pChar ), NULL, this );
	drawpane->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainEmu::pKeyDown ), NULL, this );
	drawpane->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MainEmu::pKeyUp ), NULL, this );
	drawpane->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_MOTION, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Connect( wxEVT_PAINT, wxPaintEventHandler( MainEmu::rePaint ), NULL, this );
}

MainEmu::~MainEmu()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileOpen ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileSave ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onFileExit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuFirmware ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuHDD ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuOptical ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuPowerOn ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onEmuPause ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowDebug ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowMemory ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainEmu::onWindowSerial ) );
	drawpane->Disconnect( wxEVT_CHAR, wxKeyEventHandler( MainEmu::pChar ), NULL, this );
	drawpane->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainEmu::pKeyDown ), NULL, this );
	drawpane->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MainEmu::pKeyUp ), NULL, this );
	drawpane->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( MainEmu::pMousieEvent ), NULL, this );
	drawpane->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MainEmu::rePaint ), NULL, this );
	
}
