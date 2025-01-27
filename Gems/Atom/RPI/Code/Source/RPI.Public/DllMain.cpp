/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#if !defined(AZ_MONOLITHIC_BUILD)

#include <AzCore/PlatformDef.h>
#include <AzCore/Serialization/SerializeContext.h>

extern "C" void CleanUpRpiPublicGenericClassInfo()
{
    // TODO(Atom_RPI-sharedlib): Uncomment this when Atom_RPI.Public is converted to a shared library
    // AZ::GetCurrentSerializeContextModule().Cleanup();
}

#endif
