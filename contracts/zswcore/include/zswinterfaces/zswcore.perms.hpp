/*

This file is not used for the actual zswperms contract.
It can be used as a header file for other contracts to access the zswperms tables
and custom data types.

*/

#include <eosio/eosio.hpp>

using namespace eosio;
typedef unsigned __int128 uint128_t;
#define ZSW_CORE_PERMS_SETCODE 1<<0
#define ZSW_CORE_PERMS_TRANSFER_TOKEN 1<<1

namespace zswcore {

    TABLE s_permissions
    {
        eosio::name user;
        uint128_t perm_bits;
        uint64_t primary_key() const { return user.value; }
    };
    typedef multi_index <eosio::name("permissions"), s_permissions> t_permissions;

}