/******************************************************************************
 *
 * Module Name: aetables.h - Precompiled AML ACPI tables for acpiexec
 *
 *****************************************************************************/

/******************************************************************************
 *
 * 1. Copyright Notice
 *
 * Some or all of this work - Copyright (c) 1999 - 2025, Intel Corp.
 * All rights reserved.
 *
 * 2. License
 *
 * 2.1. This is your license from Intel Corp. under its intellectual property
 * rights. You may have additional license terms from the party that provided
 * you this software, covering your right to use that party's intellectual
 * property rights.
 *
 * 2.2. Intel grants, free of charge, to any person ("Licensee") obtaining a
 * copy of the source code appearing in this file ("Covered Code") an
 * irrevocable, perpetual, worldwide license under Intel's copyrights in the
 * base code distributed originally by Intel ("Original Intel Code") to copy,
 * make derivatives, distribute, use and display any portion of the Covered
 * Code in any form, with the right to sublicense such rights; and
 *
 * 2.3. Intel grants Licensee a non-exclusive and non-transferable patent
 * license (with the right to sublicense), under only those claims of Intel
 * patents that are infringed by the Original Intel Code, to make, use, sell,
 * offer to sell, and import the Covered Code and derivative works thereof
 * solely to the minimum extent necessary to exercise the above copyright
 * license, and in no event shall the patent license extend to any additions
 * to or modifications of the Original Intel Code. No other license or right
 * is granted directly or by implication, estoppel or otherwise;
 *
 * The above copyright and patent license is granted only if the following
 * conditions are met:
 *
 * 3. Conditions
 *
 * 3.1. Redistribution of Source with Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification with rights to further distribute source must include
 * the above Copyright Notice, the above License, this list of Conditions,
 * and the following Disclaimer and Export Compliance provision. In addition,
 * Licensee must cause all Covered Code to which Licensee contributes to
 * contain a file documenting the changes Licensee made to create that Covered
 * Code and the date of any change. Licensee must include in that file the
 * documentation of any changes made by any predecessor Licensee. Licensee
 * must include a prominent statement that the modification is derived,
 * directly or indirectly, from Original Intel Code.
 *
 * 3.2. Redistribution of Source with no Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification without rights to further distribute source must
 * include the following Disclaimer and Export Compliance provision in the
 * documentation and/or other materials provided with distribution. In
 * addition, Licensee may not authorize further sublicense of source of any
 * portion of the Covered Code, and must include terms to the effect that the
 * license from Licensee to its licensee is limited to the intellectual
 * property embodied in the software Licensee provides to its licensee, and
 * not to intellectual property embodied in modifications its licensee may
 * make.
 *
 * 3.3. Redistribution of Executable. Redistribution in executable form of any
 * substantial portion of the Covered Code or modification must reproduce the
 * above Copyright Notice, and the following Disclaimer and Export Compliance
 * provision in the documentation and/or other materials provided with the
 * distribution.
 *
 * 3.4. Intel retains all right, title, and interest in and to the Original
 * Intel Code.
 *
 * 3.5. Neither the name Intel nor any other trademark owned or controlled by
 * Intel shall be used in advertising or otherwise to promote the sale, use or
 * other dealings in products derived from or relating to the Covered Code
 * without prior written authorization from Intel.
 *
 * 4. Disclaimer and Export Compliance
 *
 * 4.1. INTEL MAKES NO WARRANTY OF ANY KIND REGARDING ANY SOFTWARE PROVIDED
 * HERE. ANY SOFTWARE ORIGINATING FROM INTEL OR DERIVED FROM INTEL SOFTWARE
 * IS PROVIDED "AS IS," AND INTEL WILL NOT PROVIDE ANY SUPPORT, ASSISTANCE,
 * INSTALLATION, TRAINING OR OTHER SERVICES. INTEL WILL NOT PROVIDE ANY
 * UPDATES, ENHANCEMENTS OR EXTENSIONS. INTEL SPECIFICALLY DISCLAIMS ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4.2. IN NO EVENT SHALL INTEL HAVE ANY LIABILITY TO LICENSEE, ITS LICENSEES
 * OR ANY OTHER THIRD PARTY, FOR ANY LOST PROFITS, LOST DATA, LOSS OF USE OR
 * COSTS OF PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, OR FOR ANY INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THIS AGREEMENT, UNDER ANY
 * CAUSE OF ACTION OR THEORY OF LIABILITY, AND IRRESPECTIVE OF WHETHER INTEL
 * HAS ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES. THESE LIMITATIONS
 * SHALL APPLY NOTWITHSTANDING THE FAILURE OF THE ESSENTIAL PURPOSE OF ANY
 * LIMITED REMEDY.
 *
 * 4.3. Licensee shall not export, either directly or indirectly, any of this
 * software or system incorporating such software without first obtaining any
 * required license or other approval from the U. S. Department of Commerce or
 * any other agency or department of the United States Government. In the
 * event Licensee exports any such software from the United States or
 * re-exports any such software from a foreign destination, Licensee shall
 * ensure that the distribution and export/re-export of the software is in
 * compliance with all laws, regulations, orders, or other restrictions of the
 * U.S. Export Administration Regulations. Licensee agrees that neither it nor
 * any of its subsidiaries will export/re-export any technical data, process,
 * software, or service, directly or indirectly, to any country for which the
 * United States government or any agency thereof requires an export license,
 * other governmental approval, or letter of assurance, without first obtaining
 * such license, approval or letter.
 *
 *****************************************************************************
 *
 * Alternatively, you may choose to be licensed under the terms of the
 * following license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions, and the following disclaimer,
 *    without modification.
 * 2. Redistributions in binary form must reproduce at minimum a disclaimer
 *    substantially similar to the "NO WARRANTY" disclaimer below
 *    ("Disclaimer") and any redistribution must be conditioned upon
 *    including a substantially similar Disclaimer requirement for further
 *    binary redistribution.
 * 3. Neither the names of the above-listed copyright holders nor the names
 *    of any contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, you may choose to be licensed under the terms of the
 * GNU General Public License ("GPL") version 2 as published by the Free
 * Software Foundation.
 *
 *****************************************************************************/

