# Settings for the Discovery STM32F746NG board.
ifeq ($(TARGET), zephyr-disco_f746ng)
	export FOO=FOO
hello_world_bin: third_party_downloads
	cmake -B${GENDIR}hello_world/CMake -DBOARD="stm32f746g_disco" -Htensorflow/lite/micro/examples/hello_world/zephyr-disco_f746ng
	make -C ${GENDIR}hello_world/CMake
#ifneq ($(filter disco_f746ng,$(ALL_TAGS)),)
#  MBED_PROJECT_FILES += \
#    BSP_DISCO_F746NG.lib \
#    LCD_DISCO_F746NG.lib
endif
