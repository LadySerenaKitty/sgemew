#ifndef MAIN_H
#define MAIN_H

#include <wx/app.h>
#include <wx/event.h>
#include "ui/MainEmu.h"
#include <wx/image.h>
#include "statics.h"

class MainApp : public wxApp
{
public:
    MainApp();
    //virtual ~MainApp();
	virtual bool OnInit();
	virtual void CleanUp();

	//static sgemew::ui::MainEmu *mainFrame;

};

#endif // MAIN_H
