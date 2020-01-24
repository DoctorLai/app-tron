/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0 */

#ifndef PB_PROTOCOL_CORE_CONTRACT_PB_H_INCLUDED
#define PB_PROTOCOL_CORE_CONTRACT_PB_H_INCLUDED
#include <pb.h>
#include "core/Tron.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _protocol_ResourceCode {
    protocol_ResourceCode_BANDWIDTH = 0,
    protocol_ResourceCode_ENERGY = 1
} protocol_ResourceCode;

/* Struct definitions */
typedef struct _protocol_DeployContract {
    pb_callback_t owner_address;
    pb_callback_t script;
} protocol_DeployContract;

typedef struct _protocol_UnfreezeAssetContract {
    pb_callback_t owner_address;
} protocol_UnfreezeAssetContract;

typedef struct _protocol_WitnessCreateContract {
    pb_callback_t owner_address;
    pb_callback_t url;
} protocol_WitnessCreateContract;

typedef struct _protocol_WitnessUpdateContract {
    pb_callback_t owner_address;
    pb_callback_t update_url;
} protocol_WitnessUpdateContract;

typedef struct _protocol_AccountCreateContract {
    pb_callback_t owner_address;
    pb_callback_t account_address;
    protocol_AccountType type;
} protocol_AccountCreateContract;

typedef PB_BYTES_ARRAY_T(21) protocol_AccountUpdateContract_owner_address_t;
typedef struct _protocol_AccountUpdateContract {
    pb_callback_t account_name;
    protocol_AccountUpdateContract_owner_address_t owner_address;
} protocol_AccountUpdateContract;

typedef struct _protocol_AssetIssueContract {
    pb_callback_t owner_address;
    pb_callback_t name;
    pb_callback_t abbr;
    int64_t total_supply;
    pb_callback_t frozen_supply;
    int32_t trx_num;
    int32_t num;
    int64_t start_time;
    int64_t end_time;
    int32_t vote_score;
    pb_callback_t description;
    pb_callback_t url;
    int64_t free_asset_net_limit;
    int64_t public_free_asset_net_limit;
    int64_t public_free_asset_net_usage;
    int64_t public_latest_free_net_time;
} protocol_AssetIssueContract;

typedef struct _protocol_AssetIssueContract_FrozenSupply {
    int64_t frozen_amount;
    int64_t frozen_days;
} protocol_AssetIssueContract_FrozenSupply;

typedef PB_BYTES_ARRAY_T(21) protocol_ExchangeCreateContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(8) protocol_ExchangeCreateContract_first_token_id_t;
typedef PB_BYTES_ARRAY_T(8) protocol_ExchangeCreateContract_second_token_id_t;
typedef struct _protocol_ExchangeCreateContract {
    protocol_ExchangeCreateContract_owner_address_t owner_address;
    protocol_ExchangeCreateContract_first_token_id_t first_token_id;
    int64_t first_token_balance;
    protocol_ExchangeCreateContract_second_token_id_t second_token_id;
    int64_t second_token_balance;
} protocol_ExchangeCreateContract;

typedef PB_BYTES_ARRAY_T(21) protocol_ExchangeInjectContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(8) protocol_ExchangeInjectContract_token_id_t;
typedef struct _protocol_ExchangeInjectContract {
    protocol_ExchangeInjectContract_owner_address_t owner_address;
    int64_t exchange_id;
    protocol_ExchangeInjectContract_token_id_t token_id;
    int64_t quant;
} protocol_ExchangeInjectContract;

typedef PB_BYTES_ARRAY_T(21) protocol_FreezeBalanceContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(21) protocol_FreezeBalanceContract_receiver_address_t;
typedef struct _protocol_FreezeBalanceContract {
    protocol_FreezeBalanceContract_owner_address_t owner_address;
    int64_t frozen_balance;
    int64_t frozen_duration;
    protocol_ResourceCode resource;
    protocol_FreezeBalanceContract_receiver_address_t receiver_address;
} protocol_FreezeBalanceContract;

typedef struct _protocol_ParticipateAssetIssueContract {
    pb_callback_t owner_address;
    pb_callback_t to_address;
    pb_callback_t asset_name;
    int64_t amount;
} protocol_ParticipateAssetIssueContract;

typedef PB_BYTES_ARRAY_T(21) protocol_ProposalApproveContract_owner_address_t;
typedef struct _protocol_ProposalApproveContract {
    protocol_ProposalApproveContract_owner_address_t owner_address;
    int64_t proposal_id;
    bool is_add_approval;
} protocol_ProposalApproveContract;

