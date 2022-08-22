### TODO:
- [ ] macros
- [ ] send strings
- [ ] send commands
- [ ] read some PC state
- [ ] eeprom
---
### Installation:
```
git clone --recurse-submodules git@github.com:arseniiyamnii/qmk_firmware.git
```
---
### QMK commands best practies:  
```
qmk config compile.keyboard=keychron/q2/rev_0110 compile.keymap=arseniiyamnii-keychronq2
qmk config flash.keyboard=keychron/q2/rev_0110 flash.keymap=arseniiyamnii-keychronq2
qmk compile
qmk flash;while [ $? -ne 0 ]; do qmk flash;done
```
---
### Defualt layers:  
0- MAC= normal mac  
1- WIN= normal win  
2- FN1 = MAC+fn1  
3- FN2 = WIN+fn1  
4- FN3 = fn2  

---
### Changes in keys:
current key     | command               | description
---             |---                    |---
fn2 + UP/DOWN   |  CTRL+ALT+Up/Down     | for switch ubuntu workspaces
fn2+ LEFT/RIGHT | Volume Down/Up        | volume
fn2+ del/home   | brighthess up/down1   | brightnes
fn2+ ins        | f20                   | mic
power on+ esc   | reset                 | enter bootloader
fn1+home        | end                   | end
fn2+LCtl        | enter bootloader      | enter bootloader without poweroff
fn1+<->/<+>     | Lctl+<->/<+>          | For zoom in/out
fn1+alt/fn2     | Mouse lClick/rClick   | mouse keys
fn1+Arrows      | Mouse move            | 
---
### Changes in rgb:
* Default setting - solid color
* Default color - cyan(127)
* Default brightness - 100
* Default saturation - 255(max)
* In MAC and WIN modes - CAPSLOCK turns red when `On`
---
### RGB per layer:
* FN3: different colors for different features
  * fn row
  * volume
  * brightntness
  * workspaces
  * Reset button(lCtrl)
---
### Effects enablet in correct order:
1. Solid color(cyan)
---
### Custom effects:
1. EXAMPLE_CUSTOM_EFFECT1
2. EXAMPLE_CUSTOM_EFFECT2
---
### Dirrectory structure:
* `keymap.c` - for keymapping
* `config.h` - mostly for rgb effects, and some settings
             Allows to add own boolean settings via `define`
             Rewrites `config.h` from upper dirrectory
* `rules.mk` - compile settings.
             Rewrites `rules.mk` from upper dirrectory
* `custom_layer_effects.h` - collection of rgb effexts for layers
* `key_numbers.h` - enum object with all keys. Used for simplify setting color for keys
* `rgb_matrix_user.inc` - define custom rgb effects
