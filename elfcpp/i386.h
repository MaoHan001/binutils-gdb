// i386.h -- ELF definitions specific to EM_386  -*- C++ -*-

// Copyright 2006, 2007, Free Software Foundation, Inc.
// Written by Ian Lance Taylor <iant@google.com>.

// This file is part of elfcpp.
   
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public License
// as published by the Free Software Foundation; either version 2, or
// (at your option) any later version.

// In addition to the permissions in the GNU Library General Public
// License, the Free Software Foundation gives you unlimited
// permission to link the compiled version of this file into
// combinations with other programs, and to distribute those
// combinations without any restriction coming from the use of this
// file.  (The Library Public License restrictions do apply in other
// respects; for example, they cover modification of the file, and
/// distribution when not linked into a combined executable.)

// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.

// You should have received a copy of the GNU Library General Public
// License along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA
// 02110-1301, USA.

#ifndef ELFCPP_I386_H
#define ELFCPP_I386_H

namespace elfcpp
{

enum
{
  R_386_NONE = 0,
  R_386_32 = 1,
  R_386_PC32 = 2,
  R_386_GOT32 = 3,
  R_386_PLT32 = 4,
  R_386_COPY = 5,
  R_386_GLOB_DAT = 6,
  R_386_JUMP_SLOT = 7,
  R_386_RELATIVE = 8,
  R_386_GOTOFF = 9,
  R_386_GOTPC = 10,
  // Used by Sun.
  R_386_32PLT = 11,
  // TLS extensions.
  R_386_TLS_TPOFF = 14,
  R_386_TLS_IE = 15,
  R_386_TLS_GOTIE = 16,
  R_386_TLS_LE = 17,
  R_386_TLS_GD = 18,
  R_386_TLS_LDM = 19,
  // GNU extensions.
  R_386_16 = 20,
  R_386_PC16 = 21,
  R_386_8 = 22,
  R_386_PC8 = 23,
  // More TLS relocs.
  R_386_TLS_GD_32 = 24,
  R_386_TLS_GD_PUSH = 25,
  R_386_TLS_GD_CALL = 26,
  R_386_TLS_GD_POP = 27,
  R_386_TLS_LDM_32 = 28,
  R_386_TLS_LDM_PUSH = 29,
  R_386_TLS_LDM_CALL = 30,
  R_386_TLS_LDM_POP = 31,
  R_386_TLS_LDO_32 = 32,
  R_386_TLS_IE_32 = 33,
  R_386_TLS_LE_32 = 34,
  R_386_TLS_DTPMOD32 = 35,
  R_386_TLS_DTPOFF32 = 36,
  R_386_TLS_TPOFF32 = 37,
  R_386_TLS_GOTDESC = 39,
  R_386_TLS_DESC_CALL = 40,
  R_386_TLS_DESC = 41,
  // Used by Intel.
  R_386_USED_BY_INTEL_200 = 200,
  // GNU vtable garbage collection extensions.
  R_386_GNU_VTINHERIT = 250,
  R_386_GNU_VTENTRY = 251
};

} // End namespace elfcpp.

#endif // !defined(ELFCPP_I386_H)