typedef struct _protocol_ProposalCreateContract_ParametersEntry {
    int64_t key;
    int64_t value;
} protocol_ProposalCreateContract_ParametersEntry;

typedef PB_BYTES_ARRAY_T(21) protocol_ProposalDeleteContract_owner_address_t;
typedef struct _protocol_ProposalDeleteContract {
    protocol_ProposalDeleteContract_owner_address_t owner_address;
    int64_t proposal_id;
} protocol_ProposalDeleteContract;

typedef PB_BYTES_ARRAY_T(16) protocol_TransferAssetContract_asset_name_t;
typedef PB_BYTES_ARRAY_T(21) protocol_TransferAssetContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(21) protocol_TransferAssetContract_to_address_t;
typedef struct _protocol_TransferAssetContract {
    protocol_TransferAssetContract_asset_name_t asset_name;
    protocol_TransferAssetContract_owner_address_t owner_address;
    protocol_TransferAssetContract_to_address_t to_address;
    int64_t amount;
} protocol_TransferAssetContract;

typedef PB_BYTES_ARRAY_T(21) protocol_TransferContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(21) protocol_TransferContract_to_address_t;
typedef struct _protocol_TransferContract {
    protocol_TransferContract_owner_address_t owner_address;
    protocol_TransferContract_to_address_t to_address;
    int64_t amount;
} protocol_TransferContract;

typedef PB_BYTES_ARRAY_T(21) protocol_TriggerSmartContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(21) protocol_TriggerSmartContract_contract_address_t;
typedef PB_BYTES_ARRAY_T(128) protocol_TriggerSmartContract_data_t;
typedef struct _protocol_TriggerSmartContract {
    protocol_TriggerSmartContract_owner_address_t owner_address;
    protocol_TriggerSmartContract_contract_address_t contract_address;
    int64_t call_value;
    protocol_TriggerSmartContract_data_t data;
    int64_t call_token_value;
    int64_t token_id;
} protocol_TriggerSmartContract;

typedef PB_BYTES_ARRAY_T(21) protocol_UnfreezeBalanceContract_owner_address_t;
typedef PB_BYTES_ARRAY_T(21) protocol_UnfreezeBalanceContract_receiver_address_t;
typedef struct _protocol_UnfreezeBalanceContract {
    protocol_UnfreezeBalanceContract_owner_address_t owner_address;
    protocol_ResourceCode resource;
    protocol_UnfreezeBalanceContract_receiver_address_t receiver_address;
} protocol_UnfreezeBalanceContract;

typedef struct _protocol_UpdateAssetContract {
    pb_callback_t owner_address;
    pb_callback_t description;
    pb_callback_t url;
    int64_t new_limit;
    int64_t new_public_limit;
} protocol_UpdateAssetContract;

typedef struct _protocol_VoteAssetContract {
    pb_callback_t owner_address;
    pb_callback_t vote_address;
    bool support;
    int32_t count;
} protocol_VoteAssetContract;

typedef PB_BYTES_ARRAY_T(21) protocol_VoteWitnessContract_Vote_vote_address_t;
typedef struct _protocol_VoteWitnessContract_Vote {
    protocol_VoteWitnessContract_Vote_vote_address_t vote_address;
    int64_t vote_count;
} protocol_VoteWitnessContract_Vote;

typedef PB_BYTES_ARRAY_T(21) protocol_WithdrawBalanceContract_owner_address_t;
typedef struct _protocol_WithdrawBalanceContract {
    protocol_WithdrawBalanceContract_owner_address_t owner_address;
} protocol_WithdrawBalanceContract;

typedef PB_BYTES_ARRAY_T(21) protocol_ProposalCreateContract_owner_address_t;
typedef struct _protocol_ProposalCreateContract {
    protocol_ProposalCreateContract_owner_address_t owner_address;
    pb_size_t parameters_count;
    protocol_ProposalCreateContract_ParametersEntry parameters[10];
} protocol_ProposalCreateContract;

typedef PB_BYTES_ARRAY_T(21) protocol_VoteWitnessContract_owner_address_t;
typedef struct _protocol_VoteWitnessContract {
    protocol_VoteWitnessContract_owner_address_t owner_address;
    pb_size_t votes_count;
    protocol_VoteWitnessContract_Vote votes[5];
    bool support;
} protocol_VoteWitnessContract;


