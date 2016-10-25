/***************************************************************
 * Name:      wxAvrDudeApp.h
 * Purpose:   Defines Application Class
 * Author:    C6H6 (nasaman95@naver.com)
 * Created:   2016-10-25
 * Copyright: C6H6 (http://blog.naver.com/nasaman95)
 * License:
 **************************************************************/

#ifndef WXAVRDUDEAPP_H
#define WXAVRDUDEAPP_H

#include <wx/app.h>
#include "wx_pch.h"

class wxAvrDudeApp : public wxApp
{
    public:
        virtual bool OnInit();
    protected:
        wxLocale myLocale;
};

#endif // WXAVRDUDEAPP_H
