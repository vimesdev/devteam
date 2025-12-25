#ifndef DPIUTIL_H
#define DPIUTIL_H

// Copyright (C) Microsoft Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once


#include <ShellScalingApi.h>

#ifndef DLLEXPORT
    #define DLLEXPORT	1
#endif

#ifdef DLLEXPORT
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif



class DLLEXPORT DpiUtil
{
public:
    static void SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT dpiAwarenessContext);
    static int GetDpiForWindow(HWND window);
    static void RestoreProcessDpiAwarenessContext();
private:
    static DPI_AWARENESS_CONTEXT currentDpiAwarenessContext;
    static HMODULE GetUser32Module();
    static HMODULE GetShcoreModule();
    static PROCESS_DPI_AWARENESS ProcessDpiAwarenessFromDpiAwarenessContext(
        DPI_AWARENESS_CONTEXT dpiAwarenessContext);
};


#endif