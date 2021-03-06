/*  RetroArch JoyConfig.
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

#include "retroarch-joyconfig.c"

#if defined(__linux) && !defined(ANDROID)
#include "../input/linuxraw_input.c"
#include "../input/linuxraw_joypad.c"
#endif

#if defined(HAVE_DINPUT)
#include "../input/dinput.c"
#endif

#if defined(HAVE_WINXINPUT)
#include "../input/winxinput_joypad.c"
#endif

#if defined(HAVE_UDEV)
#include "../input/udev_joypad.c"
#endif

#if defined(HAVE_PARPORT)
#include "../input/parport_joypad.c"
#endif

#if defined(HAVE_SDL) || defined(HAVE_SDL2)
#include "../input/sdl_joypad.c"
#endif

#include "../libretro-sdk/file/config_file.c"
#include "../libretro-sdk/file/file_path.c"
#include "../libretro-sdk/string/string_list.c"
#include "../libretro-sdk/compat/compat.c"

#include "../input/nullinput.c"
#include "../input/nullinput_joypad.c"

#include "../input/input_context.c"
#include "../input/input_common.c"
#include "../input/input_keymaps.c"

#include "../message_queue.c"
