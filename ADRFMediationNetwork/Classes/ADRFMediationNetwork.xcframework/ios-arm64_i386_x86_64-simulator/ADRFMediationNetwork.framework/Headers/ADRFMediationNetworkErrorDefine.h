//
//  ADRFMediationNetworkErrorDefine.h
//  ADRFMediationNetwork
//
//  Created by 陈坤 on 2020/3/19.
//

#ifndef ADRFMediationNetworkErrorDefine_h
#define ADRFMediationNetworkErrorDefine_h

typedef enum : NSInteger {
    ADRF_NETWORK_REQUEST_SERIALIZETION_ERROR = 1001, // 请求对象解析失败
    ADRF_NETWORK_REQUEST_OPERATION_CANCELED = 1002, // 请求被取消
    ADRF_NETWORK_RESPONSE_SERIALIZETION_ERROR = 1003, // 响应解析失败
} ADRfNetworkErrorCode;


static NSError * ADRfNetworkError(NSErrorDomain domain, NSInteger code, NSString *localizedDescription) {
    NSDictionary *userInfo = nil;
    if (localizedDescription && localizedDescription.length > 0) {
        userInfo = @{NSLocalizedDescriptionKey : localizedDescription};
    }
    return [[NSError alloc] initWithDomain:domain code:code userInfo:userInfo];
}

#endif /* ADRFMediationNetworkErrorDefine_h */
