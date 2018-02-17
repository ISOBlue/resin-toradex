include conf/tdx_version.conf

#
# Apalis imx6
#

IMAGE_FSTYPES_append_apalis-imx6 = " sdcard resinos-img teziimg"
IMAGE_CLASSES_append_apalis-imx6 = " image_type_tezi"

# Customize resinos-img
RESIN_IMAGE_BOOTLOADER_apalis-imx6 = "u-boot"

RESIN_BOOT_PARTITION_FILES_apalis-imx6 = " \
    ${KERNEL_IMAGETYPE}-${MACHINE}.bin:/${KERNEL_IMAGETYPE} \
    uImage-imx6q-apalis_v1_0-eval.dtb:/imx6q-apalis_v1_0-eval.dtb \
    uImage-imx6q-apalis-eval.dtb:/imx6q-apalis-eval.dtb \
    "

#
# Colibri imx6
#

IMAGE_FSTYPES_append_colibri-imx6 = " sdcard resinos-img teziimg"
IMAGE_CLASSES_append_colibri-imx6 = " image_type_tezi"

# Customize resinos-img
RESIN_IMAGE_BOOTLOADER_colibri-imx6 = "u-boot"

RESIN_BOOT_PARTITION_FILES_colibri-imx6 = " \
    ${KERNEL_IMAGETYPE}-${MACHINE}.bin:/${KERNEL_IMAGETYPE} \
    uImage-imx6dl-colibri-eval-v3.dtb:/imx6dl-colibri-eval-v3.dtb \
    u-boot.imx-single:/ \
    u-boot.imx-dual:/ \
    "
