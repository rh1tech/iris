add_executable(Iris
	main.c
        framebuf.c
        framebuf_dvi.c
        font.c
        terminal.c
        keyboard.c
        keyboard_usb.c
        keyboard_ps2.c
        config.c
        xmodem.c
        flash.c
        serial.c
        serial_uart.c
        serial_cdc.c
        sound.c
	tmds_encode_font_2bpp.S
	tmds_encode_font_2bpp.h
)

target_compile_definitions(Iris PRIVATE
	DVI_VERTICAL_REPEAT=1
	)

target_include_directories(Iris PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

# We have a lot in SRAM4 (particularly TMDS LUT) but don't need much stack on
# core 1. Probably even 256 bytes would be fine.
target_compile_definitions(Iris PRIVATE
	DVI_DEFAULT_SERIAL_CONFIG=${DVI_DEFAULT_SERIAL_CONFIG}
	PICO_CORE1_STACK_SIZE=0x200
	)

target_link_libraries(Iris
	pico_stdlib
	pico_multicore
	hardware_flash
	libdvi
        tinyusb_host
        tinyusb_device
)

# create map/bin/hex file etc.
pico_add_extra_outputs(Iris)
