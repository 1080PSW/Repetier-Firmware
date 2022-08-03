/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

    This firmware is a nearly complete rewrite of the sprinter firmware
    by kliment (https://github.com/kliment/Sprinter)
    which based on Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
*/

#undef FILE_SOURCE_SPI
#undef FILE_SOURCE_SDIO
#undef FILE_SOURCE_USB

#if IO_TARGET == IO_TARGET_INIT // setup
#define FILE_SOURCE_SPI(name, identifier, pos, spi, cs, speed, sdDetectPin) name.init(pos);
#define FILE_SOURCE_SDIO(name, identifier, pos, sdDetectPin) name.init();
#define FILE_SOURCE_USB(name, identifier, pos) name.init();

#elif IO_TARGET == IO_TARGET_CLASS_DEFINITION // class
#define FILE_SOURCE_SPI(name, identifier, pos, spi, cs, speed, sdDetectPin) \
    extern FileSourceSPI<sdDetectPin, cs> name;

#elif IO_TARGET == IO_TARGET_DEFINE_VARIABLES // variable
#define FILE_SOURCE_SPI(name, identifier, pos, spi, cs, speed, sdDetectPin) \
    PGM_P name##name = PSTR(identifier); \
    FileSourceSPI<sdDetectPin, cs> name(name##name, pos, &spi, speed);
#endif

#ifndef FILE_SOURCE_SPI
#define FILE_SOURCE_SPI(name, identifier, pos, spi, cs, speed, sdDetectPin)
#endif

#ifndef FILE_SOURCE_SDIO
#define FILE_SOURCE_SDIO(name, identifier, pos, sdDetectPin)
#endif

#ifndef FILE_SOURCE_USB
#define FILE_SOURCE_USB(name, identifier, pos)
#endif
