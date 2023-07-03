// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),     U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, TAB),U_LT(U_NUM, ESC),  U_LT(U_NAV, SPC),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp LG(ESC),       &kp LA(LG(LEFT)),  &kp LA(LG(F)),     &kp LA(LG(RIGHT)), &kp LG(LSHFT),     &kﬁp TAB,          &kp LS(LA(LEFT)),  &kp UP,            &kp LS(LA(RIGHT)), &kp C_VOL_UP,         \
&sk LCTRL,         &sk LALT,          &sk LGUI,          &sk LSHFT,         &kp LA(LSHFT),     &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp C_VOL_DN,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp BSPC,          &kp RET,           U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp ASTRK,         &kp LBKT,          &kp LBRC,          &kp LPAR,          &kp COLON,         &kp PIPE,          &kp RPAR,          &kp RBRC,          &kp RBKT,          &kp CRRT,          \
&kp MINUS,         &kp EXCL,          &kp EQUAL,         &kp UNDER,         &kp SEMI,          &kp AMPS,          &kp HASH,          &kp DLLR,          &kp PRCNT,         &sk GRAVE,         \
&kp PLUS,          &kp AMPS,          &kp AT,            &kp HASH,          &kp DLLR,          U_NA,              U_NA,              &kp LT,            &kp GT,            U_NA,              \
U_NP,              U_NP,              &kp ESC,           &kp TAB,           &kp SPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&bt BT_CLR,        &bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_SEL 3,      &kp ASTRK,         &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&sk LCTRL,         &sk LALT,          &sk LGUI,          &sk LSHFT,         &sk LG(LS),        &kp MINUS,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp BSLH,          \
U_NP,              U_NP,              U_NP,              U_NP,              &sk LC(LS),        &kp PLUS,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp EQUAL,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP
