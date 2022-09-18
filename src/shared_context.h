#ifndef __SHARED_CONTEXT_H__

#define __SHARED_CONTEXT_H__

#include <stdint.h>
#include "parse.h"
#include "tokens.h"
#include "nft.h"
#include "parse.h"
#include "os_io_seproxyhal.h"
#include <string.h>

#include "glyphs.h"
#include "ux.h"
#include "parse.h"

#define WEI_TO_ETHER 18

#define SELECTOR_LENGTH 4

#define PLUGIN_ID_LENGTH 30

#define INT256_LENGTH  32

#define MAX_ITEMS      2

typedef struct messageSigningContext712_t {
    uint8_t pathLength;
    uint32_t bip32Path[MAX_BIP32_PATH];
    uint8_t domainHash[32];
    uint8_t messageHash[32];
} messageSigningContext712_t;

typedef union extraInfo_t {
    tokenDefinition_t token;
    nftInfo_t nft;
} extraInfo_t;

typedef struct messageSigningContext_t {
    bip32_path_t bip32;
    uint8_t hash[INT256_LENGTH];
    uint32_t remainingLength;
} messageSigningContext_t;

typedef struct transactionContext_t2 {
    bip32_path_t bip32;
    uint8_t hash[INT256_LENGTH];
    union extraInfo_t extraInfo[MAX_ITEMS];
    uint8_t tokenSet[MAX_ITEMS];
    uint8_t currentItemIndex;
} transactionContext_t2;


typedef union {
    publicKeyContext_t publicKeyContext;
    transactionContext_t2 transactionContext;
    messageSigningContext_t messageSigningContext;
    messageSigningContext712_t messageSigningContext712;
} tmpCtx_t;

typedef enum { APP_STATE_IDLE, APP_STATE_SIGNING_TX, APP_STATE_SIGNING_MESSAGE } app_state_t;

extern uint8_t appState;
extern tmpCtx_t tmpCtx;
extern cx_sha3_t global_sha3;

typedef struct txStringProperties_t {
    char fullAddress[43];
    char fullAmount[50];
    char maxFee[50];
} txStringProperties_t;

typedef struct strDataTmp_t {
    char tmp[100];
    char tmp2[40];
} strDataTmp_t;

typedef union {
    txStringProperties_t common;
    strDataTmp_t tmp;
} strings_t;

extern strings_t strings;

void reset_app_context(void);
#endif // __SHARED_CONTEXT_H__