#ifndef __AETABLES_H__
#define __AETABLES_H__


/*
 * Miscellaneous pre-compiled AML ACPI tables to be installed
 */

/* Local DSDT used only if not present in the input */

static unsigned char LocalDsdtCode[] =
{
    0x44,0x53,0x44,0x54,0x24,0x00,0x00,0x00,  /* 00000000    "DSDT$..." */
    0x02,0x2C,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    ".,Intel." */
    0x4C,0x6F,0x63,0x61,0x6C,0x00,0x00,0x00,  /* 00000010    "Local..." */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x30,0x07,0x09,0x20,
};

/* Several example SSDTs */

/* SSDT1 is used by ASLTS; if changed here, must also be changed in dtregions.asl */

static unsigned char Ssdt1Code[] = /* Has method _T98 */
{
    0x53,0x53,0x44,0x54,0x3E,0x00,0x00,0x00,  /* 00000000    "SSDT>..." */
    0x02,0x08,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    "..Intel." */
    0x73,0x73,0x64,0x74,0x31,0x00,0x00,0x00,  /* 00000010    "ssdt1..." */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x20,0x06,0x12,0x20,0x14,0x19,0x5F,0x54,  /* 00000020    " .. .._T" */
    0x39,0x38,0x01,0x70,0x0D,0x53,0x53,0x44,  /* 00000028    "98.p.SSD" */
    0x54,0x31,0x20,0x2D,0x20,0x5F,0x54,0x39,  /* 00000030    "T1 - _T9" */
    0x38,0x00,0x5B,0x31,0xA4,0x00             /* 00000038    "8.[1.."   */
};

unsigned char Ssdt2Code[] = /* Has method _T99 */
{
    0x53,0x53,0x44,0x54,0x3E,0x00,0x00,0x00,  /* 00000000    "SSDT>..." */
    0x02,0xFE,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    "..Intel." */
    0x73,0x73,0x64,0x74,0x32,0x00,0x00,0x00,  /* 00000010    "ssdt2..." */
    0x02,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x20,0x06,0x12,0x20,0x14,0x19,0x5F,0x54,  /* 00000020    " .. .._T" */
    0x39,0x39,0x06,0x70,0x0D,0x53,0x53,0x44,  /* 00000028    "99.p.SSD" */
    0x54,0x32,0x20,0x2D,0x20,0x5F,0x54,0x39,  /* 00000030    "T2 - _T9" */
    0x39,0x00,0x5B,0x31,0xA4,0x00             /* 00000038    "9.[1.."   */
};

