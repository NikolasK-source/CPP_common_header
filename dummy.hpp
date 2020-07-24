/*
 * \file dummy.hpp
 * \brief Dummy data type. Do not include in other header files!
 *
 * required compiler options:
 *
 * recommended compiler options:
 *          -O2
 *
 * Copyright (c) 2020 Nikolas Koesling
 */

#pragma once

//! Dummy data type
union dummy_t
{
    // regular types
    unsigned char       uchar;
    signed char         scchar;
    unsigned short      ushort;
    signed short        sshort;
    unsigned int        uint;
    signed int          sint;
    unsigned long       ulong;
    signed long         slong;
    unsigned long long  ullong;
    signed long long    sllong;
    float               f;
    double              d;
    long double         ld;
    wchar_t             wchar;
    bool                b;

    // pointer types
    unsigned char*      puchar;
    signed char*        pscchar;
    unsigned short*     pushort;
    signed short*       psshort;
    unsigned int*       puint;
    signed int*         psint;
    unsigned long*      pulong;
    signed long*        pslong;
    unsigned long long* pullong;
    signed long long*   psllong;
    float*              pf;
    double*             pd;
    long double*        pld;
    wchar_t*            pwchar;
    bool*               pb;
    void*               pv;
};
