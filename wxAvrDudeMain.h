/***************************************************************
 * Name:      wxAvrDudeMain.h
 * Purpose:   Defines Application Frame
 * Author:    C6H6 (nasaman95@naver.com)
 * Created:   2016-10-25
 * Copyright: C6H6 (http://blog.naver.com/nasaman95)
 * License:
 **************************************************************/

#ifndef WXAVRDUDEMAIN_H
#define WXAVRDUDEMAIN_H

//(*Headers(wxAvrDudeFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class wxAvrDudeFrame: public wxFrame
{
    public:

        wxAvrDudeFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxAvrDudeFrame();

    private:

        //(*Handlers(wxAvrDudeFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        //*)

        //(*Identifiers(wxAvrDudeFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxAvrDudeFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXAVRDUDEMAIN_H
