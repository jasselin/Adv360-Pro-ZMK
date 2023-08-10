// QMK constants
#define _______ &trans
#define KC_NO &none

#define KC_LCTL &kp LCTRL
#define KC_LALT &kp LALT
#define KC_LGUI &kp LGUI
#define KC_LSFT &kp LSHFT
#define KC_RCTL &kp RCTRL
#define KC_RALT &kp RALT
#define KC_RGUI &kp RGUI
#define KC_RSFT &kp RSHFT

#define KC_SPC &kp SPACE
#define KC_BSPC &kp BACKSPACE
#define KC_DEL &kp DELETE

#define KC_LEFT &kp LEFT_ARROW
#define KC_RIGHT &kp RIGHT_ARROW
#define KC_UP &kp UP_ARROW
#define KC_DOWN &kp DOWN_ARROW

#define KC_HOME &kp HOME
#define KC_END &kp END
#define KC_PGUP &kp PG_UP
#define KC_PGDN &kp PG_DN

#define KC_A &kp A
#define KC_B &kp B
#define KC_C &kp C
#define KC_D &kp D
#define KC_E &kp E
#define KC_F &kp F
#define KC_G &kp G
#define KC_H &kp H
#define KC_I &kp I
#define KC_J &kp J
#define KC_K &kp K
#define KC_L &kp L
#define KC_M &kp M
#define KC_N &kp N
#define KC_O &kp O
#define KC_P &kp P
#define KC_Q &kp Q
#define KC_R &kp R
#define KC_S &kp S
#define KC_T &kp T
#define KC_U &kp U
#define KC_V &kp V
#define KC_W &kp W
#define KC_X &kp X
#define KC_Y &kp Y
#define KC_Z &kp Z

#define KC_0 &kp N0
#define KC_1 &kp N1
#define KC_2 &kp N2
#define KC_3 &kp N3
#define KC_4 &kp N4
#define KC_5 &kp N5
#define KC_6 &kp N6
#define KC_7 &kp N7
#define KC_8 &kp N8
#define KC_9 &kp N9

#define KC_F1 &kp F1
#define KC_F2 &kp F2
#define KC_F3 &kp F3
#define KC_F4 &kp F4
#define KC_F5 &kp F5
#define KC_F6 &kp F6
#define KC_F7 &kp F7
#define KC_F8 &kp F8
#define KC_F9 &kp F9
#define KC_F10 &kp F10
#define KC_F11 &kp F11
#define KC_F12 &kp F12

#define KC_KP_0 &kp KP_N0
#define KC_KP_1 &kp KP_N1
#define KC_KP_2 &kp KP_N2
#define KC_KP_3 &kp KP_N3
#define KC_KP_4 &kp KP_N4
#define KC_KP_5 &kp KP_N5
#define KC_KP_6 &kp KP_N6
#define KC_KP_7 &kp KP_N7
#define KC_KP_8 &kp KP_N8
#define KC_KP_9 &kp KP_N9
#define KC_NUM &kp KP_NUM
#define KC_PEQL &kp KP_EQUAL
#define KC_PSLS &kp KP_DIVIDE
#define KC_PAST &kp KP_MULTIPLY
#define KC_PPLS &kp KP_PLUS
#define KC_PMNS &kp KP_MINUS
#define KC_PDOT &kp KP_DOT
#define KC_PENT &kp KP_ENTER

#define KC_EQ &kp EQUAL
#define KC_MIN &kp MINUS
#define KC_TAB &kp TAB
#define KC_BSLS &kp BSLH
#define KC_GRV &kp GRAVE
#define KC_CAPS &kp CAPS
#define KC_LBRC &kp LBKT
#define KC_RBRC &kp RBKT
#define KC_DOT &kp DOT
#define KC_COMM &kp COMMA
#define KC_SCLN &kp SEMI
#define KC_QUOT &kp SQT
#define KC_SLSH &kp FSLH

// Bluetooth, backlight, RGB, bootloader

#define BTH_P1 &bt BT_SEL 0
#define BTH_P2 &bt BT_SEL 1
#define BTH_P3 &bt BT_SEL 2
#define BTH_P4 &bt BT_SEL 3
#define BTH_P5 &bt BT_SEL 4
#define BTH_CLR &bt BT_CLR

