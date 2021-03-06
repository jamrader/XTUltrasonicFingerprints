#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CUE_ENGINE_ERROR) {
    CUE_ENGINE_SUCCESS = 0,
    CUE_ENGINE_ERR_UNKNOWN = -100,
    CUE_ENGINE_ERR_QUEUE_TRIGGER_NO_ACTIVE_TRANSMITTER = -1,
    CUE_ENGINE_ERR_QUEUE_MESSAGE_NO_ACTIVE_TRANSMITTER = -2,
    CUE_ENGINE_ERR_NUMBER_OF_SYMBOLS_MISMATCH = -3,
    CUE_ENGINE_ERR_SYMBOL_NOT_A_NUMBER = -5,
    CUE_ENGINE_ERR_NO_ACTIVE_TRANSMITTER = -6,
    CUE_ENGINE_ERR_TRIGGER_AS_NUMBER_MAX_NUMBER_EXCEEDED = -7,
    CUE_ENGINE_ERR_INDEX_VALUE_EXCEEDED = -8,
    CUE_ENGINE_ERR_UNSUPPORTED_ENGINE_GENERATION = -9,
    CUE_ENGINE_ERR_MULTI_TRIGGER_AS_NUMBER_MAX_NUMBER_EXCEEDED = -10,
    CUE_ENGINE_ERR_GEN_LIVE_UNSUPPORTED = -11,
    CUE_ENGINE_ERR_QUEUE_LIVE_UNSUPPORTED = -12,
    CUE_ENGINE_ERR_G1_NUMBER_OF_SYMBOLS_EXCEEDED = -102,
    CUE_ENGINE_ERR_G1_GEN_MESSAGE_UNSUPPORTED = -103,
    CUE_ENGINE_ERR_G1_QUEUE_LL_UNSUPPORTED = -104,
    CUE_ENGINE_ERR_G1_GEN_LL_UNSUPPORTED = -105,
    CUE_ENGINE_ERR_G1_QUEUE_MULTI_TRIGGER_UNSUPPORTED = -106,
    CUE_ENGINE_ERR_G1_QUEUE_DATA_UNSUPPORTED = -107,
    CUE_ENGINE_ERR_G1_QUEUE_MESSAGE_UNSUPPORTED = -108,
    CUE_ENGINE_ERR_G2_MESSAGE_STRING_SIZE_IN_BYTES_EXCEEDED = -201,
    CUE_ENGINE_ERR_G2_QUEUE_DATA_UNSUPPORTED = -203,
    CUE_ENGINE_ERR_G2_QUEUE_TRIGGER_NON_BASIC_MODE_IS_USED = -204,
    CUE_ENGINE_ERR_G2_QUEUE_LL_MODE_LL_ONLY_OR_MODE_BASIC_SHOULD_BE_SET = -205,
    CUE_ENGINE_ERR_G2_GEN_LL_MODE_LL_ONLY_OR_MODE_BASIC_SHOULD_BE_SET = -206,
    CUE_ENGINE_ERR_G2_LL_IS_ON_IN_BASIC_CAN_NOT_QUEUE = -207
};
