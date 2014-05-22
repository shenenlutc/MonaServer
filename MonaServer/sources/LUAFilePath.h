/*
Copyright 2014 Mona
mathieu.poux[a]gmail.com
jammetthomas[a]gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License received along this program for more
details (or else see http://www.gnu.org/licenses/).

This file is a part of Mona.
*/

#pragma once

#include "Script.h"
#include "Mona/Time.h"
#include "Mona/FilePath.h"
#include "Mona/Files.h"

class LUAFilePath {
public:
	
	LUAFilePath(const std::string& path) : _path(path) {}

	static void Init(lua_State *pState, LUAFilePath& filepath) {}
	static int	Destroy(lua_State* pState);
	static int	Get(lua_State *pState);
	static int	Set(lua_State *pState);

private:
	Mona::FilePath	_path;
	
};

class LUAFiles {
public:

	LUAFiles() {}

	static void Init(lua_State *pState, LUAFiles& filepath);
	static int	Destroy(lua_State* pState);
	static int	Get(lua_State *pState);
	static int	Set(lua_State *pState);
};

