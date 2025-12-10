#pragma once

#include "../hookcontext.h"

typedef std::map<HANDLE, std::wstring> SearchHandleMap;

// maps handles opened for searching to the original search path, which is
// necessary if the handle creation was rerouted
DATA_ID(SearchHandles);

// RerouteHandle init as nullptr
// ReroutePath init as physical path
// When Write Operation occurs, RerouteHandle is set to a new handle at overwrite
// ReroutePath is updated to the new path
typedef struct
{
  HANDLE RerouteHandle;
  std::wstring ReroutePath;
} WriteAccessHandle;
typedef std::map<HANDLE, WriteAccessHandle> WriteAccessHandleMap;
DATA_ID(WriteAccessHandles);
