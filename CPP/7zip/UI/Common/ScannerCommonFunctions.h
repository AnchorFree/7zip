#pragma once
#include <iostream>
enum class ScanFileState
{
    E_ScanFileState_None,							//File scan state: running
    E_ScanFileState_Abort						    //File scan state: scan abort by service
};

enum ExtractionStatus
{
    SkipDueToArchiveMaxSize = 100,
    SkipDueToMaxRatio = 200,
    SkipDueToMaxCount = 300
};

struct ArchiveOptions
{
	uint64_t ArchiveMaxSize;
	uint64_t ArchiveTotalMaxSize;
	uint64_t ArchiveMaxRatio;
	uint64_t ArchiveMaxCount;
};

class CScannerCommonFunctions
{
public:
    bool CheckForScanAbortState(ScanFileState* pScanFileState);
};