/* Helper constants for enums */
#define _protocol_ResourceCode_MIN protocol_ResourceCode_BANDWIDTH
#define _protocol_ResourceCode_MAX protocol_ResourceCode_ENERGY
#define _protocol_ResourceCode_ARRAYSIZE ((protocol_ResourceCode)(protocol_ResourceCode_ENERGY+1))


/* Initializer values for message structs */
#define protocol_AccountCreateContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}, _protocol_AccountType_MIN}
#define protocol_AccountUpdateContract_init_default {{{NULL}, NULL}, {0, {0}}}
#define protocol_TransferContract_init_default   {{0, {0}}, {0, {0}}, 0}
#define protocol_TransferAssetContract_init_default {{0, {0}}, {0, {0}}, {0, {0}}, 0}
#define protocol_VoteAssetContract_init_default  {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define protocol_VoteWitnessContract_init_default {{0, {0}}, 0, {protocol_VoteWitnessContract_Vote_init_default, protocol_VoteWitnessContract_Vote_init_default, protocol_VoteWitnessContract_Vote_init_default, protocol_VoteWitnessContract_Vote_init_default, protocol_VoteWitnessContract_Vote_init_default}, 0}
#define protocol_VoteWitnessContract_Vote_init_default {{0, {0}}, 0}
#define protocol_WitnessCreateContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_WitnessUpdateContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_AssetIssueContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, 0}
#define protocol_AssetIssueContract_FrozenSupply_init_default {0, 0}
#define protocol_ParticipateAssetIssueContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define protocol_DeployContract_init_default     {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_FreezeBalanceContract_init_default {{0, {0}}, 0, 0, _protocol_ResourceCode_MIN, {0, {0}}}
#define protocol_UnfreezeBalanceContract_init_default {{0, {0}}, _protocol_ResourceCode_MIN, {0, {0}}}
#define protocol_UnfreezeAssetContract_init_default {{{NULL}, NULL}}
#define protocol_WithdrawBalanceContract_init_default {{0, {0}}}
#define protocol_UpdateAssetContract_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define protocol_ProposalCreateContract_init_default {{0, {0}}, 0, {protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default, protocol_ProposalCreateContract_ParametersEntry_init_default}}
#define protocol_ProposalCreateContract_ParametersEntry_init_default {0, 0}
#define protocol_ProposalApproveContract_init_default {{0, {0}}, 0, 0}
#define protocol_ProposalDeleteContract_init_default {{0, {0}}, 0}
#define protocol_TriggerSmartContract_init_default {{0, {0}}, {0, {0}}, 0, {0, {0}}, 0, 0}
#define protocol_ExchangeCreateContract_init_default {{0, {0}}, {0, {0}}, 0, {0, {0}}, 0}
#define protocol_ExchangeInjectContract_init_default {{0, {0}}, 0, {0, {0}}, 0}
#define protocol_AccountCreateContract_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, _protocol_AccountType_MIN}
#define protocol_AccountUpdateContract_init_zero {{{NULL}, NULL}, {0, {0}}}
#define protocol_TransferContract_init_zero      {{0, {0}}, {0, {0}}, 0}
#define protocol_TransferAssetContract_init_zero {{0, {0}}, {0, {0}}, {0, {0}}, 0}
#define protocol_VoteAssetContract_init_zero     {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define protocol_VoteWitnessContract_init_zero   {{0, {0}}, 0, {protocol_VoteWitnessContract_Vote_init_zero, protocol_VoteWitnessContract_Vote_init_zero, protocol_VoteWitnessContract_Vote_init_zero, protocol_VoteWitnessContract_Vote_init_zero, protocol_VoteWitnessContract_Vote_init_zero}, 0}
#define protocol_VoteWitnessContract_Vote_init_zero {{0, {0}}, 0}
#define protocol_WitnessCreateContract_init_zero {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_WitnessUpdateContract_init_zero {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_AssetIssueContract_init_zero    {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, 0}
#define protocol_AssetIssueContract_FrozenSupply_init_zero {0, 0}
#define protocol_ParticipateAssetIssueContract_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define protocol_DeployContract_init_zero        {{{NULL}, NULL}, {{NULL}, NULL}}
#define protocol_FreezeBalanceContract_init_zero {{0, {0}}, 0, 0, _protocol_ResourceCode_MIN, {0, {0}}}
#define protocol_UnfreezeBalanceContract_init_zero {{0, {0}}, _protocol_ResourceCode_MIN, {0, {0}}}
#define protocol_UnfreezeAssetContract_init_zero {{{NULL}, NULL}}
#define protocol_WithdrawBalanceContract_init_zero {{0, {0}}}
#define protocol_UpdateAssetContract_init_zero   {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define protocol_ProposalCreateContract_init_zero {{0, {0}}, 0, {protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero, protocol_ProposalCreateContract_ParametersEntry_init_zero}}
#define protocol_ProposalCreateContract_ParametersEntry_init_zero {0, 0}
#define protocol_ProposalApproveContract_init_zero {{0, {0}}, 0, 0}
#define protocol_ProposalDeleteContract_init_zero {{0, {0}}, 0}
#define protocol_TriggerSmartContract_init_zero  {{0, {0}}, {0, {0}}, 0, {0, {0}}, 0, 0}
#define protocol_ExchangeCreateContract_init_zero {{0, {0}}, {0, {0}}, 0, {0, {0}}, 0}
#define protocol_ExchangeInjectContract_init_zero {{0, {0}}, 0, {0, {0}}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define protocol_DeployContract_owner_address_tag 1
#define protocol_DeployContract_script_tag       2
#define protocol_UnfreezeAssetContract_owner_address_tag 1
#define protocol_WitnessCreateContract_owner_address_tag 1
#define protocol_WitnessCreateContract_url_tag   2
#define protocol_WitnessUpdateContract_owner_address_tag 1
#define protocol_WitnessUpdateContract_update_url_tag 12
#define protocol_AccountCreateContract_owner_address_tag 1
#define protocol_AccountCreateContract_account_address_tag 2
#define protocol_AccountCreateContract_type_tag  3
#define protocol_AccountUpdateContract_account_name_tag 1
#define protocol_AccountUpdateContract_owner_address_tag 2
#define protocol_AssetIssueContract_owner_address_tag 1
#define protocol_AssetIssueContract_name_tag     2
#define protocol_AssetIssueContract_abbr_tag     3
#define protocol_AssetIssueContract_total_supply_tag 4
#define protocol_AssetIssueContract_frozen_supply_tag 5
#define protocol_AssetIssueContract_trx_num_tag  6
#define protocol_AssetIssueContract_num_tag      8
#define protocol_AssetIssueContract_start_time_tag 9
#define protocol_AssetIssueContract_end_time_tag 10
#define protocol_AssetIssueContract_vote_score_tag 16
#define protocol_AssetIssueContract_description_tag 20
#define protocol_AssetIssueContract_url_tag      21
#define protocol_AssetIssueContract_free_asset_net_limit_tag 22
#define protocol_AssetIssueContract_public_free_asset_net_limit_tag 23
#define protocol_AssetIssueContract_public_free_asset_net_usage_tag 24
#define protocol_AssetIssueContract_public_latest_free_net_time_tag 25
#define protocol_AssetIssueContract_FrozenSupply_frozen_amount_tag 1
#define protocol_AssetIssueContract_FrozenSupply_frozen_days_tag 2
#define protocol_ExchangeCreateContract_owner_address_tag 1
#define protocol_ExchangeCreateContract_first_token_id_tag 2
#define protocol_ExchangeCreateContract_first_token_balance_tag 3
#define protocol_ExchangeCreateContract_second_token_id_tag 4
#define protocol_ExchangeCreateContract_second_token_balance_tag 5
#define protocol_ExchangeInjectContract_owner_address_tag 1
#define protocol_ExchangeInjectContract_exchange_id_tag 2
#define protocol_ExchangeInjectContract_token_id_tag 3
#define protocol_ExchangeInjectContract_quant_tag 4
#define protocol_FreezeBalanceContract_owner_address_tag 1
#define protocol_FreezeBalanceContract_frozen_balance_tag 2
#define protocol_FreezeBalanceContract_frozen_duration_tag 3
#define protocol_FreezeBalanceContract_resource_tag 10
#define protocol_FreezeBalanceContract_receiver_address_tag 15
#define protocol_ParticipateAssetIssueContract_owner_address_tag 1
#define protocol_ParticipateAssetIssueContract_to_address_tag 2
#define protocol_ParticipateAssetIssueContract_asset_name_tag 3
#define protocol_ParticipateAssetIssueContract_amount_tag 4
#define protocol_ProposalApproveContract_owner_address_tag 1
#define protocol_ProposalApproveContract_proposal_id_tag 2
#define protocol_ProposalApproveContract_is_add_approval_tag 3
#define protocol_ProposalCreateContract_ParametersEntry_key_tag 1
#define protocol_ProposalCreateContract_ParametersEntry_value_tag 2
#define protocol_ProposalDeleteContract_owner_address_tag 1
#define protocol_ProposalDeleteContract_proposal_id_tag 2
#define protocol_TransferAssetContract_asset_name_tag 1
#define protocol_TransferAssetContract_owner_address_tag 2
#define protocol_TransferAssetContract_to_address_tag 3
#define protocol_TransferAssetContract_amount_tag 4
#define protocol_TransferContract_owner_address_tag 1
#define protocol_TransferContract_to_address_tag 2
#define protocol_TransferContract_amount_tag     3
#define protocol_TriggerSmartContract_owner_address_tag 1
#define protocol_TriggerSmartContract_contract_address_tag 2
#define protocol_TriggerSmartContract_call_value_tag 3
#define protocol_TriggerSmartContract_data_tag   4
#define protocol_TriggerSmartContract_call_token_value_tag 5
#define protocol_TriggerSmartContract_token_id_tag 6
#define protocol_UnfreezeBalanceContract_owner_address_tag 1
#define protocol_UnfreezeBalanceContract_resource_tag 10
#define protocol_UnfreezeBalanceContract_receiver_address_tag 15
#define protocol_UpdateAssetContract_owner_address_tag 1
#define protocol_UpdateAssetContract_description_tag 2
#define protocol_UpdateAssetContract_url_tag     3
#define protocol_UpdateAssetContract_new_limit_tag 4
#define protocol_UpdateAssetContract_new_public_limit_tag 5
#define protocol_VoteAssetContract_owner_address_tag 1
#define protocol_VoteAssetContract_vote_address_tag 2
#define protocol_VoteAssetContract_support_tag   3
#define protocol_VoteAssetContract_count_tag     5
#define protocol_VoteWitnessContract_Vote_vote_address_tag 1
#define protocol_VoteWitnessContract_Vote_vote_count_tag 2
#define protocol_WithdrawBalanceContract_owner_address_tag 1
#define protocol_ProposalCreateContract_owner_address_tag 1
#define protocol_ProposalCreateContract_parameters_tag 2
#define protocol_VoteWitnessContract_owner_address_tag 1
#define protocol_VoteWitnessContract_votes_tag   2
#define protocol_VoteWitnessContract_support_tag 3

