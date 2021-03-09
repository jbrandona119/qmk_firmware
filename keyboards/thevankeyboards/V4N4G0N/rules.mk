# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality on B7 by default
MIDI_ENABLE = no            # MIDI controls
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6

#FROM QMK ONLINE CONFIG IDK IF I NEED IT THO BUT KEEPING IT TO COMPARE CUZ TF I NEED THIS WORKING
# MCU = atmega32u4
# F_CPU = 16000000
# ARCH = AVR8
# F_USB = 16000000

# OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
# OPT_DEFS += -DBOOTLOADER_SIZE=4096


# NO_USB_STARTUP_CHECK = yes
# MOUSEKEY_ENABLE = yes
# EXTRAKEY_ENABLE = yes



# NKRO_ENABLE = yes


# CUSTOM_MATRIX = lite

# MIDI_ENABLE = no
# AUDIO_ENABLE = no
# BLUETOOTH_ENABLE = no
# SRC += matrix.c