/*
  Created by Fabrizio Di Vittorio (fdivitto2013@gmail.com) - <http://www.fabgl.com>
  Copyright (c) 2019-2020 Fabrizio Di Vittorio.
  All rights reserved.

  This file is part of FabGL Library.

  FabGL is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  FabGL is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with FabGL.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once



/**
 * @file
 *
 * @brief This file contains keyboard layouts
 */



#include <stdint.h>

#include "fabutils.h"




namespace fabgl {



/**
 * @brief Associates scancode to virtualkey.
 */
struct VirtualKeyDef {
  uint8_t      scancode;    /**< Raw scancode received from the Keyboard device */
  VirtualKey   virtualKey;  /**< Real virtualkey (non shifted) associated to the scancode */
};


/**
 * @brief Associates a virtualkey and various shift states (ctrl, alt, etc..) to another virtualkey.
 */
struct AltVirtualKeyDef {
  VirtualKey reqVirtualKey; /**< Source virtualkey translated using VirtualKeyDef. */
  struct {
    uint8_t ctrl     : 1;   /**< CTRL needs to be down. */
    uint8_t lalt     : 1;   /**< LEFT-ALT needs to be down. */
    uint8_t ralt     : 1;   /**< RIGHT-ALT needs to be down. */
    uint8_t shift    : 1;   /**< SHIFT needs to be down (OR-ed with capslock). */
    uint8_t capslock : 1;   /**< CAPSLOCK needs to be down (OR-ed with shift). */
  };
  VirtualKey virtualKey;    /**< Generated virtualkey. */
};


struct DeadKeyVirtualKeyDef {
  VirtualKey   deadKey;         /**< Currently pressed dead key */
  VirtualKey   reqVirtualKey;   /**< Currently pressed virtual key */
  VirtualKey   virtualKey;      /**< Virtual key result */
};


/** @brief All in one structure to fully represent a keyboard layout */
struct KeyboardLayout {
  const char *             name;                /**< Layout name. */
  const char *             desc;                /**< Layout description. */
  KeyboardLayout const *   inherited;           /**< Inherited layout. Useful to avoid to repeat the same scancode-virtualkeys associations. */
  VirtualKeyDef            scancodeToVK[92];    /**< Direct one-byte-scancode->virtualkey associations. */
  VirtualKeyDef            exScancodeToVK[32];  /**< Direct extended-scancode->virtualkey associations. Extended scancodes begin with 0xE0. */
  AltVirtualKeyDef         alternateVK[64];     /**< Virtualkeys generated by other virtualkeys and shift combinations. */

  VirtualKey               deadKeysVK[8];       /**< Dead keys identifiers. */
  DeadKeyVirtualKeyDef     deadkeysToVK[64];    /**< Translation dead key + virtual key = replaced virtual key */
};



/** @brief Predefined US layout. Often used as inherited layout for other layouts. */
extern const KeyboardLayout USLayout;

/** @brief UK keyboard layout */
extern const KeyboardLayout UKLayout;

/** @brief German keyboard layout */
extern const KeyboardLayout GermanLayout;

/** @brief Italian keyboard layout */
extern const KeyboardLayout ItalianLayout;

/** @brief Spanish keyboard layout */
extern const KeyboardLayout SpanishLayout;


struct SupportedLayouts {
  static int count()               { return 5; }
  static char const * * names() {
    static char const * NAMES[] =  {
        GermanLayout.desc,
        ItalianLayout.desc,
        UKLayout.desc,
        USLayout.desc,
        SpanishLayout.desc };
    return NAMES;
  }
  static char const * * shortNames() {
    static char const * SNAMES[] = {
        GermanLayout.name,
        ItalianLayout.name,
        UKLayout.name,
        USLayout.name,
        SpanishLayout.name };
    return SNAMES;
  }
  static const KeyboardLayout * * layouts() {
    static KeyboardLayout const * LAYOUTS[] = {
        &GermanLayout,
        &ItalianLayout,
        &UKLayout,
        &USLayout,
        &SpanishLayout };
    return LAYOUTS;
  }
};



} // end of namespace