/* Struct field encoding specification for nanopb */
#define protocol_AccountCreateContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    account_address,   2) \
X(a, STATIC,   SINGULAR, UENUM,    type,              3)
#define protocol_AccountCreateContract_CALLBACK pb_default_field_callback
#define protocol_AccountCreateContract_DEFAULT NULL

#define protocol_AccountUpdateContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    account_name,      1) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     2)
#define protocol_AccountUpdateContract_CALLBACK pb_default_field_callback
#define protocol_AccountUpdateContract_DEFAULT NULL

#define protocol_TransferContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, BYTES,    to_address,        2) \
X(a, STATIC,   SINGULAR, INT64,    amount,            3)
#define protocol_TransferContract_CALLBACK NULL
#define protocol_TransferContract_DEFAULT NULL

#define protocol_TransferAssetContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    asset_name,        1) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     2) \
X(a, STATIC,   SINGULAR, BYTES,    to_address,        3) \
X(a, STATIC,   SINGULAR, INT64,    amount,            4)
#define protocol_TransferAssetContract_CALLBACK NULL
#define protocol_TransferAssetContract_DEFAULT NULL

#define protocol_VoteAssetContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, REPEATED, BYTES,    vote_address,      2) \
X(a, STATIC,   SINGULAR, BOOL,     support,           3) \
X(a, STATIC,   SINGULAR, INT32,    count,             5)
#define protocol_VoteAssetContract_CALLBACK pb_default_field_callback
#define protocol_VoteAssetContract_DEFAULT NULL

