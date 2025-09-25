/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2022 - 2025
*
*  TITLE:       CONSOLE.C
*
*  VERSION:     3.69
*
*  DATE:        07 Jul 2025
*
*  Debug console.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#include "global.h"
#include <stdio.h>

HANDLE StdOutputHandle = NULL;

pswprintf_s _swprintf_s = NULL;

VOID ConsolePrint(
    _In_ LPCWSTR Message
)
{
    wprintf(TEXT("%s"), Message);
}

VOID ConsolePrintValueUlong(
    _In_ LPCWSTR Message,
    _In_ ULONG Value,
    _In_ BOOL Hexademical
)
{
    wprintf(Hexademical ? TEXT("%s 0x%lX\r\n") : TEXT("%s %lu\r\n"), Message, Value);
}

VOID ConsolePrintStatus(
    _In_ LPCWSTR Message,
    _In_ NTSTATUS Status
)
{
    ConsolePrintValueUlong(Message, Status, TRUE);
}
