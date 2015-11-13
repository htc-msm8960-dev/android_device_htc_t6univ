# Release name
PRODUCT_RELEASE_NAME := t6univ

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/htc/t6univ/device.mk)

# Device identifier - this must come after all inclusions
PRODUCT_DEVICE := t6univ
PRODUCT_NAME := cm_t6univ
PRODUCT_BRAND := htc
PRODUCT_MODEL := One Max
PRODUCT_MANUFACTURER := HTC
