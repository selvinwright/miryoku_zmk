// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#include "miryoku_layer_alternatives.h"

#if !defined(MIRYOKU_LAYER_BASE)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_ALPHAS_AZERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP
    #elif defined (MIRYOKU_ALPHAS_BEAKL15)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDH)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDHK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_ALPHAS_DVORAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_HALMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP
    #elif defined (MIRYOKU_ALPHAS_WORKMAN)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP
    #elif defined (MIRYOKU_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #elif defined (MIRYOKU_ALPHAS_QWERTZ)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #endif
  #else
    #if defined (MIRYOKU_ALPHAS_AZERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_ALPHAS_BEAKL15)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_ALPHAS_COLEMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDH)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDHK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_ALPHAS_DVORAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_ALPHAS_HALMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_ALPHAS_WORKMAN)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (NEUEZIEL_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE NEUEZIEL_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_ALPHAS_QWERTZ)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BASE)
  #define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_EXTRA)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_EXTRA_AZERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP
    #elif defined (MIRYOKU_EXTRA_BEAKL15)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAKDH)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_EXTRA_COLEMAKDHK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_EXTRA_DVORAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP
    #elif defined (MIRYOKU_EXTRA_HALMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP
    #elif defined (MIRYOKU_EXTRA_WORKMAN)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP
    #elif defined (MIRYOKU_EXTRA_QWERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #elif defined (MIRYOKU_EXTRA_QWERTZ)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
    #endif
  #else
    #if defined (MIRYOKU_EXTRA_AZERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_EXTRA_BEAKL15)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_EXTRA_COLEMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_EXTRA_COLEMAKDH)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_EXTRA_COLEMAKDHK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_EXTRA_DVORAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_EXTRA_HALMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_EXTRA_WORKMAN)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_EXTRA_QWERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_EXTRA_QWERTZ)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_EXTRA)
  #define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_TAP)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_TAP_AZERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP
    #elif defined (MIRYOKU_TAP_BEAKL15)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAKDH)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP
    #elif defined (MIRYOKU_TAP_COLEMAKDHK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP
    #elif defined (MIRYOKU_TAP_DVORAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP
    #elif defined (MIRYOKU_TAP_HALMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP
    #elif defined (MIRYOKU_TAP_WORKMAN)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP
    #elif defined (MIRYOKU_TAP_QWERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP
    #elif defined (MIRYOKU_TAP_QWERTZ)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP
    #else
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP
    #endif
  #else
    #if defined (MIRYOKU_TAP_AZERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_AZERTY
    #elif defined (MIRYOKU_TAP_BEAKL15)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_BEAKL15
    #elif defined (MIRYOKU_TAP_COLEMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAK
    #elif defined (MIRYOKU_TAP_COLEMAKDH)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #elif defined (MIRYOKU_TAP_COLEMAKDHK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK
    #elif defined (MIRYOKU_TAP_DVORAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_DVORAK
    #elif defined (MIRYOKU_TAP_HALMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_HALMAK
    #elif defined (MIRYOKU_TAP_WORKMAN)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_WORKMAN
    #elif defined (MIRYOKU_TAP_QWERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY
    #elif defined (MIRYOKU_TAP_QWERTZ)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTZ
    #else
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_TAP)
  #define MIRYOKU_LAYERMAPPING_TAP MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_BUTTON)
  #define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BUTTON)
  #define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NAV)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT
    #elif defined (NEUEZIEL_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV NEUEZIEL_ALTERNATIVES_NAV_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI
    #else
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NAV)
  #define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MOUSE)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_VI
    #else
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_MOUSE)
  #define MIRYOKU_LAYERMAPPING_MOUSE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MEDIA)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP
    #else
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_FLIP
    #endif
  #else
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_VI
    #else
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_MEDIA)
  #define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NUM)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_FLIP
  #else
    #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NUM)
  #define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_SYM)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_FLIP
  #else
    #if defined(NEUEZIEL_SYM)
    #define MIRYOKU_LAYER_SYM NEUEZIEL_ALTERNATIVES_SYM
    #else
      #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM
    #endif
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_SYM)
  #define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_FUN)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN_FLIP
  #else
    #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_FUN)
  #define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#endif
