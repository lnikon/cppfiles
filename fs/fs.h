#ifndef FS_H
#define FS_H

#include <iostream>
#include <string>
using namespace std;

#define VFS_VERSION 0x0100
#define VFS_PATH_SEPARATOR

void VFS_Init();
void VFS_Shutdown();

typedef BOOL (* VFS_FilterProc)(LPCBYTE pIn, DWORD dwInCount,
        LPBYTE* ppOut, DWORD* pOutCount);

struct VFS_Filter 
{
string strName;
string strDescription;
VFS_FilterProc pfnEncodeProc;
VFS_FilterProc pfnDecodeProc;
};

void VFS__RegisterFilter(VFS_Filter * pFilter);
void VFS_UnregisterFilter(VFS_Filter * pFilter);
void VFS_UnregisterFilter(DWORD dwIndex);

DWORD VFS_GetNumFilter();
const VFS_Filter* VFS_GetFilter(DWORD dwIndex);

#endif
