/* $Id: outfmt.c,v 1.3 2001/08/19 07:46:52 peter Exp $
 * Debugging output format (used to debug output format module interface)
 *
 *  Copyright (C) 2001  Peter Johnson
 *
 *  This file is part of YASM.
 *
 *  YASM is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  YASM is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "util.h"

#include "outfmt.h"

RCSID("$Id: outfmt.c,v 1.3 2001/08/19 07:46:52 peter Exp $");

/* Define outfmt structure -- see outfmt.h for details */
outfmt dbg_outfmt = {
    "Trace of all info passed to output format module",
    "dbg"
};