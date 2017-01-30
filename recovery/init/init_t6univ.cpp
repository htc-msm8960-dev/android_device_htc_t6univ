/*
   Copyright (c) 2016, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <string>

#include "property_service.h"
#include "vendor_init.h"

void vendor_load_properties() {
    std::string platform = property_get("ro.board.platform");
    if (platform != ANDROID_TARGET)
        return;

    std::string bootmid = property_get("ro.boot.mid");
    if (bootmid.find("0P3P70000") != std::string::npos) {
        property_set("ro.product.device", "t6whl");
        property_set("ro.build.product", "t6whl");
    } else if (bootmid.find("0P3P10000") != std::string::npos) {
        property_set("ro.product.device", "t6wl");
        property_set("ro.build.product", "t6wl");
    } else if (bootmid.find("0P3P20000") != std::string::npos) {
        property_set("ro.product.device", "t6dwg");
        property_set("ro.build.product", "t6dwg");
    } else if (bootmid.find("0P3P30000") != std::string::npos) {
        property_set("ro.product.device", "t6dug");
        property_set("ro.build.product", "t6dug");
    } else if (bootmid.find("0P3P40000") != std::string::npos) {
        property_set("ro.product.device", "t6tl");
        property_set("ro.build.product", "t6tl");
    } else {
        property_set("ro.product.device", "t6");
        property_set("ro.build.product", "t6");
    }
}