#define protocol_VoteWitnessContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   REPEATED, MESSAGE,  votes,             2) \
X(a, STATIC,   SINGULAR, BOOL,     support,           3)
#define protocol_VoteWitnessContract_CALLBACK NULL
#define protocol_VoteWitnessContract_DEFAULT NULL
#define protocol_VoteWitnessContract_votes_MSGTYPE protocol_VoteWitnessContract_Vote

#define protocol_VoteWitnessContract_Vote_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    vote_address,      1) \
X(a, STATIC,   SINGULAR, INT64,    vote_count,        2)
#define protocol_VoteWitnessContract_Vote_CALLBACK NULL
#define protocol_VoteWitnessContract_Vote_DEFAULT NULL

#define protocol_WitnessCreateContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    url,               2)
#define protocol_WitnessCreateContract_CALLBACK pb_default_field_callback
#define protocol_WitnessCreateContract_DEFAULT NULL

#define protocol_WitnessUpdateContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    update_url,       12)
#define protocol_WitnessUpdateContract_CALLBACK pb_default_field_callback
#define protocol_WitnessUpdateContract_DEFAULT NULL

#define protocol_AssetIssueContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    name,              2) \
X(a, CALLBACK, SINGULAR, BYTES,    abbr,              3) \
X(a, STATIC,   SINGULAR, INT64,    total_supply,      4) \
X(a, CALLBACK, REPEATED, MESSAGE,  frozen_supply,     5) \
X(a, STATIC,   SINGULAR, INT32,    trx_num,           6) \
X(a, STATIC,   SINGULAR, INT32,    num,               8) \
X(a, STATIC,   SINGULAR, INT64,    start_time,        9) \
X(a, STATIC,   SINGULAR, INT64,    end_time,         10) \
X(a, STATIC,   SINGULAR, INT32,    vote_score,       16) \
X(a, CALLBACK, SINGULAR, BYTES,    description,      20) \
X(a, CALLBACK, SINGULAR, BYTES,    url,              21) \
X(a, STATIC,   SINGULAR, INT64,    free_asset_net_limit,  22) \
X(a, STATIC,   SINGULAR, INT64,    public_free_asset_net_limit,  23) \
X(a, STATIC,   SINGULAR, INT64,    public_free_asset_net_usage,  24) \
X(a, STATIC,   SINGULAR, INT64,    public_latest_free_net_time,  25)
#define protocol_AssetIssueContract_CALLBACK pb_default_field_callback
#define protocol_AssetIssueContract_DEFAULT NULL
#define protocol_AssetIssueContract_frozen_supply_MSGTYPE protocol_AssetIssueContract_FrozenSupply

