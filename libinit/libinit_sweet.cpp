/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t sweetin_info = {
    .hwc_value = "INDIA",
    .sku_value = "std",

    .brand = "Redmi",
    .device = "sweetin",
    .marketname = "Redmi Note 10 Pro",
    .model = "M2101K6P",
    .build_description = "sweetin-user 13 TKQ1.221013.002 V14.0.1.0.TKFINXM release-keys",

    .nfc = false,
};

static const variant_info_t sweetinpro_info = {
    .hwc_value = "INDIA",
    .sku_value = "pro",

    .brand = "Redmi",
    .device = "sweetin",
    .marketname = "Redmi Note 10 Pro Max",
    .model = "M2101K6I",
    .build_description = "sweetinpro-user 13 TKQ1.221013.002 V14.0.1.0.TKFINXM release-keys",

    .nfc = false,
};

static const variant_info_t sweet_global_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "sweet",
    .marketname = "Redmi Note 10 Pro",
    .model = "M2101K6G",
    .build_description = "sweet-user 13 TKQ1.221013.002 V14.0.1.0.TKFMIXM release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    sweetin_info,
    sweetinpro_info,
    sweet_global_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
