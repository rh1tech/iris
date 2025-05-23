// Iris: Serial Terminal
// Copyright (C) 2024 Mikhail Matveev (@rh1tech)
// Based on VersaTerm by David Hansel, copyright (C) 2022 David Hansel
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
// -----------------------------------------------------------------------------

#ifndef FLASH_H
#define FLASH_H

#include "pico/stdlib.h"

uint32_t flash_get_write_offset(uint8_t sector);
uint8_t *flash_get_read_ptr(uint8_t sector);
size_t flash_get_sector_size();
int flash_write(uint8_t sector, const void *data, size_t length);
int flash_write_partial(uint8_t sector, const void *data, size_t position, size_t size);
void flash_read(uint8_t sector, void *data, size_t length);

#endif