unsigned char Ssdt3Code[] =     /* OEM9: Has method _T97 */
{
    0x4F,0x45,0x4D,0x39,0x30,0x00,0x00,0x00,  /* 00000000    "OEM10..." */
    0x01,0xDD,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    "..Intel." */
    0x4D,0x61,0x6E,0x79,0x00,0x00,0x00,0x00,  /* 00000010    "Many...." */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x24,0x04,0x03,0x20,0x14,0x0B,0x5F,0x54,  /* 00000020    "$.. .._T" */
    0x39,0x37,0x00,0x70,0x0A,0x04,0x60,0xA4,  /* 00000028    "97.p..`." */
};

unsigned char Ssdt4Code[] =     /* Has method _T96 */
{
    0x53,0x53,0x44,0x54,0x2D,0x00,0x00,0x00,  /* 00000000    "SSDT-..." */
    0x02,0x2B,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    ".+Intel." */
    0x73,0x73,0x64,0x74,0x34,0x00,0x00,0x00,  /* 00000010    "ssdt4..." */
    0x04,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x20,0x06,0x12,0x20,0x14,0x08,0x5F,0x54,  /* 00000020    " .. .._T" */
    0x39,0x36,0x05,0xA4,0x00                  /* 00000028    "96..."    */
};

/* "Hardware-Reduced" ACPI 5.0 FADT (No FACS, no ACPI hardware) */

unsigned char HwReducedFadtCode[] =
{
    0x46,0x41,0x43,0x50,0x0C,0x01,0x00,0x00,  /* 00000000    "FACP...." */
    0x05,0x8C,0x49,0x4E,0x54,0x45,0x4C,0x20,  /* 00000008    "..INTEL " */
    0x41,0x43,0x50,0x49,0x35,0x30,0x20,0x20,  /* 00000010    "ACPI50  " */
    0x00,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x13,0x04,0x11,0x20,0x00,0x00,0x00,0x00,  /* 00000020    "... ...." */
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000028    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000030    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000038    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000040    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000048    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000050    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000058    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000060    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000068    "........" */
    0x00,0x00,0x78,0x00,0x01,0x08,0x00,0x01,  /* 00000070    "..x....." */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000078    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000080    "........" */
    0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,  /* 00000088    "........" */
    0x00,0x00,0x00,0x00,0x01,0x20,0x00,0x02,  /* 00000090    "..... .." */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000098    "........" */
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000A0    "........" */
    0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x02,  /* 000000A8    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000B0    "........" */
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000B8    "........" */
    0x00,0x00,0x00,0x00,0x01,0x08,0x00,0x00,  /* 000000C0    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000C8    "........" */
    0x01,0x20,0x00,0x03,0x00,0x00,0x00,0x00,  /* 000000D0    ". ......" */
    0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x01,  /* 000000D8    "........" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000E0    "........" */
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000E8    "........" */
    0x00,0x00,0x00,0x00,0x01,0x08,0x00,0x01,  /* 000000F0    "........" */
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 000000F8    "........" */
    0x01,0x08,0x00,0x01,0x01,0x00,0x00,0x00,  /* 00000100    "........" */
    0x00,0x00,0x00,0x00                       /* 00000108    "........" */
};

/* Example OEM table */

static unsigned char Oem1Code[] =
{
    0x4F,0x45,0x4D,0x31,0x38,0x00,0x00,0x00,  /* 00000000    "OEM18..." */
    0x01,0x4B,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    ".KIntel." */
    0x4D,0x61,0x6E,0x79,0x00,0x00,0x00,0x00,  /* 00000010    "Many...." */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x18,0x09,0x03,0x20,0x08,0x5F,0x58,0x54,  /* 00000020    "... ._XT" */
    0x32,0x0A,0x04,0x14,0x0C,0x5F,0x58,0x54,  /* 00000028    "2...._XT" */
    0x31,0x00,0x70,0x01,0x5F,0x58,0x54,0x32,  /* 00000030    "1.p._XT2" */
};

/* ASL source for this table is at the end of this file */

