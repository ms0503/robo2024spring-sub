//
// Created by ms0503 on 24/03/10.
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif
    void cxx_pre_init();
    void cxx_init();
    void cxx_sysinit();
    void cxx_post_init();
    void cxx_loop();
#ifdef __cplusplus
}
#endif