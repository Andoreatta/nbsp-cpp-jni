#include "NBioBSPCLIJNI.h"
#include <iostream>

JNIEXPORT void JNICALL Java_NBioBSPCLIJNI_runStub
(JNIEnv* env, jobject thisObject) {
    std::cout << "Executing CLI nbsp" << std::endl;
    std::system("nbspcli -i");
}