static unsigned char OemxCode[] =
{
    0x4F,0x45,0x4D,0x58,0xB0,0x00,0x00,0x00,  /* 00000000    "OEMX...." */
    0x02,0x54,0x4D,0x79,0x4F,0x45,0x4D,0x00,  /* 00000008    ".TMyOEM." */
    0x54,0x65,0x73,0x74,0x00,0x00,0x00,0x00,  /* 00000010    "Test...." */
    0x32,0x04,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "2...INTL" */
    0x31,0x03,0x10,0x20,0x14,0x1D,0x5F,0x49,  /* 00000020    "1.. .._I" */
    0x4E,0x49,0x00,0x70,0x0D,0x54,0x61,0x62,  /* 00000028    "NI.p.Tab" */
    0x6C,0x65,0x20,0x4F,0x45,0x4D,0x58,0x20,  /* 00000030    "le OEMX " */
    0x72,0x75,0x6E,0x6E,0x69,0x6E,0x67,0x00,  /* 00000038    "running." */
    0x5B,0x31,0x10,0x22,0x5C,0x5F,0x47,0x50,  /* 00000040    "[1."\_GP" */
    0x45,0x14,0x06,0x5F,0x45,0x30,0x37,0x00,  /* 00000048    "E.._E07." */
    0x14,0x06,0x5F,0x45,0x32,0x32,0x00,0x14,  /* 00000050    ".._E22.." */
    0x06,0x5F,0x4C,0x33,0x31,0x00,0x14,0x06,  /* 00000058    "._L31..." */
    0x5F,0x4C,0x36,0x36,0x00,0x5B,0x82,0x10,  /* 00000060    "_L66.[.." */
    0x4F,0x45,0x4D,0x31,0x08,0x5F,0x50,0x52,  /* 00000068    "OEM1._PR" */
    0x57,0x12,0x05,0x02,0x0A,0x07,0x00,0x5B,  /* 00000070    "W......[" */
    0x82,0x10,0x4F,0x45,0x4D,0x32,0x08,0x5F,  /* 00000078    "..OEM2._" */
    0x50,0x52,0x57,0x12,0x05,0x02,0x0A,0x66,  /* 00000080    "PRW....f" */
    0x00,0x10,0x26,0x5C,0x47,0x50,0x45,0x32,  /* 00000088    "..&\GPE2" */
    0x14,0x06,0x5F,0x4C,0x30,0x31,0x00,0x14,  /* 00000090    ".._L01.." */
    0x06,0x5F,0x45,0x30,0x37,0x00,0x08,0x5F,  /* 00000098    "._E07.._" */
    0x50,0x52,0x57,0x12,0x0C,0x02,0x12,0x08,  /* 000000A0    "PRW....." */
    0x02,0x5C,0x47,0x50,0x45,0x32,0x01,0x00   /* 000000A8    ".\GPE2.." */
};

/* Example ECDT */

unsigned char EcdtCode[] =
{
    0x45,0x43,0x44,0x54,0x4E,0x00,0x00,0x00,  /* 00000000    "ECDTN..." */
    0x01,0x94,0x20,0x49,0x6E,0x74,0x65,0x6C,  /* 00000008    ".. Intel" */
    0x54,0x65,0x6D,0x70,0x6C,0x61,0x74,0x65,  /* 00000010    "Template" */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x16,0x03,0x11,0x20,0x01,0x08,0x00,0x00,  /* 00000020    "... ...." */
    0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000028    "f......." */
    0x01,0x08,0x00,0x00,0x62,0x00,0x00,0x00,  /* 00000030    "....b..." */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /* 00000038    "........" */
    0x09,0x5C,0x5F,0x53,0x42,0x2E,0x50,0x43,  /* 00000040    ".\_SB.PC" */
    0x49,0x30,0x2E,0x45,0x43,0x00             /* 00000048    "I0.EC."   */
};

/* Test for multiple UEFI tables */

unsigned char Uefi1Code[] =
{
    0x55,0x45,0x46,0x49,0x36,0x00,0x00,0x00,  /* 00000000    "UEFI6..." */
    0x01,0x6E,0x20,0x49,0x6E,0x74,0x65,0x6C,  /* 00000008    ".n Intel" */
    0x20,0x20,0x20,0x55,0x45,0x46,0x49,0x31,  /* 00000010    "   UEFI1" */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x23,0x08,0x13,0x20,0x06,0x07,0x08,0x09,  /* 00000020    "#.. ...." */
    0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,  /* 00000028    "........" */
    0x0C,0x0D,0x0E,0x0F,0x36,0x00             /* 00000030    "....6."   */
};

