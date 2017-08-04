/*********************************************************************************
*  Copyright(C) 2016: Marco Livesu                                               *
*  All rights reserved.                                                          *
*                                                                                *
*  This file is part of CinoLib                                                  *
*                                                                                *
*  CinoLib is dual-licensed:                                                     *
*                                                                                *
*   - For non-commercial use you can redistribute it and/or modify it under the  *
*     terms of the GNU General Public License as published by the Free Software  *
*     Foundation; either version 3 of the License, or (at your option) any later *
*     version.                                                                   *
*                                                                                *
*   - If you wish to use it as part of a commercial software, a proper agreement *
*     with the Author(s) must be reached, based on a proper licensing contract.  *
*                                                                                *
*  This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE       *
*  WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.     *
*                                                                                *
*  Author(s):                                                                    *
*                                                                                *
*     Marco Livesu (marco.livesu@gmail.com)                                      *
*     http://pers.ge.imati.cnr.it/livesu/                                        *
*                                                                                *
*     Italian National Research Council (CNR)                                    *
*     Institute for Applied Mathematics and Information Technologies (IMATI)     *
*     Via de Marini, 6                                                           *
*     16149 Genoa,                                                               *
*     Italy                                                                      *
**********************************************************************************/
#ifndef CINO_TEXTURES_H
#define CINO_TEXTURES_H

#ifdef CINOLIB_USES_OPENGL

#ifdef __APPLE__
#include <gl.h>
#include <glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif

#include <cinolib/cinolib.h>
#include <cinolib/color.h>
#include <cinolib/textures/isolines_texture.h>
#include <cinolib/textures/quality_ramp_texture.h>
#include <cinolib/textures/quality_ramp_texture_plus_isolines.h>

namespace cinolib
{

typedef enum
{
    TEXTURE_1D_ISOLINES,
    TEXTURE_1D_HSV_RAMP,
    TEXTURE_1D_HSV_RAMP_W_ISOLINES,
    TEXTURE_2D_CHECKERBOARD,
    TEXTURE_2D_ISOLINES
}
TextureType;

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void load_texture(GLuint & texture_id, const TextureType & type);

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void make_texture_HSV_ramp();

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void make_texture_HSV_ramp_with_isolines(const Color & iso = Color::WHITE());

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void make_texture_isolines1D(const Color & c0 = Color::BLACK(),
                             const Color & c1 = Color::WHITE());

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void make_texture_checkerboard(const Color & c0 = Color::BLACK(),
                               const Color & c1 = Color::WHITE());

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

CINO_INLINE
void make_texture_isolines2D(const Color & u_isolines = Color::BLUE(),
                             const Color & v_isolines = Color::RED(),
                             const Color & background = Color::WHITE());
}

#ifndef  CINO_STATIC_LIB
#include "textures.cpp"
#endif

#endif // CINOLIB_USES_OPENGL
#endif // CINO_TEXTURES_H