#define BLT_TOG &bl BL_TOG
#define BLT_INC &bl BL_INC
#define BLT_DEC &bl BL_DEC

#define RGB_TGL &rgb_ug RGB_TOG
#define RGB_CYCL &rgb_ug RGB_MEFS_CMD 5

#define BOOT &bootloader

// User macros
#define LCTRL_ESC &mt LCTRL ESC
#define FN_DEL &lt 2 DELETE
#define WM_ENTER &lt 5 ENTER
#define SHFT_LACC &msl RSHFT 4
#define LAY_KP &tog 1
#define LAY_FN &mo 2
#define LAY_MOD &mo 3
#define LAY_UACC &mo 5

// Accents
#define LE_ACU &LOWER_E_ACUTE
#define UE_ACU &UPPER_E_ACUTE

#define LA_GRV &LOWER_A_GRAVE
#define UA_GRV &UPPER_A_GRAVE
#define LE_GRV &LOWER_E_GRAVE
#define UE_GRV &UPPER_E_GRAVE
#define LU_GRV &LOWER_U_GRAVE
#define UU_GRV &UPPER_U_GRAVE

#define LA_CRC &LOWER_A_CIRC
#define UA_CRC &UPPER_A_CIRC
#define LE_CRC &LOWER_E_CIRC
#define UE_CRC &UPPER_E_CIRC
#define LI_CRC &LOWER_I_CIRC
#define UI_CRC &UPPER_I_CIRC
#define LO_CRC &LOWER_O_CIRC
#define UO_CRC &UPPER_O_CIRC
#define LU_CRC &LOWER_U_CIRC
#define UU_CRC &UPPER_U_CIRC

#define LE_UML &LOWER_E_UML
#define UE_UML &UPPER_E_UML
#define LI_UML &LOWER_I_UML
#define UI_UML &UPPER_I_UML
#define LU_UML &LOWER_U_UML
#define UU_UML &UPPER_U_UML

#define LC_CDL &LOWER_C_CEDIL
#define UC_CDL &UPPER_C_CEDIL

// Window manager
#define W_UP &kp LG(UP_ARROW)
#define W_DOWN &kp LG(DOWN_ARROW)
#define W_LEFT &kp LG(LEFT_ARROW)
#define W_RIGHT &kp LG(RIGHT_ARROW)
#define W_WLEFT &kp LS(LG(LEFT_ARROW))
#define W_WRIGHT &kp LS(LG(RIGHT_ARROW))
#define W_CLOSE &kp LC(F4)
#define W_QUIT &kp LA(F4)
#define W_REF &kp LC(F5)
#define W_TASK &kp LG(TAB)
#define W_DLEFT &kp LC(LG(LEFT_ARROW))
#define W_DRIGHT &kp LC(LG(RIGHT_ARROW))

// Launcher / switcher
#define WM_Q &kp LS(LA(LC(LG(Q))))
#define WM_W &kp LS(LA(LC(LG(W))))
#define WM_E &kp LS(LA(LC(LG(E))))
#define WM_R &kp LS(LA(LC(LG(R))))
#define WM_T &kp LS(LA(LC(LG(T))))
#define WM_A &kp LS(LA(LC(LG(A))))
#define WM_S &kp LS(LA(LC(LG(S))))
#define WM_D &kp LS(LA(LC(LG(D))))
#define WM_F &kp LS(LA(LC(LG(F))))
#define WM_G &kp LS(LA(LC(LG(G))))
#define WM_Z &kp LS(LA(LC(LG(Z))))
#define WM_X &kp LS(LA(LC(LG(X))))
#define WM_C &kp LS(LA(LC(LG(C))))
#define WM_V &kp LS(LA(LC(LG(V))))
#define WM_B &kp LS(LA(LC(LG(B))))

// Macros
#define MACRO_ALTCODE(NAME, KEYS) \
    NAME: NAME { \
        compatible = "zmk,behavior-macro"; \
        label = "##NAME"; \
        #binding-cells = <0>; \
        bindings = \
            <&macro_press   &kp LALT>, \
            <&macro_tap     KEYS>, \
            <&macro_release &kp LALT>; \
    };