unsigned char Uefi2Code[] =
{
    0x55,0x45,0x46,0x49,0xAA,0x00,0x00,0x00,  /* 00000000    "UEFI...." */
    0x01,0xE0,0x20,0x49,0x6E,0x74,0x65,0x6C,  /* 00000008    ".. Intel" */
    0x20,0x20,0x20,0x55,0x45,0x46,0x49,0x32,  /* 00000010    "   UEFI2" */
    0x01,0x00,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "....INTL" */
    0x23,0x08,0x13,0x20,0x67,0x45,0x23,0x01,  /* 00000020    "#.. gE#." */
    0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,  /* 00000028    "........" */
    0x0C,0x0D,0x0E,0x0F,0x36,0x00,0x04,0x19,  /* 00000030    "....6..." */
    0x00,0x56,0x34,0xF2,0x04,0x03,0x02,0x01,  /* 00000038    ".V4....." */
    0x77,0x66,0x55,0x44,0x33,0x22,0x11,0x1E,  /* 00000040    "wfUD3".." */
    0x1C,0x1F,0x14,0x10,0x0C,0x08,0x04,0xAB,  /* 00000048    "........" */
    0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,  /* 00000050    "This is " */
    0x61,0x20,0x73,0x74,0x72,0x69,0x6E,0x67,  /* 00000058    "a string" */
    0x00,0x5C,0x50,0x43,0x49,0x30,0x5C,0x41,  /* 00000060    ".\PCI0\A" */
    0x42,0x43,0x44,0x00,0x36,0x00,0x55,0x00,  /* 00000068    "BCD.6.U." */
    0x6E,0x00,0x69,0x00,0x63,0x00,0x6F,0x00,  /* 00000070    "n.i.c.o." */
    0x64,0x00,0x65,0x00,0x20,0x00,0x53,0x00,  /* 00000078    "d.e. .S." */
    0x74,0x00,0x72,0x00,0x69,0x00,0x6E,0x00,  /* 00000080    "t.r.i.n." */
    0x67,0x00,0x00,0x00,0x58,0x5B,0x00,0x00,  /* 00000088    "g...X[.." */
    0x00,0x00,0x00,0x00,0x41,0x42,0x43,0x44,  /* 00000090    "....ABCD" */
    0x45,0x00,0x00,0x01,0x02,0x03,0x04,0x05,  /* 00000098    "E......." */
    0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,  /* 000000A0    "........" */
    0x0E,0x0F                                 /* 000000A8    ".."       */
};


/*
 * Example installable control method
 *
 * DefinitionBlock ("", "DSDT", 2, "Intel", "MTHDTEST", 0x20090512)
 * {
 *     Method (\_SI_._T97, 1, Serialized)
 *     {
 *         Store ("Example installed method", Debug)
 *         Store (Arg0, Debug)
 *         Return ()
 *     }
 * }
 *
 * Compiled byte code below.
 */
static unsigned char MethodCode[] =
{
    0x44,0x53,0x44,0x54,0x53,0x00,0x00,0x00,  /* 00000000    "DSDTS..." */
    0x02,0xF9,0x49,0x6E,0x74,0x65,0x6C,0x00,  /* 00000008    "..Intel." */
    0x4D,0x54,0x48,0x44,0x54,0x45,0x53,0x54,  /* 00000010    "MTHDTEST" */
    0x12,0x05,0x09,0x20,0x49,0x4E,0x54,0x4C,  /* 00000018    "... INTL" */
    0x22,0x04,0x09,0x20,0x14,0x2E,0x2E,0x5F,  /* 00000020    "".. ..._" */
    0x54,0x49,0x5F,0x5F,0x54,0x39,0x37,0x09,  /* 00000028    "SI__T97." */
    0x70,0x0D,0x45,0x78,0x61,0x6D,0x70,0x6C,  /* 00000030    "p.Exampl" */
    0x65,0x20,0x69,0x6E,0x73,0x74,0x61,0x6C,  /* 00000038    "e instal" */
    0x6C,0x65,0x64,0x20,0x6D,0x65,0x74,0x68,  /* 00000040    "led meth" */
    0x6F,0x64,0x00,0x5B,0x31,0x70,0x68,0x5B,  /* 00000048    "od.[1ph[" */
    0x31,0xA4,0x00,
};


#if 0
/******************************************************************************
 *
 * DESCRIPTION: ASL tables that are used in RSDT/XSDT, also used to test
 *              Load/LoadTable operators.
 *
 *****************************************************************************/