#define protocol_AssetIssueContract_FrozenSupply_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT64,    frozen_amount,     1) \
X(a, STATIC,   SINGULAR, INT64,    frozen_days,       2)
#define protocol_AssetIssueContract_FrozenSupply_CALLBACK NULL
#define protocol_AssetIssueContract_FrozenSupply_DEFAULT NULL

#define protocol_ParticipateAssetIssueContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    to_address,        2) \
X(a, CALLBACK, SINGULAR, BYTES,    asset_name,        3) \
X(a, STATIC,   SINGULAR, INT64,    amount,            4)
#define protocol_ParticipateAssetIssueContract_CALLBACK pb_default_field_callback
#define protocol_ParticipateAssetIssueContract_DEFAULT NULL

#define protocol_DeployContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    script,            2)
#define protocol_DeployContract_CALLBACK pb_default_field_callback
#define protocol_DeployContract_DEFAULT NULL

#define protocol_FreezeBalanceContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, INT64,    frozen_balance,    2) \
X(a, STATIC,   SINGULAR, INT64,    frozen_duration,   3) \
X(a, STATIC,   SINGULAR, UENUM,    resource,         10) \
X(a, STATIC,   SINGULAR, BYTES,    receiver_address,  15)
#define protocol_FreezeBalanceContract_CALLBACK NULL
#define protocol_FreezeBalanceContract_DEFAULT NULL

#define protocol_UnfreezeBalanceContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, UENUM,    resource,         10) \
X(a, STATIC,   SINGULAR, BYTES,    receiver_address,  15)
#define protocol_UnfreezeBalanceContract_CALLBACK NULL
#define protocol_UnfreezeBalanceContract_DEFAULT NULL

#define protocol_UnfreezeAssetContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1)
#define protocol_UnfreezeAssetContract_CALLBACK pb_default_field_callback
#define protocol_UnfreezeAssetContract_DEFAULT NULL

#define protocol_WithdrawBalanceContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1)
#define protocol_WithdrawBalanceContract_CALLBACK NULL
#define protocol_WithdrawBalanceContract_DEFAULT NULL

