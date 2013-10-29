/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.3.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Test_Interface_PROXY_BASE_H_
#define COMMONAPI_TESTS_Test_Interface_PROXY_BASE_H_

#include "TestInterface.h"


#include <commonapi/tests/DerivedTypeCollection.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <unordered_map>
#include <vector>

#include <CommonAPI/Attribute.h>
#include <CommonAPI/Event.h>
#include <CommonAPI/SelectiveEvent.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {

class TestInterfaceProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::ObservableAttribute<uint32_t> TestPredefinedTypeAttributeAttribute;
    typedef CommonAPI::ObservableAttribute<DerivedTypeCollection::TestStructExtended> TestDerivedStructAttributeAttribute;
    typedef CommonAPI::ObservableAttribute<DerivedTypeCollection::TestArrayUInt64> TestDerivedArrayAttributeAttribute;
    typedef CommonAPI::Event<uint32_t, std::string> TestPredefinedTypeBroadcastEvent;
    typedef CommonAPI::SelectiveEvent<> TestSelectiveBroadcastSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<uint32_t, std::string> TestBroadcastWithOutArgsSelectiveEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> TestEmptyMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestVoidPredefinedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const uint32_t&, const std::string&)> TestPredefinedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestVoidDerivedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const DerivedTypeCollection::TestEnumExtended2&, const DerivedTypeCollection::TestMap&)> TestDerivedTypeMethodAsyncCallback;

    virtual TestPredefinedTypeAttributeAttribute& getTestPredefinedTypeAttributeAttribute() = 0;
    virtual TestDerivedStructAttributeAttribute& getTestDerivedStructAttributeAttribute() = 0;
    virtual TestDerivedArrayAttributeAttribute& getTestDerivedArrayAttributeAttribute() = 0;

    virtual TestPredefinedTypeBroadcastEvent& getTestPredefinedTypeBroadcastEvent() = 0;
    virtual TestSelectiveBroadcastSelectiveEvent& getTestSelectiveBroadcastSelectiveEvent() = 0;
    virtual TestBroadcastWithOutArgsSelectiveEvent& getTestBroadcastWithOutArgsSelectiveEvent() = 0;

    virtual void testEmptyMethod(CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> testEmptyMethodAsync(TestEmptyMethodAsyncCallback callback) = 0;
    virtual void testVoidPredefinedTypeMethod(const uint32_t& uint32Value, const std::string& stringValue, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> testVoidPredefinedTypeMethodAsync(const uint32_t& uint32Value, const std::string& stringValue, TestVoidPredefinedTypeMethodAsyncCallback callback) = 0;
    virtual void testPredefinedTypeMethod(const uint32_t& uint32InValue, const std::string& stringInValue, CommonAPI::CallStatus& callStatus, uint32_t& uint32OutValue, std::string& stringOutValue) = 0;
    virtual std::future<CommonAPI::CallStatus> testPredefinedTypeMethodAsync(const uint32_t& uint32InValue, const std::string& stringInValue, TestPredefinedTypeMethodAsyncCallback callback) = 0;
    virtual void testVoidDerivedTypeMethod(const DerivedTypeCollection::TestEnumExtended2& testEnumExtended2Value, const DerivedTypeCollection::TestMap& testMapValue, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> testVoidDerivedTypeMethodAsync(const DerivedTypeCollection::TestEnumExtended2& testEnumExtended2Value, const DerivedTypeCollection::TestMap& testMapValue, TestVoidDerivedTypeMethodAsyncCallback callback) = 0;
    virtual void testDerivedTypeMethod(const DerivedTypeCollection::TestEnumExtended2& testEnumExtended2InValue, const DerivedTypeCollection::TestMap& testMapInValue, CommonAPI::CallStatus& callStatus, DerivedTypeCollection::TestEnumExtended2& testEnumExtended2OutValue, DerivedTypeCollection::TestMap& testMapOutValue) = 0;
    virtual std::future<CommonAPI::CallStatus> testDerivedTypeMethodAsync(const DerivedTypeCollection::TestEnumExtended2& testEnumExtended2InValue, const DerivedTypeCollection::TestMap& testMapInValue, TestDerivedTypeMethodAsyncCallback callback) = 0;
};

} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_Test_Interface_PROXY_BASE_H_
