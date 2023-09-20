/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef _CONN_BRIDGE_CONTROL_COMMON_H_
#define _CONN_BRIDGE_CONTROL_COMMON_H_

/**
 * @file control_common.h
 *
 * @brief Common header for connectivity bridge control registers
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <zephyr/types.h>

struct conn_bridge_ctrl_reg_definition {
        uint16_t address;
        uint16_t size;
};

#define DEFINE_CONN_BRIDGE_CTRL_REG(address, name, type)                                        \
struct conn_bridge_ctrl_reg_definition conn_bridge_ctrl_reg_definition_##name = {               \
        .address = address,                                                                     \
        .size = sizeof(type)                                                                    \
};                                                                                              \

#define GEN_CONN_BRIDGE_CTRL_HOST_SETTER(name, type)                                            \
void conn_bridge_ctrl_set_##name(##type input) {                                                \
        virtual_eeprom_write(eeprom, )                                                          \
}                                                                                               \

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* _CONN_BRIDGE_CONTROL_COMMON_H_ */
