/*
 * Copyright (C) 2023 Daniel Volk <mail@volkarts.com>
 *
 * This file is part of 6502emu - 6502 cycle accurate emulator gui.
 *
 * 6502emu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * You should have received a copy of the GNU General Public License
 * along with 6502emu. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <array>
#include <cinttypes>

using CGROMType = std::array<uint8_t, 256*8>;

constexpr CGROMType characterRom{
    0x00, 0x08, 0x0c, 0x0e, 0x0f, 0x0e, 0x0c, 0x08,
    0x00, 0x02, 0x06, 0x0e, 0x1e, 0x0e, 0x06, 0x02,
    0x00, 0x09, 0x12, 0x1b, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1b, 0x09, 0x12, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x0e, 0x1f, 0x00, 0x04, 0x0e, 0x1f,
    0x00, 0x1f, 0x0e, 0x04, 0x00, 0x1f, 0x0e, 0x04,
    0x00, 0x00, 0x0e, 0x1f, 0x1f, 0x1f, 0x0e, 0x00,
    0x00, 0x01, 0x01, 0x05, 0x09, 0x1f, 0x08, 0x04,
    0x00, 0x04, 0x0e, 0x15, 0x04, 0x04, 0x04, 0x04,
    0x00, 0x04, 0x04, 0x04, 0x04, 0x15, 0x0e, 0x04,
    0x00, 0x00, 0x04, 0x02, 0x1f, 0x02, 0x04, 0x00,
    0x00, 0x00, 0x04, 0x08, 0x1f, 0x08, 0x04, 0x00,
    0x00, 0x02, 0x04, 0x08, 0x04, 0x02, 0x00, 0x1f,
    0x00, 0x08, 0x04, 0x02, 0x04, 0x08, 0x00, 0x1f,
    0x00, 0x00, 0x04, 0x04, 0x0e, 0x0e, 0x1f, 0x00,
    0x00, 0x00, 0x1f, 0x0e, 0x0e, 0x04, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04,
    0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0a, 0x0a, 0x1f, 0x0a, 0x1f, 0x0a, 0x0a,
    0x00, 0x04, 0x0f, 0x14, 0x0e, 0x05, 0x1e, 0x04,
    0x00, 0x18, 0x19, 0x02, 0x04, 0x08, 0x13, 0x03,
    0x00, 0x0c, 0x12, 0x14, 0x08, 0x15, 0x12, 0x0d,
    0x00, 0x0c, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02,
    0x00, 0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08,
    0x00, 0x00, 0x04, 0x15, 0x0e, 0x15, 0x04, 0x00,
    0x00, 0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c,
    0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x00,
    0x00, 0x0e, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0e,
    0x00, 0x04, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x0e,
    0x00, 0x0e, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1f,
    0x00, 0x1f, 0x02, 0x04, 0x02, 0x01, 0x11, 0x0e,
    0x00, 0x02, 0x06, 0x0a, 0x12, 0x1f, 0x02, 0x02,
    0x00, 0x1f, 0x10, 0x1e, 0x01, 0x01, 0x11, 0x0e,
    0x00, 0x06, 0x08, 0x10, 0x1e, 0x11, 0x11, 0x0e,
    0x00, 0x1f, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08,
    0x00, 0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e,
    0x00, 0x0e, 0x11, 0x11, 0x0f, 0x01, 0x02, 0x0c,
    0x00, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00,
    0x00, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x04, 0x08,
    0x00, 0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02,
    0x00, 0x00, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x00,
    0x00, 0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08,
    0x00, 0x0e, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04,
    0x00, 0x0e, 0x11, 0x01, 0x0d, 0x15, 0x15, 0x0e,
    0x00, 0x04, 0x0a, 0x11, 0x11, 0x1f, 0x11, 0x11,
    0x00, 0x1e, 0x11, 0x11, 0x1e, 0x11, 0x11, 0x1e,
    0x00, 0x0e, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0e,
    0x00, 0x1c, 0x12, 0x11, 0x11, 0x11, 0x12, 0x1c,
    0x00, 0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x1f,
    0x00, 0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x10,
    0x00, 0x0e, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0f,
    0x00, 0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11,
    0x00, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e,
    0x00, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0c,
    0x00, 0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11,
    0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
    0x00, 0x11, 0x1b, 0x15, 0x15, 0x11, 0x11, 0x11,
    0x00, 0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x11,
    0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10, 0x10,
    0x00, 0x0e, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0d,
    0x00, 0x1e, 0x11, 0x11, 0x1e, 0x14, 0x12, 0x11,
    0x00, 0x0f, 0x10, 0x10, 0x0e, 0x01, 0x01, 0x1e,
    0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x04,
    0x00, 0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0a,
    0x00, 0x11, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x11,
    0x00, 0x11, 0x11, 0x11, 0x0a, 0x04, 0x04, 0x04,
    0x00, 0x1f, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1f,
    0x00, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e,
    0x00, 0x00, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00,
    0x00, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0e,
    0x00, 0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
    0x00, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x00, 0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x1e,
    0x00, 0x00, 0x00, 0x0e, 0x10, 0x10, 0x11, 0x0e,
    0x00, 0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x0f,
    0x00, 0x00, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e,
    0x00, 0x06, 0x09, 0x08, 0x1c, 0x08, 0x08, 0x08,
    0x00, 0x00, 0x0f, 0x11, 0x11, 0x0f, 0x01, 0x0e,
    0x00, 0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x11,
    0x00, 0x04, 0x00, 0x04, 0x0c, 0x04, 0x04, 0x0e,
    0x00, 0x02, 0x00, 0x06, 0x02, 0x02, 0x12, 0x0c,
    0x00, 0x10, 0x10, 0x12, 0x14, 0x18, 0x14, 0x12,
    0x00, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1f,
    0x00, 0x00, 0x00, 0x1a, 0x15, 0x15, 0x11, 0x11,
    0x00, 0x00, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11,
    0x00, 0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x00, 0x00, 0x1e, 0x11, 0x1e, 0x10, 0x10,
    0x00, 0x00, 0x00, 0x0d, 0x13, 0x0f, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x16, 0x19, 0x10, 0x10, 0x10,
    0x00, 0x00, 0x00, 0x0e, 0x10, 0x0e, 0x01, 0x1e,
    0x00, 0x08, 0x08, 0x1c, 0x08, 0x08, 0x09, 0x06,
    0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d,
    0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x0a, 0x04,
    0x00, 0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0a,
    0x00, 0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11,
    0x00, 0x00, 0x00, 0x11, 0x11, 0x0f, 0x01, 0x0e,
    0x00, 0x00, 0x00, 0x1f, 0x02, 0x04, 0x08, 0x1f,
    0x00, 0x02, 0x04, 0x04, 0x08, 0x04, 0x04, 0x02,
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x00, 0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x0d, 0x12, 0x00, 0x00,
    0x00, 0x04, 0x0a, 0x11, 0x11, 0x11, 0x1f, 0x00,
    0x00, 0x1f, 0x11, 0x10, 0x1e, 0x11, 0x11, 0x1e,
    0x0f, 0x05, 0x05, 0x09, 0x11, 0x1f, 0x11, 0x11,
    0x00, 0x15, 0x15, 0x15, 0x0e, 0x15, 0x15, 0x15,
    0x00, 0x1e, 0x01, 0x01, 0x06, 0x01, 0x01, 0x1e,
    0x00, 0x11, 0x11, 0x13, 0x15, 0x19, 0x11, 0x11,
    0x0a, 0x04, 0x11, 0x13, 0x15, 0x19, 0x11, 0x11,
    0x00, 0x0f, 0x05, 0x05, 0x05, 0x05, 0x15, 0x09,
    0x00, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x00, 0x11, 0x11, 0x11, 0x0a, 0x04, 0x08, 0x10,
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1f, 0x01,
    0x00, 0x11, 0x11, 0x11, 0x0f, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1f,
    0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1f, 0x01,
    0x00, 0x18, 0x08, 0x08, 0x0e, 0x09, 0x09, 0x0e,
    0x00, 0x11, 0x11, 0x11, 0x19, 0x15, 0x15, 0x19,
    0x00, 0x0e, 0x11, 0x05, 0x0b, 0x01, 0x11, 0x0e,
    0x00, 0x00, 0x00, 0x09, 0x15, 0x12, 0x12, 0x0d,
    0x00, 0x04, 0x06, 0x05, 0x05, 0x04, 0x1c, 0x1c,
    0x00, 0x1f, 0x11, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x00, 0x00, 0x00, 0x1f, 0x0a, 0x0a, 0x0a, 0x13,
    0x00, 0x1f, 0x10, 0x08, 0x04, 0x08, 0x10, 0x1f,
    0x00, 0x00, 0x00, 0x0f, 0x12, 0x12, 0x12, 0x0c,
    0x06, 0x05, 0x07, 0x05, 0x05, 0x1d, 0x1b, 0x03,
    0x00, 0x00, 0x01, 0x0e, 0x14, 0x04, 0x04, 0x02,
    0x00, 0x04, 0x0e, 0x0e, 0x0e, 0x1f, 0x04, 0x00,
    0x00, 0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x0e,
    0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0a, 0x1b,
    0x00, 0x06, 0x09, 0x04, 0x0a, 0x11, 0x11, 0x0e,
    0x00, 0x00, 0x00, 0x0b, 0x15, 0x1a, 0x00, 0x00,
    0x00, 0x00, 0x0a, 0x1f, 0x1f, 0x1f, 0x0e, 0x04,
    0x00, 0x00, 0x00, 0x0e, 0x10, 0x0c, 0x11, 0x0e,
    0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b,
    0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04,
    0x00, 0x04, 0x0e, 0x14, 0x14, 0x15, 0x0e, 0x04,
    0x00, 0x06, 0x08, 0x08, 0x1c, 0x08, 0x09, 0x16,
    0x00, 0x00, 0x11, 0x0e, 0x0a, 0x0e, 0x11, 0x00,
    0x00, 0x11, 0x0a, 0x1f, 0x04, 0x1f, 0x04, 0x04,
    0x00, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04,
    0x00, 0x06, 0x09, 0x04, 0x0a, 0x04, 0x12, 0x0c,
    0x00, 0x02, 0x05, 0x04, 0x1f, 0x04, 0x14, 0x08,
    0x00, 0x1f, 0x11, 0x15, 0x17, 0x15, 0x11, 0x1f,
    0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f, 0x00, 0x1f,
    0x00, 0x00, 0x05, 0x0a, 0x14, 0x0a, 0x05, 0x00,
    0x00, 0x12, 0x15, 0x15, 0x1d, 0x15, 0x15, 0x12,
    0x00, 0x0f, 0x11, 0x11, 0x0f, 0x05, 0x09, 0x11,
    0x00, 0x1f, 0x11, 0x15, 0x11, 0x13, 0x15, 0x1f,
    0x00, 0x04, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x12, 0x12, 0x12, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0x1f,
    0x0c, 0x12, 0x04, 0x08, 0x1e, 0x00, 0x00, 0x00,
    0x1c, 0x02, 0x0c, 0x02, 0x1c, 0x00, 0x00, 0x00,
    0x1c, 0x12, 0x1c, 0x10, 0x12, 0x17, 0x12, 0x03,
    0x00, 0x11, 0x11, 0x11, 0x13, 0x1d, 0x10, 0x10,
    0x00, 0x0f, 0x13, 0x13, 0x0f, 0x03, 0x03, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0a, 0x11, 0x15, 0x15, 0x0a,
    0x08, 0x18, 0x08, 0x08, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x1f,
    0x00, 0x00, 0x14, 0x0a, 0x05, 0x0a, 0x14, 0x00,
    0x11, 0x12, 0x14, 0x0a, 0x16, 0x0a, 0x0f, 0x02,
    0x11, 0x12, 0x14, 0x0a, 0x15, 0x01, 0x02, 0x07,
    0x18, 0x08, 0x18, 0x09, 0x1b, 0x05, 0x07, 0x01,
    0x00, 0x04, 0x00, 0x04, 0x08, 0x10, 0x11, 0x0e,
    0x08, 0x04, 0x04, 0x0a, 0x11, 0x1f, 0x11, 0x11,
    0x02, 0x04, 0x04, 0x0a, 0x11, 0x1f, 0x11, 0x11,
    0x04, 0x0a, 0x00, 0x0e, 0x11, 0x1f, 0x11, 0x11,
    0x0d, 0x12, 0x00, 0x0e, 0x11, 0x1f, 0x11, 0x11,
    0x0a, 0x00, 0x04, 0x0a, 0x11, 0x1f, 0x11, 0x11,
    0x04, 0x0a, 0x04, 0x0a, 0x11, 0x1f, 0x11, 0x11,
    0x00, 0x07, 0x0c, 0x14, 0x17, 0x1c, 0x14, 0x17,
    0x0e, 0x11, 0x10, 0x10, 0x11, 0x0e, 0x02, 0x06,
    0x08, 0x04, 0x00, 0x1f, 0x10, 0x1e, 0x10, 0x1f,
    0x02, 0x04, 0x00, 0x1f, 0x10, 0x1e, 0x10, 0x1f,
    0x04, 0x0a, 0x00, 0x1f, 0x10, 0x1e, 0x10, 0x1f,
    0x00, 0x0a, 0x00, 0x1f, 0x10, 0x1e, 0x10, 0x1f,
    0x08, 0x04, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x0e,
    0x02, 0x04, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x0e,
    0x04, 0x0a, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x0e,
    0x00, 0x0a, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x0e,
    0x00, 0x0e, 0x09, 0x09, 0x1d, 0x09, 0x09, 0x0e,
    0x0d, 0x12, 0x00, 0x11, 0x19, 0x15, 0x13, 0x11,
    0x08, 0x04, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x02, 0x04, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x04, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x0d, 0x12, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x00,
    0x00, 0x0e, 0x04, 0x0e, 0x15, 0x0e, 0x04, 0x0e,
    0x08, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x02, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x04, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e,
    0x02, 0x04, 0x11, 0x0a, 0x04, 0x04, 0x04, 0x04,
    0x18, 0x08, 0x0e, 0x09, 0x09, 0x0e, 0x08, 0x1c,
    0x00, 0x06, 0x09, 0x09, 0x0e, 0x09, 0x09, 0x16,
    0x08, 0x04, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x02, 0x04, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x04, 0x0a, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x0d, 0x12, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x00, 0x0a, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x04, 0x0a, 0x04, 0x0e, 0x01, 0x0f, 0x11, 0x0f,
    0x00, 0x00, 0x1a, 0x05, 0x0f, 0x14, 0x15, 0x0a,
    0x00, 0x00, 0x0e, 0x10, 0x11, 0x0e, 0x04, 0x0c,
    0x08, 0x04, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e,
    0x02, 0x04, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e,
    0x04, 0x0a, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e,
    0x00, 0x0a, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e,
    0x08, 0x04, 0x00, 0x04, 0x0c, 0x04, 0x04, 0x0e,
    0x02, 0x04, 0x00, 0x04, 0x0c, 0x04, 0x04, 0x0e,
    0x04, 0x0a, 0x00, 0x04, 0x0c, 0x04, 0x04, 0x0e,
    0x00, 0x0a, 0x00, 0x04, 0x0c, 0x04, 0x04, 0x0e,
    0x00, 0x14, 0x08, 0x14, 0x02, 0x0f, 0x11, 0x0e,
    0x0d, 0x12, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11,
    0x08, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x02, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x04, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x0e,
    0x00, 0x0d, 0x12, 0x00, 0x0e, 0x11, 0x11, 0x0e,
    0x00, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e,
    0x00, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x04, 0x00,
    0x00, 0x02, 0x04, 0x0e, 0x15, 0x0e, 0x04, 0x08,
    0x08, 0x04, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d,
    0x02, 0x04, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d,
    0x04, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d,
    0x00, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d,
    0x02, 0x04, 0x00, 0x11, 0x11, 0x0f, 0x01, 0x0e,
    0x00, 0x0c, 0x04, 0x06, 0x05, 0x06, 0x04, 0x0e,
    0x00, 0x0a, 0x00, 0x11, 0x11, 0x0f, 0x01, 0x0e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
