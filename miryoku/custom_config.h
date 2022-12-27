// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),     U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, TAB),U_LT(U_NUM, ESC),  U_LT(U_NAV, SPC),  U_LT(U_SYM, BSPC), U_LT(U_NUM, RET),  U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp LG(LS(RBRC)),  &kp LG(LS(RBRC)),  &kp LG(TAB),       &kp LG(ESC),       &kp LG(LSHFT),     &kp TAB,           &kp LS(LA(LEFT)),  &kp UP,            &kp LS(LA(RIGHT)), &kp PG_UP,         \
&sk LCTRL,         &sk LALT,          &sk LGUI,          &sk LSHFT,         &kp LA(LSHFT),     &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp LA(LG(LEFT)),  &kp LA(LG(F)),     &kp LA(LG(RIGHT)), U_NA               U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp BSPC,          &kp RET,           &u_caps_word,      U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp ASTRK,         &kp LBKT,          &kp LBRC,          &kp LPAR,          &kp TILDE,         &kp PIPE,          &kp RPAR,          &kp RBRC,          &kp RBKT,          &kp CRRT,          \
&kp MINUS,         &kp EXCL,          &kp EQUAL,         &kp UNDER,         &kp SEMI,          &kp AMPS,          &sk LSHFT,         &sk LGUI,          &sk LALT,          &sk LCTRL,         \
&kp PLUS,          &kp GRAVE,         &kp AT,            &kp BSLH,          &kp COLON,         U_NA,              &kp HASH,          &kp DLLR,          &kp PRCNT,         U_NA,              \
U_NP,              U_NP,              &kp ESC,           &kp TAB,           &kp SPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&bt BT_CLR,        &bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_SEL 3,      &kp ASTRK,         &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&sk LGUI,          &sk LALT,          &sk LGUI,          &sk LSHFT,         U_NA,              &kp MINUS,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp BSLH,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp PLUS,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp EQUAL,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP
