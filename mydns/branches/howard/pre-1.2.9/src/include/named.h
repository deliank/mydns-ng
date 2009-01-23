/**************************************************************************************************
	$Id: named.h,v 1.65 2005/04/20 16:49:12 bboy Exp $

	Copyright (C) 2002-2005  Don Moore <bboy@bboy.net>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at Your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**************************************************************************************************/

#ifndef _MYDNS_NAMED_H
#define _MYDNS_NAMED_H

#include "mydns.h"

#if HAVE_SYS_RESOURCE_H
#	include <sys/resource.h>
#endif

#if HAVE_SYS_WAIT_H
#	include <sys/wait.h>
#endif

#if HAVE_NETDB_H
#	include <netdb.h>
#endif

#endif /* _MYDNS_NAMED_H */

/* vi:set ts=3: */