DefinitionBlock ("", "OEMX", 2, "MyOEM", "Test", 0x00000432)
{
    External (GPE2, DeviceObj)

    Method (_INI)
    {
        Store ("Table OEMX running", Debug)
    }

    Scope (\_GPE)
    {
        Method (_E07) {}
        Method (_E22) {}
        Method (_L31) {}
        Method (_L66) {}
    }

    Device (OEM1)
    {
        Name (_PRW, Package(){7,0})
    }
    Device (OEM2)
    {
        Name (_PRW, Package(){0x66,0})
    }

    Scope (\GPE2)
    {
        Method (_L01) {}
        Method (_E07) {}

        Name (_PRW, Package() {Package() {\GPE2, 1}, 0})
    }
}

/* Parent gr.asl file */

DefinitionBlock ("", "DSDT", 2, "Intel", "Many", 0x00000001)
{
    Name (BUF1, Buffer()
    {
        0x4F,0x45,0x4D,0x58,0xB0,0x00,0x00,0x00,  /* 00000000    "OEMX...." */
        0x02,0x54,0x4D,0x79,0x4F,0x45,0x4D,0x00,  /* 00000008    ".TMyOEM." */
        0x54,0x65,0x73,0x74,0x00,0x00,0x00,0x00,  /* 00000010    "Test...." */
        0x32,0x04,0x00,0x00,0x49,0x4E,0x54,0x4C,  /* 00000018    "2...INTL" */
        0x31,0x03,0x10,0x20,0x14,0x1D,0x5F,0x49,  /* 00000020    "1.. .._I" */
        0x4E,0x49,0x00,0x70,0x0D,0x54,0x61,0x62,  /* 00000028    "NI.p.Tab" */
        0x6C,0x65,0x20,0x4F,0x45,0x4D,0x58,0x20,  /* 00000030    "le OEMX " */
        0x72,0x75,0x6E,0x6E,0x69,0x6E,0x67,0x00,  /* 00000038    "running." */
        0x5B,0x31,0x10,0x22,0x5C,0x5F,0x47,0x50,  /* 00000040    "[1."\_GP" */
        0x45,0x14,0x06,0x5F,0x45,0x30,0x37,0x00,  /* 00000048    "E.._E07." */
        0x14,0x06,0x5F,0x45,0x32,0x32,0x00,0x14,  /* 00000050    ".._E22.." */
        0x06,0x5F,0x4C,0x33,0x31,0x00,0x14,0x06,  /* 00000058    "._L31..." */
        0x5F,0x4C,0x36,0x36,0x00,0x5B,0x82,0x10,  /* 00000060    "_L66.[.." */
        0x4F,0x45,0x4D,0x31,0x08,0x5F,0x50,0x52,  /* 00000068    "OEM1._PR" */
        0x57,0x12,0x05,0x02,0x0A,0x07,0x00,0x5B,  /* 00000070    "W......[" */
        0x82,0x10,0x4F,0x45,0x4D,0x32,0x08,0x5F,  /* 00000078    "..OEM2._" */
        0x50,0x52,0x57,0x12,0x05,0x02,0x0A,0x66,  /* 00000080    "PRW....f" */
        0x00,0x10,0x26,0x5C,0x47,0x50,0x45,0x32,  /* 00000088    "..&\GPE2" */
        0x14,0x06,0x5F,0x4C,0x30,0x31,0x00,0x14,  /* 00000090    ".._L01.." */
        0x06,0x5F,0x45,0x30,0x37,0x00,0x08,0x5F,  /* 00000098    "._E07.._" */
        0x50,0x52,0x57,0x12,0x0C,0x02,0x12,0x08,  /* 000000A0    "PRW....." */
        0x02,0x5C,0x47,0x50,0x45,0x32,0x01,0x00   /* 000000A8    ".\GPE2.." */
    })

    Name (HNDL, 0)
    Method (LD)
    {
        Load (BUF1, HNDL)
        Store ("Load operator, handle:", Debug)
        Store (HNDL, Debug)
    }

    Method (MAIN, 0, NotSerialized)
    {
        Store ("Loading OEMX table", Debug)
        Store (LoadTable ("OEMX", "MyOEM", "Test"), Debug)
    }

    Scope (\_GPE)
    {
        Method (_L08) {}
        Method (_E08) {}
        Method (_L0B) {}
    }

    Device (DEV0)
    {
        Name (_PRW, Package() {0x11, 0})
    }

    Device (\GPE2)
    {
        Method (_L00) {}
    }
}

