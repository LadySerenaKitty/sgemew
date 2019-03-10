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
