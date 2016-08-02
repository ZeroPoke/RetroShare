/****************************************************************
 * This file is distributed under the following license:
 *
 * Copyright (c) 2015, RetroShare Team
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, 
 *  Boston, MA  02110-1301, USA.
 ****************************************************************/

#ifndef _RSNETUTIL_H
#define _RSNETUTIL_H

#include <QString>
#include <inttypes.h>
#include <sys/socket.h>

class RsNetUtil
{
public:
	static bool parseAddrFromQString(const QString& s, struct sockaddr_storage& addr, int& bytes);
	static QString printAddr(const struct sockaddr_storage& addr);
	static QString printAddrRange(const struct sockaddr_storage& addr, uint8_t masked_bytes);
};

#endif
