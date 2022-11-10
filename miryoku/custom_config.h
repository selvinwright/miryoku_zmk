// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),     U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),  U_LT(U_NAV, SPC),  U_LT(U_SYM, BSPC), U_LT(U_NUM, RET),  U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &kp LA(TAB),       &kp LG(ESC),       &kp LG(LSHFT),     &kp INS,           &kp LS(LA(LEFT)),  &kp UP,            &kp LS(LA(RIGHT)), &kp PG_UP,         \
&sk LCTRL,         &sk LALT,          &sk LGUI,          &sk LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &kp LA(LG(LEFT)),  &kp LA(LG(F)),     &kp LA(LG(RIGHT)), U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp BSPC,          &kp RET,           &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp ASTRK,         &kp LBKT,          &kp LBRC,          &kp LPAR,          &kp TILDE,         &kp PIPE,          &kp RPAR,          &kp RBRC,          &kp RBKT,          &kp CRRT,          \
&kp MINUS,         &kp EXCL,          &kp EQUAL,         &kp UNDER,         &kp SEMI,          &kp AMPS,          &sk LSHFT,         &sk LGUI,          &sk LALT,          &sk LCTRL,         \
&kp PLUS,          &kp GRAVE,         &kp AT,            &kp BSLH,          &kp COLON,         U_NA,              &kp HASH,          &kp DLLR,          &kp PRCNT,         U_NA,              \
U_NP,              U_NP,              &kp ESC,           &kp TAB,           &kp SPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
