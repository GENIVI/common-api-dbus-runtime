/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.3.qualifier.
* Used org.franca.core 0.8.9.201308271211.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Root_Interface_H_
#define COMMONAPI_TESTS_MANAGED_Root_Interface_H_


#include <set>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

class RootInterface {
 public:
    virtual ~RootInterface() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
    enum class testRootMethodError: int32_t {
        OK,
        NOTOK
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct testRootMethodErrorComparator;
};

const char* RootInterface::getInterfaceId() {
    static const char* interfaceId = "commonapi.tests.managed.RootInterface";
    return interfaceId;
}

CommonAPI::Version RootInterface::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, RootInterface::testRootMethodError& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const RootInterface::testRootMethodError& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct RootInterface::testRootMethodErrorComparator {
    inline bool operator()(const testRootMethodError& lhs, const testRootMethodError& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};


} // namespace managed
} // namespace tests
} // namespace commonapi

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
    //Hash for testRootMethodError
    template<>
    struct hash<commonapi::tests::managed::RootInterface::testRootMethodError> {
        inline size_t operator()(const commonapi::tests::managed::RootInterface::testRootMethodError& testRootMethodError) const {
            return static_cast<int32_t>(testRootMethodError);
        }
    };
}

#endif // COMMONAPI_TESTS_MANAGED_Root_Interface_H_
