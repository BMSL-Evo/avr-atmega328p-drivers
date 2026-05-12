# AVR ATmega328P Framework

A modular bare-metal firmware framework for the ATmega328P, designed for scalable embedded systems development.

## Features
- Register-level peripheral drivers
- Modular architecture
- Lightweight and portable
- Designed for bare-metal systems

## Repository Structure
- `drivers/` -> Peripheral drivers (GPIO, USART, SPI, etc.)
- `applications/` -> Example applications
- `config/` -> System and driver configuarions
- `platform/` -> MCU-specific definitions and startup code
- `common/` -> Shared utilities and macros
-  `scripts/` -> Build and automation scripts
-  `docs/` -> Documentation

## Toolchain
- avr-gcc
- Makefile-based build system (coming soon)

## Target MCU
- ATmega328P

## Future Work
- RTOS integration
- Bootloader support
- HAL Layer abstraction
- Unit testing framework

