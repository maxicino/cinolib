/****************************************************************************
* Italian National Research Council                                         *
* Institute for Applied Mathematics and Information Technologies, Genoa     *
* IMATI-GE / CNR                                                            *
*                                                                           *
* Author: Marco Livesu (marco.livesu@gmail.com)                             *
*                                                                           *
* Copyright(C) 2016                                                         *
* All rights reserved.                                                      *
*                                                                           *
* This file is part of CinoLib                                              *
*                                                                           *
* CinoLib is free software; you can redistribute it and/or modify           *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 3 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
****************************************************************************/
#ifndef CINO_READ_OFF_H
#define CINO_READ_OFF_H

#include <cinolib/cinolib.h>

#include <sys/types.h>
#include <vector>

namespace cinolib
{

CINO_INLINE
void read_OFF(const char          * filename,
              std::vector<double> & xyz,
              std::vector<u_int>  & tri,
              std::vector<u_int>  & quad);

}

#ifndef  CINO_STATIC_LIB
#include "read_OFF.cpp"
#endif

#endif // CINO_READ_OFF
