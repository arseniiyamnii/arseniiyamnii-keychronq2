#include "key_numbers.h"
// pick color from https://www.google.com/search?q=rgb+color+picker
void fn3_layer_rgb(void) {
     // bootloader
     rgb_matrix_set_color(KLCTL, 255, 22, 22);
     //f1-12 row color
     rgb_matrix_set_color(K1, 85, 81, 207);
     rgb_matrix_set_color(K2, 85, 81, 207);
     rgb_matrix_set_color(K3, 85, 81, 207);
     rgb_matrix_set_color(K4, 85, 81, 207);
     rgb_matrix_set_color(K5, 85, 81, 207);
     rgb_matrix_set_color(K6, 85, 81, 207);
     rgb_matrix_set_color(K7, 85, 81, 207);
     rgb_matrix_set_color(K8, 85, 81, 207);
     rgb_matrix_set_color(K9, 85, 81, 207);
     rgb_matrix_set_color(K0, 85, 81, 207);
     rgb_matrix_set_color(KMin, 85, 81, 207);
     rgb_matrix_set_color(KEQ, 85, 81, 207);
     //brightness
     rgb_matrix_set_color(KDEL, 176, 164, 70);
     rgb_matrix_set_color(KHOME, 176, 164, 70);
     //workspaces
     rgb_matrix_set_color(KUP, 219, 2, 2);
     rgb_matrix_set_color(KDOWN, 219, 2, 2);
     //volume
     rgb_matrix_set_color(KLEFT, 209, 219, 2);
     rgb_matrix_set_color(KRIGHT, 209, 219, 2);
     //microphone
     rgb_matrix_set_color(KINS, 209, 219, 2);
}

//void fn2_layer_rgb(void) {

//}
