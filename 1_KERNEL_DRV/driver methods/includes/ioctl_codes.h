#pragma once


#define code_read_physical CTL_CODE(FILE_DEVICE_UNKNOWN, 0x5F7A03, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_elevate_process CTL_CODE(FILE_DEVICE_UNKNOWN, 0xCB7901, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_read_virtual CTL_CODE(FILE_DEVICE_UNKNOWN, 0x929, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_get_module_address CTL_CODE(FILE_DEVICE_UNKNOWN, 0x948CBB, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_write CTL_CODE(FILE_DEVICE_UNKNOWN, 0xAD3A9F, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_get_base_address CTL_CODE(FILE_DEVICE_UNKNOWN, 0x772CBF, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_decrypt_cr3 CTL_CODE(FILE_DEVICE_UNKNOWN, 0x4141CE, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_move_mouse CTL_CODE(FILE_DEVICE_UNKNOWN, 0x5E86B8, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_hide_process CTL_CODE(FILE_DEVICE_UNKNOWN, 0x656, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define code_restart_driver CTL_CODE(FILE_DEVICE_UNKNOWN, 0x302, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