#define protocol_UpdateAssetContract_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    owner_address,     1) \
X(a, CALLBACK, SINGULAR, BYTES,    description,       2) \
X(a, CALLBACK, SINGULAR, BYTES,    url,               3) \
X(a, STATIC,   SINGULAR, INT64,    new_limit,         4) \
X(a, STATIC,   SINGULAR, INT64,    new_public_limit,   5)
#define protocol_UpdateAssetContract_CALLBACK pb_default_field_callback
#define protocol_UpdateAssetContract_DEFAULT NULL

#define protocol_ProposalCreateContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   REPEATED, MESSAGE,  parameters,        2)
#define protocol_ProposalCreateContract_CALLBACK NULL
#define protocol_ProposalCreateContract_DEFAULT NULL
#define protocol_ProposalCreateContract_parameters_MSGTYPE protocol_ProposalCreateContract_ParametersEntry

#define protocol_ProposalCreateContract_ParametersEntry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT64,    key,               1) \
X(a, STATIC,   SINGULAR, INT64,    value,             2)
#define protocol_ProposalCreateContract_ParametersEntry_CALLBACK NULL
#define protocol_ProposalCreateContract_ParametersEntry_DEFAULT NULL

#define protocol_ProposalApproveContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, INT64,    proposal_id,       2) \
X(a, STATIC,   SINGULAR, BOOL,     is_add_approval,   3)
#define protocol_ProposalApproveContract_CALLBACK NULL
#define protocol_ProposalApproveContract_DEFAULT NULL

#define protocol_ProposalDeleteContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, INT64,    proposal_id,       2)
#define protocol_ProposalDeleteContract_CALLBACK NULL
#define protocol_ProposalDeleteContract_DEFAULT NULL

#define protocol_TriggerSmartContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, BYTES,    contract_address,   2) \
X(a, STATIC,   SINGULAR, INT64,    call_value,        3) \
X(a, STATIC,   SINGULAR, BYTES,    data,              4) \
X(a, STATIC,   SINGULAR, INT64,    call_token_value,   5) \
X(a, STATIC,   SINGULAR, INT64,    token_id,          6)
#define protocol_TriggerSmartContract_CALLBACK NULL
#define protocol_TriggerSmartContract_DEFAULT NULL

#define protocol_ExchangeCreateContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, BYTES,    first_token_id,    2) \
X(a, STATIC,   SINGULAR, INT64,    first_token_balance,   3) \
X(a, STATIC,   SINGULAR, BYTES,    second_token_id,   4) \
X(a, STATIC,   SINGULAR, INT64,    second_token_balance,   5)
#define protocol_ExchangeCreateContract_CALLBACK NULL
#define protocol_ExchangeCreateContract_DEFAULT NULL

#define protocol_ExchangeInjectContract_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    owner_address,     1) \
X(a, STATIC,   SINGULAR, INT64,    exchange_id,       2) \
X(a, STATIC,   SINGULAR, BYTES,    token_id,          3) \
X(a, STATIC,   SINGULAR, INT64,    quant,             4)
#define protocol_ExchangeInjectContract_CALLBACK NULL
#define protocol_ExchangeInjectContract_DEFAULT NULL

