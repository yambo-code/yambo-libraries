/*
         Copyright (C) 2000-2020 the YAMBO team
               http://www.yambo-code.org
 
  Authors (see AUTHORS file for details): DS
  
  This file is distributed under the terms of the GNU 
  General Public License. You can redistribute it and/or 
  modify it under the terms of the GNU General Public 
  License as published by the Free Software Foundation; 
  either version 2, or (at your option) any later version.
 
  This program is distributed in the hope that it will 
  be useful, but WITHOUT ANY WARRANTY; without even the 
  implied warranty of MERCHANTABILITY or FITNESS FOR A 
  PARTICULAR PURPOSE.  See the GNU General Public License 
  for more details.
 
  You should have received a copy of the GNU General Public 
  License along with this program; if not, write to the Free 
  Software Foundation, Inc., 59 Temple Place - Suite 330,Boston, 
  MA 02111-1307, USA or visit http://www.gnu.org/copyleft/gpl.txt.
*/
/*
 C wrapper
*/ 
#if defined _C_US
 #define C_FUNC(name,NAME) name ## _
#else
 #define C_FUNC(name,NAME) name
#endif
/*
 F90 wrapper
*/
#if defined _FORTRAN_US
 #define F90_FUNC(name) name ## _
#else
 #define F90_FUNC(name) name
#endif
