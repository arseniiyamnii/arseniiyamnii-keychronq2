Defualt layers:  
0- MAC= normal mac  
1- WIN= normal win  
2- FN1 = MAC+fn1  
3- FN2 = WIN+fn1  
4- FN3 = fn2  


Installation:
```
git clone --recurse-submodules git@github.com:arseniiyamnii/qmk_firmware.git
```

QMK commands best practies:  
```
qmk config compile.keyboard=keychron/q2/rev_0110 compile.keymap=arseniiyamnii-keychronq2
qmk config flash.keyboard=keychron/q2/rev_0110 flash.keymap=arseniiyamnii-keychronq2
qmk compile
qmk flash;while [ $? -ne 0 ]; do qmk flash;done
```

Changes in keys:
current key     | command               | description
---             |---                    |---
fn2 + UP/DOWN   |  CTRL+ALT+Up/Down     | for switch ubuntu workspaces
fn2+ LEFT/RIGHT | Volume Down/Up        | volume
fn2+ del/home   | brighthess up/down1   | brightnes
fn2+ ins        | f20                   | mic
power on+ esc   | reset                 | enter bootloader
fn1+home        | end                   | end

Changes in rgb:
* turned Off all effects, except solid color 
