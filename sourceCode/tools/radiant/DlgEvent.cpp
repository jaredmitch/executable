/*****************************************************************************
                    The Dark Mod GPL Source Code
 
 This file is part of the The Dark Mod Source Code, originally based 
 on the Doom 3 GPL Source Code as published in 2011.
 
 The Dark Mod Source Code is free software: you can redistribute it 
 and/or modify it under the terms of the GNU General Public License as 
 published by the Free Software Foundation, either version 3 of the License, 
 or (at your option) any later version. For details, see LICENSE.TXT.
 
 Project: The Dark Mod (http://www.thedarkmod.com/)
 
 $Revision: 5171 $ (Revision of last commit) 
 $Date: 2012-01-07 10:08:06 +0200 (Sat, 07 Jan 2012) $ (Date of last commit)
 $Author: greebo $ (Author of last commit)
 
******************************************************************************/

#include "precompiled_engine.h"
#pragma hdrstop

static bool versioned = RegisterVersionedFile("$Id: DlgEvent.cpp 5171 2012-01-07 08:08:06Z greebo $");

#include "qe3.h"
#include "DlgEvent.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgEvent dialog


CDlgEvent::CDlgEvent(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgEvent::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgEvent)
	m_strParm = _T("");
	m_event = 0;
	//}}AFX_DATA_INIT
}


void CDlgEvent::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgEvent)
	DDX_Text(pDX, IDC_EDIT_PARAM, m_strParm);
	DDX_Radio(pDX, IDC_RADIO_EVENT, m_event);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgEvent, CDialog)
	//{{AFX_MSG_MAP(CDlgEvent)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgEvent message handlers