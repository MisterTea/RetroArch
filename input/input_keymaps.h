/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2015 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INPUT_KEYMAPS_H__
#define INPUT_KEYMAPS_H__

#include <file/config_file.h>
#include <stdint.h>
#include "../driver.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rarch_key_map
{
   unsigned sym;
   enum retro_key rk;
};

struct input_key_map
{
   const char *str;
   enum retro_key key;
};
extern const struct input_key_map input_config_key_map[];

extern const struct rarch_key_map rarch_key_map_x11[];
extern const struct rarch_key_map rarch_key_map_sdl[];
extern const struct rarch_key_map rarch_key_map_sdl2[];
extern const struct rarch_key_map rarch_key_map_dinput[];
extern const struct rarch_key_map rarch_key_map_rwebinput[];
extern const struct rarch_key_map rarch_key_map_linux[];
extern const struct rarch_key_map rarch_key_map_apple_hid[];

void input_init_keyboard_lut(const struct rarch_key_map *map);
enum retro_key input_translate_keysym_to_rk(unsigned sym);
unsigned input_translate_rk_to_keysym(enum retro_key key);

#ifdef __cplusplus
}
#endif

#endif

