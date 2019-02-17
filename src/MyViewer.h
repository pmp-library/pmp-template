//=============================================================================
// Copyright (C) 2013-2019 The pmp-library developers
//
// This file is part of the Polygon Mesh Processing Library.
// Distributed under the terms of the MIT license, see LICENSE.txt for details.
//
// SPDX-License-Identifier: MIT
//=============================================================================
#pragma once
//=============================================================================

#include <pmp/visualization/MeshViewer.h>

//=============================================================================

class MyViewer : public pmp::MeshViewer
{
public:
    //! constructor
    MyViewer(const char* title, int width, int height)
        : MeshViewer(title,width, height)
    {
        set_draw_mode("Smooth Shading");
    }

protected:
    //! this function handles keyboard events
    void keyboard(int key, int code, int action, int mod) override;
};

//=============================================================================