extern const pb_msgdesc_t protocol_AccountCreateContract_msg;
extern const pb_msgdesc_t protocol_AccountUpdateContract_msg;
extern const pb_msgdesc_t protocol_TransferContract_msg;
extern const pb_msgdesc_t protocol_TransferAssetContract_msg;
extern const pb_msgdesc_t protocol_VoteAssetContract_msg;
extern const pb_msgdesc_t protocol_VoteWitnessContract_msg;
extern const pb_msgdesc_t protocol_VoteWitnessContract_Vote_msg;
extern const pb_msgdesc_t protocol_WitnessCreateContract_msg;
extern const pb_msgdesc_t protocol_WitnessUpdateContract_msg;
extern const pb_msgdesc_t protocol_AssetIssueContract_msg;
extern const pb_msgdesc_t protocol_AssetIssueContract_FrozenSupply_msg;
extern const pb_msgdesc_t protocol_ParticipateAssetIssueContract_msg;
extern const pb_msgdesc_t protocol_DeployContract_msg;
extern const pb_msgdesc_t protocol_FreezeBalanceContract_msg;
extern const pb_msgdesc_t protocol_UnfreezeBalanceContract_msg;
extern const pb_msgdesc_t protocol_UnfreezeAssetContract_msg;
extern const pb_msgdesc_t protocol_WithdrawBalanceContract_msg;
extern const pb_msgdesc_t protocol_UpdateAssetContract_msg;
extern const pb_msgdesc_t protocol_ProposalCreateContract_msg;
extern const pb_msgdesc_t protocol_ProposalCreateContract_ParametersEntry_msg;
extern const pb_msgdesc_t protocol_ProposalApproveContract_msg;
extern const pb_msgdesc_t protocol_ProposalDeleteContract_msg;
extern const pb_msgdesc_t protocol_TriggerSmartContract_msg;
extern const pb_msgdesc_t protocol_ExchangeCreateContract_msg;
extern const pb_msgdesc_t protocol_ExchangeInjectContract_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define protocol_AccountCreateContract_fields &protocol_AccountCreateContract_msg
#define protocol_AccountUpdateContract_fields &protocol_AccountUpdateContract_msg
#define protocol_TransferContract_fields &protocol_TransferContract_msg
#define protocol_TransferAssetContract_fields &protocol_TransferAssetContract_msg
#define protocol_VoteAssetContract_fields &protocol_VoteAssetContract_msg
#define protocol_VoteWitnessContract_fields &protocol_VoteWitnessContract_msg
#define protocol_VoteWitnessContract_Vote_fields &protocol_VoteWitnessContract_Vote_msg
#define protocol_WitnessCreateContract_fields &protocol_WitnessCreateContract_msg
#define protocol_WitnessUpdateContract_fields &protocol_WitnessUpdateContract_msg
#define protocol_AssetIssueContract_fields &protocol_AssetIssueContract_msg
#define protocol_AssetIssueContract_FrozenSupply_fields &protocol_AssetIssueContract_FrozenSupply_msg
#define protocol_ParticipateAssetIssueContract_fields &protocol_ParticipateAssetIssueContract_msg
#define protocol_DeployContract_fields &protocol_DeployContract_msg
#define protocol_FreezeBalanceContract_fields &protocol_FreezeBalanceContract_msg
#define protocol_UnfreezeBalanceContract_fields &protocol_UnfreezeBalanceContract_msg
#define protocol_UnfreezeAssetContract_fields &protocol_UnfreezeAssetContract_msg
#define protocol_WithdrawBalanceContract_fields &protocol_WithdrawBalanceContract_msg
#define protocol_UpdateAssetContract_fields &protocol_UpdateAssetContract_msg
#define protocol_ProposalCreateContract_fields &protocol_ProposalCreateContract_msg
#define protocol_ProposalCreateContract_ParametersEntry_fields &protocol_ProposalCreateContract_ParametersEntry_msg
#define protocol_ProposalApproveContract_fields &protocol_ProposalApproveContract_msg
#define protocol_ProposalDeleteContract_fields &protocol_ProposalDeleteContract_msg
#define protocol_TriggerSmartContract_fields &protocol_TriggerSmartContract_msg
#define protocol_ExchangeCreateContract_fields &protocol_ExchangeCreateContract_msg
#define protocol_ExchangeInjectContract_fields &protocol_ExchangeInjectContract_msg

/* Maximum encoded size of messages (where known) */
/* protocol_AccountCreateContract_size depends on runtime parameters */
/* protocol_AccountUpdateContract_size depends on runtime parameters */
#define protocol_TransferContract_size           57
#define protocol_TransferAssetContract_size      75
/* protocol_VoteAssetContract_size depends on runtime parameters */
#define protocol_VoteWitnessContract_size        205
#define protocol_VoteWitnessContract_Vote_size   34
/* protocol_WitnessCreateContract_size depends on runtime parameters */
/* protocol_WitnessUpdateContract_size depends on runtime parameters */
/* protocol_AssetIssueContract_size depends on runtime parameters */
#define protocol_AssetIssueContract_FrozenSupply_size 22
/* protocol_ParticipateAssetIssueContract_size depends on runtime parameters */
/* protocol_DeployContract_size depends on runtime parameters */
#define protocol_FreezeBalanceContract_size      70
#define protocol_UnfreezeBalanceContract_size    48
/* protocol_UnfreezeAssetContract_size depends on runtime parameters */
#define protocol_WithdrawBalanceContract_size    23
/* protocol_UpdateAssetContract_size depends on runtime parameters */
#define protocol_ProposalCreateContract_size     263
#define protocol_ProposalCreateContract_ParametersEntry_size 22
#define protocol_ProposalApproveContract_size    36
#define protocol_ProposalDeleteContract_size     34
#define protocol_TriggerSmartContract_size       210
#define protocol_ExchangeCreateContract_size     65
#define protocol_ExchangeInjectContract_size     55

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
