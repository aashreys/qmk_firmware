# MCU name
MCU = STM32F072

# Bootloader selection
BOOTLOADER = stm32-dfu

# Wildcard to allow APM32 MCU
DFU_SUFFIX_ARGS = -v FFFF -p FFFF

# Build Options
#   comment out to disable the options.
#


BOOTMAGIC_ENABLE = lite	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = no	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes	    # USB Nkey Rollover
CUSTOM_MATRIX = no # Custom matrix file
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
WS2812_DRIVER = spi

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

LAYOUTS = 65_ansi_blocker 65_ansi_blocker_split_bs 65_ansi_blocker_tsangan 65_iso_blocker
