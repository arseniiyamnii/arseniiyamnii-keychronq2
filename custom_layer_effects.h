#include "key_numbers.h"
// pick color from https://www.google.com/search?q=rgb+color+picker HEX
void set_color_hsv(int key, int h, int s, int v) {
	HSV hsv = {h,s,v};
	RGB rgb = hsv_to_rgb(hsv);
	rgb_matrix_set_color(key, rgb.r, rgb.g, rgb.b);
}

void fn3_layer_rgb(void) {
     int v = rgblight_get_val();
     // bootloader
     set_color_hsv(KLCTL, 200, 255, v);
     //f1-12 row color
     set_color_hsv(K1, 43, 255, v);
     set_color_hsv(K2, 43, 255, v);
     set_color_hsv(K3, 43, 255, v);
     set_color_hsv(K4, 43, 255, v);
     set_color_hsv(K5, 43, 255, v);
     set_color_hsv(K6, 43, 255, v);
     set_color_hsv(K7, 43, 255, v);
     set_color_hsv(K8, 43, 255, v);
     set_color_hsv(K9, 43, 255, v);
     set_color_hsv(K0, 43, 255, v);
     set_color_hsv(KMin, 43, 255, v);
     set_color_hsv(KEQ, 43, 255, v);
     //brightness
     set_color_hsv(KDEL, 255, 255, v);
     set_color_hsv(KHOME, 255, 255, v);
     //workspaces
     set_color_hsv(KUP, 255, 255, v);
     set_color_hsv(KDOWN, 255, 255, v);
     //volume
     set_color_hsv(KLEFT, 255, 255, v);
     set_color_hsv(KRIGHT, 255, 255, v);
     //microphone
     set_color_hsv(KINS, 255, 255, v);
}

//void fn2_layer_rgb(void) {

//}
