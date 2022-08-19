Defualt layers:  
0- MAC= normal mac  
1- WIN= normal win  
2- FN1 = MAC+fn1  
3- FN2 = WIN+fn1  
4- FN3 = fn2  


QMK commands best practies:  
```
qmk config flash.keyboard=keychron/q2/rev_0110 flash.keymap=arseniiyamnii-krychronq2
qmk compile
qmk flash;while [ $? -ne 0 ]; do qmk flash;done
```
