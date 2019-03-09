///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar  8 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINEMU_H__
#define __MAINEMU_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace sgemew
{
	namespace ui
	{
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class MainEmu
		///////////////////////////////////////////////////////////////////////////////
		class MainEmu : public wxFrame 
		{
			private:
			
			protected:
				wxMenuBar* MainMenu;
				wxMenu* mFile;
				wxMenuItem* mfOpen;
				wxMenuItem* mfSave;
				wxMenuItem* mfExit;
				wxMenu* mEmu;
				wxMenuItem* meFirmware;
				wxMenuItem* meHDD;
				wxMenuItem* meODD;
				wxMenuItem* m_separator2;
				wxMenuItem* mePowerOn;
				wxMenuItem* mePauseCPU;
				wxMenu* mWindow;
				wxMenuItem* mwDebug;
				wxMenuItem* mwMemory;
				wxMenuItem* mwSerial;
				wxScrolledWindow* scrollerView;
				
				// Virtual event handlers, overide them in your derived class
				void onFileOpen( wxCommandEvent& event );
				void onFileSave( wxCommandEvent& event );
				void onFileExit( wxCommandEvent& event );
				void onEmuFirmware( wxCommandEvent& event );
				void onEmuHDD( wxCommandEvent& event );
				void onEmuOptical( wxCommandEvent& event );
				void onEmuPowerOn( wxCommandEvent& event );
				void onEmuPause( wxCommandEvent& event );
				void onWindowDebug( wxCommandEvent& event );
				void onWindowMemory( wxCommandEvent& event );
				void onWindowSerial( wxCommandEvent& event );
				void pChar( wxKeyEvent& event );
				void pKeyDown( wxKeyEvent& event );
				void pKeyUp( wxKeyEvent& event );
				void pMousieEvent( wxMouseEvent& event );
				void rePaint( wxPaintEvent& event );
				
			
			public:
				wxPanel* drawpane;
				
				MainEmu( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGEmew"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 481,296 ), long style = wxCAPTION|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
				
				~MainEmu();
			
		};
		
	} // namespace ui
} // namespace sgemew

#endif //__MAINEMU_H__
