//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

<<<<<<< Updated upstream
using namespace SDKTemplate;
=======
using namespace winrt;
using namespace winrt::Windows::Foundation::Collections;
using namespace winrt::SDKTemplate;
>>>>>>> Stashed changes

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Add Scenario 1 here", "SDKTemplate.Scenario1_ShortName" },
    { "Add Scenario 2 here", "SDKTemplate.Scenario2_ShortName" },
    { "Add Scenario 3 here", "SDKTemplate.Scenario3_ShortName" }
};
