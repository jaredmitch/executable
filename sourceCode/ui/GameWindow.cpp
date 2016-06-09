/*****************************************************************************
                    The Dark Mod GPL Source Code
 
 This file is part of the The Dark Mod Source Code, originally based 
 on the Doom 3 GPL Source Code as published in 2011.
 
 The Dark Mod Source Code is free software: you can redistribute it 
 and/or modify it under the terms of the GNU General Public License as 
 published by the Free Software Foundation, either version 3 of the License, 
 or (at your option) any later version. For details, see LICENSE.TXT.
 
 Project: The Dark Mod (http://www.thedarkmod.com/)
 
 $Revision: 5122 $ (Revision of last commit) 
 $Date: 2011-12-11 21:47:31 +0200 (Sun, 11 Dec 2011) $ (Date of last commit)
 $Author: greebo $ (Author of last commit)
 
******************************************************************************/

#include "../idlib/precompiled.h"
#pragma hdrstop

#include "DeviceContext.h"
#include "Window.h"
#include "UserInterfaceLocal.h"
#include "GameWindow.h"

/*
================
idGameWindowProxy::idGameWindowProxy
================
*/
idGameWindowProxy::idGameWindowProxy( idDeviceContext *d, idUserInterfaceLocal *g ) : idWindow( d, g ) { }

/*
================
idGameWindowProxy::Draw
================
*/
void idGameWindowProxy::Draw( int time, float x, float y ) {
	common->Printf( "TODO: idGameWindowProxy::Draw\n" );
}
