
#pragma once

#include "def.h"
#include "core/logger.h"


typedef struct PlatformState
{   
    void* iState;
} PlatformState;



uint8 cdk_platform_create (PlatformState* pltState,
        const char* name,
        uint32 x, uint32 y,
        uint32 width, uint32 height);


uint8 cdk_platform_update (PlatformState *pltState);


void cdk_platform_shutdown (PlatformState* pltState);

float64 cdk_platform_time (void);
