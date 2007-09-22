// target-select.cc -- select a target for an object file

// Copyright 2006, 2007 Free Software Foundation, Inc.
// Written by Ian Lance Taylor <iant@google.com>.

// This file is part of gold.

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
// MA 02110-1301, USA.

#include "gold.h"

#include "elfcpp.h"
#include "target-select.h"

namespace
{

// The start of the list of target selectors.

gold::Target_selector* target_selectors;

} // End anonymous namespace.

namespace gold
{

// Construct a Target_selector, which means adding it to the linked
// list.  This runs at global constructor time, so we want it to be
// fast.

Target_selector::Target_selector(int machine, int size, bool big_endian)
  : machine_(machine), size_(size), big_endian_(big_endian)
{
  this->next_ = target_selectors;
  target_selectors = this;
}

// Find the target for an ELF file.

extern Target*
select_target(int machine, int size, bool big_endian, int osabi,
	      int abiversion)
{
  for (Target_selector* p = target_selectors; p != NULL; p = p->next())
    {
      int pmach = p->machine();
      if ((pmach == machine || pmach == elfcpp::EM_NONE)
	  && p->size() == size
	  && p->big_endian() ? big_endian : !big_endian)
	{
	  Target* ret = p->recognize(machine, osabi, abiversion);
	  if (ret != NULL)
	    return ret;
	}
    }
  return NULL;
}

} // End namespace gold.
