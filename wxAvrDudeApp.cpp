/***************************************************************
 * Name:      wxAvrDudeApp.cpp
 * Purpose:   Code for Application Class
 * Author:    C6H6 (nasaman95@naver.com)
 * Created:   2016-10-25
 * Copyright: C6H6 (http://blog.naver.com/nasaman95)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "wxAvrDudeApp.h"

//(*AppHeaders
#include "wxAvrDudeMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxAvrDudeApp);

bool wxAvrDudeApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxAvrDudeFrame* Frame = new wxAvrDudeFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    myLocale.Init(wxLANGUAGE_DEFAULT);
    wxString Test = "Hello World";
    wxLocale::AddCatalogLookupPathPrefix(".");
    if(myLocale.AddCatalog("messages")==false)
    {
        printf("Unable to load catalog\n");
        exit(2);
    }
    return wxsOK;

}
