/**
* @file  libmanager.h
* @brief Header implementing a class for a Library Manager.
*
* @section License
*
* Copyright (C) 2014 Robert B. Colton
* This file is a part of the LGL Reader Library.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef LIBMANAGER_H
#define LIBMANAGER_H

#include "gmstreamdecoder.h"
#include "libaction.h"
#include "library.h"

#include <string>
#include <vector>
#include <map>

namespace ALR {

class LibManager
{
public:
    vector<Library*> libs;
    LibAction* codeAction;
    LibManager();
    LibAction* getLibAction(int libraryId, int libActionId);
    bool passFilter(string fn);
    Library* loadFile(string filename);
    Library* loadFile(GmStreamDecoder* in, string filename);
    Library* loadLib(GmStreamDecoder* in);
    Library* loadLgl(GmStreamDecoder* in);
    LibAction* makeCodeAction();
};

}

#endif // LIBMANAGER_H