/* SSDT1 */

DefinitionBlock ("ssdt1.aml", "SSDT", 2, "Intel", "ssdt1", 0x00000001)
{
    Method (_T98, 1, NotSerialized)
    {
        Store ("SSDT1 - _T98", Debug)
        Return (Zero)
    }
}

/* SSDT2 */

DefinitionBlock ("ssdt2.aml", "SSDT", 2, "Intel", "ssdt2", 0x00000002)
{
    Method (_T99, 6, NotSerialized)
    {
        Store ("SSDT2 - _T99", Debug)
        Return (Zero)
    }
}

/* SSDT4 */

DefinitionBlock ("ssdt4.aml", "SSDT", 2, "Intel", "ssdt4", 0x00000004)
{
    Method (_T96, 5, NotSerialized)
    {
        Return (Zero)
    }
}

/* Example ECDT */

[000h 0000   4]                    Signature : "ECDT"    /* Embedded Controller Boot Resources Table */
[004h 0004   4]                 Table Length : 0000004E
[008h 0008   1]                     Revision : 01
[009h 0009   1]                     Checksum : 14
[00Ah 0010   6]                       Oem ID : " Intel"
[010h 0016   8]                 Oem Table ID : "Template"
[018h 0024   4]                 Oem Revision : 00000001
[01Ch 0028   4]              Asl Compiler ID : "INTL"
[020h 0032   4]        Asl Compiler Revision : 20110316


[024h 0036  12]      Command/Status Register : <Generic Address Structure>
[024h 0036   1]                     Space ID : 01 (SystemIO)
[025h 0037   1]                    Bit Width : 08
[026h 0038   1]                   Bit Offset : 00
[027h 0039   1]         Encoded Access Width : 00 (Undefined/Legacy)
[028h 0040   8]                      Address : 0000000000000066

[030h 0048  12]                Data Register : <Generic Address Structure>
[030h 0048   1]                     Space ID : 01 (SystemIO)
[031h 0049   1]                    Bit Width : 08
[032h 0050   1]                   Bit Offset : 00
[033h 0051   1]         Encoded Access Width : 00 (Undefined/Legacy)
[034h 0052   8]                      Address : 0000000000000062

[03Ch 0060   4]                          UID : 00000000
[040h 0064   1]                   GPE Number : 09
[041h 0065  13]                     Namepath : "\_SB.PCI0.EC"


/* Test multiple UEFI support */

[0004]                          Signature : "UEFI"    [UEFI Boot Optimization Table]
[0004]                       Table Length : 00000036
[0001]                           Revision : 01
[0001]                           Checksum : 9B
[0006]                             Oem ID : " Intel"
[0008]                       Oem Table ID : "   UEFI1"
[0004]                       Oem Revision : 00000001
[0004]                    Asl Compiler ID : "INTL"
[0004]              Asl Compiler Revision : 20100528

[0016]                    UUID Identifier : 09080706-0504-0706-0809-0A0B0C0D0E0F
[0002]                        Data Offset : 0000


[004]                          Signature : "UEFI"    /* UEFI Boot Optimization Table */
[004]                       Table Length : 00000036
[001]                           Revision : 01
[001]                           Checksum : 9B
[006]                             Oem ID : " Intel"
[008]                       Oem Table ID : "   UEFI2"
[004]                       Oem Revision : 00000001
[004]                    Asl Compiler ID : "INTL"
[004]              Asl Compiler Revision : 20100528

[016]                    UUID Identifier : 01234567-0504-0706-0809-0A0B0C0D0E0F
[002]                        Data Offset : 0000

                                   Label : StartRecord
                                   UINT8 : 4
                                  UINT16 : $EndRecord - $StartRecord  /* Should be 0x19 */
                                  UINT24 : 123456 | F00000
                                  UINT32 : 01020304
                                  UINT56 : 11223344556677
                                  UINT64 : 0102030405060708 * 4 - 200 / 100 | F0000
                                   Label : EndRecord

                                   UINT8 : AB
                                  String : "This is a string"
                              DevicePath : "\PCI0\ABCD"
                                  UINT16 : $StartRecord
                                 Unicode : "Unicode String"
                                  UINT64 : $EndRecord * 128

                                  Buffer : 41 42 43 44 45
                                  String : ""
                                    GUID : 03020100-0504-0706-0809-0A0B0C0D0E0F
#endif

#endif /* __AETABLES_H__ */
