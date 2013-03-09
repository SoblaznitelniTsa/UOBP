/* config.h.  Generated from config.h.in by configure.  */
/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2012 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version. Please see the file LICENSE-GPL for details.
 *
 * Web Page: http://mielke.cc/brltty/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#ifndef BRLTTY_INCLUDED_CONFIG
#define BRLTTY_INCLUDED_CONFIG

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Define this if the host is big endian. */
/* #undef WORDS_BIGENDIAN */

/* Define this if the compiler doesn't fully support the const keyword. */
/* #undef const */

/* Define this if the compiler doesn't fully support the inline keyword. */
/* #undef inline */

/* Define this if the __alignof__ operator is supported. */
#define HAVE_OPERATOR_ALIGNOF 1
#ifndef HAVE_OPERATOR_ALIGNOF
#define __alignof__(x) 8
#endif /* HAVE_OPERATOR_ALIGNOF */

/* Define this if the printf format attribute is supported. */
#define HAVE_ATTRIBUTE_FORMAT_PRINTF 1

/* Define this if the noreturn attribute is supported. */
#define HAVE_ATTRIBUTE_NORETURN 1

/* Define this if the packed attribute is supported. */
#define HAVE_ATTRIBUTE_PACKED 1

/* Define this if the unused attribute is supported. */
#define HAVE_ATTRIBUTE_UNUSED 1

/* Define this if the header file alloca.h exists. */
#define HAVE_ALLOCA_H 1

/* Define this if the header file getopt.h exists. */
#define HAVE_GETOPT_H 1

/* Define this if the header file glob.h exists. */
#define HAVE_GLOB_H 1

/* Define this if the header file langinfo.h exists. */
#define HAVE_LANGINFO_H 1

/* Define this if the header file grp.h exists. */
#define HAVE_GRP_H 1

/* Define this if the header file wchar.h exists. */
#define HAVE_WCHAR_H 1

/* Define this if Unicode-based internationalization support is to be included. */
#define HAVE_ICU 1

/* Define this if the header file iconv.h exists. */
#define HAVE_ICONV_H 1

/* Define this if the header file pwd.h exists. */
#define HAVE_PWD_H 1

/* Define this if the header file regex.h exists. */
#define HAVE_REGEX_H 1

/* Define this if the header file syslog.h exists. */
#define HAVE_SYSLOG_H 1

/* Define this if the header file sys/file.h exists. */
#define HAVE_SYS_FILE_H 1

/* Define this if the function time exists. */
#define HAVE_TIME 1

/* Define this if the function gettimeofday exists. */
#define HAVE_GETTIMEOFDAY 1

/* Define this if the function clock_gettime exists. */
#define HAVE_CLOCK_GETTIME 1

/* Define this if the function nanosleep exists. */
#define HAVE_NANOSLEEP 1

/* Define this if the function localtime_r is declared. */
#define HAVE_DECL_LOCALTIME_R 1

#ifndef __MINGW32__
/* Define this if the header file sys/poll.h exists. */
#define HAVE_SYS_POLL_H 1

/* Define this if the header file sys/select.h exists. */
#define HAVE_SYS_SELECT_H 1

/* Define this if the function select exists. */
#define HAVE_SELECT 1
#endif /* __MINGW32__ */

/* Define this if the header file signal.h exists. */
#define HAVE_SIGNAL_H 1

/* Define this if the function sigaction exists. */
#define HAVE_SIGACTION 1

/* Define this if the header file sys/wait.h exists,
 * but not for DOS since it wouldn't make sense. 
 */
#ifndef __MSDOS__
#define HAVE_SYS_WAIT_H 1
#endif /* __MSDOS__ */

/* Define this if posix threads are supported. */
#define HAVE_POSIX_THREADS 1

/* Define this if the header file sys/io.h exists. */
#define HAVE_SYS_IO_H 1

/* Define this if the header file sys/modem.h exists. */
/* #undef HAVE_SYS_MODEM_H */

/* Define this if the header file machine/speaker.h exists. */
/* #undef HAVE_MACHINE_SPEAKER_H */

/* Define this if the header file linux/vt.h exists. */
#define HAVE_LINUX_VT_H 1

/* Define this if the header file linux/input.h exists. */
#define HAVE_LINUX_INPUT_H 1

/* Define this if the header file linux/uinput.h exists. */
#define HAVE_LINUX_UINPUT_H 1

/* Define this if the function mempcpy exists. */
#define HAVE_MEMPCPY 1

/* Define this if the function wmempcpy exists. */
#define HAVE_WMEMPCPY 1

/* Define this if the function fchdir exists. */
#define HAVE_FCHDIR 1

/* Define this if the function fchmod exists. */
#define HAVE_FCHMOD 1

/* Define this if the function getaddrinfo exists. */
#define HAVE_GETADDRINFO 1

/* Define this if the function getnameinfo exists. */
#define HAVE_GETNAMEINFO 1

/* Define this if the function gai_strerror exists. */
#define HAVE_GAI_STRERROR 1

/* Define this if the function getopt_long exists. */
#define HAVE_GETOPT_LONG 1

/* Define this if the function getpeereid exists. */
/* #undef HAVE_GETPEEREID */

/* Define this if the function getpeerucred exists. */
/* #undef HAVE_GETPEERUCRED */

/* Define this if the function getzoneid exists. */
/* #undef HAVE_GETZONEID */

/* Define this if the function hstrerror exists. */
#define HAVE_HSTRERROR 1

/* Define this if the function realpath exists. */
#define HAVE_REALPATH 1

/* Define this if the function shmget exists. */
#define HAVE_SHMGET 1
#define SIZEOF_KEY_T 4

/* Define this if the function shm_open exists. */
/* #undef HAVE_SHM_OPEN */

/* Define this if the function pause exists. */
#define HAVE_PAUSE 1

/* Define this if the function vsyslog exists. */
#define HAVE_VSYSLOG 1

/* Define this if the function dlopen is available. */
#define HAVE_DLOPEN 1

/* Define this if the function shl_load is available. */
/* #undef HAVE_SHL_LOAD */

/* Define this to be a string containing the package name. */
#define PACKAGE_NAME "brltty"

/* Define this to be a string containing the package title. */
#define PACKAGE_TITLE "BRLTTY"

/* Define this to be a string containing the package version. */
#define PACKAGE_VERSION "4.4"

/* Define this to be a string containing the package revision. */
#define PACKAGE_REVISION "Unversioned directory"

/* Define this if BRLTTY is to be run as init. */
/* #undef INIT_PATH */

/* Define this if standard error is to be redirected to a file. */
/* #undef STDERR_PATH */

/* Define this to be a string containing the path to the locale directory. */
#define LOCALE_DIRECTORY "/usr/share/locale"

/* Define this to be a string containing the path to a writable directory. */
#define WRITABLE_DIRECTORY "/var/run/brltty"

/* Define this to be a string containing the path to the tables directory. */
#define TABLES_DIRECTORY "/etc/brltty"

/* Define this to be a string containing the path to the configuration directory. */
#define CONFIGURATION_DIRECTORY "/etc"

/* Define this to be a string containing the name of the default configuration file. */
#define CONFIGURATION_FILE "brltty.conf"

/* Define this to be a string containing the path to the state directory. */
#define STATE_DIRECTORY "/var/lib/brltty"

/* Define this to be a string containing the name of the default preferences file. */
#define PREFERENCES_FILE "brltty.prefs"

/* Define this to be a string containing the path to the drivers directory. */
#define DRIVERS_DIRECTORY "/usr/lib/brltty"

/* Define this to be a string containing the base module name. */
#define MODULE_NAME "libbrltty"

/* Define this to be a string containing the module extension. */
#define MODULE_EXTENSION "so"

/* Define this to be a string containing the library extension. */
#define LIBRARY_EXTENSION "so"

/* Define this to be a string containing a list of the braille driver codes. */
#define BRAILLE_DRIVER_CODES "al at ba bc bd bl bm bn cb ec eu fs hm ht hw il ir lt mb md mn mt ob pg pm sk tn ts tt vd vo vr vs xw np"

/* Define this to be a string containing the default braille driver parameters. */
#define BRAILLE_PARAMETERS ""

/* Define this to be a string containing the path to the directory containing the devices. */
#define DEVICE_DIRECTORY "/dev"

/* Define this to be a string containing the path to the default braille device. */
#define BRAILLE_DEVICE "usb:"

/* Define only one of the following serial packages. */
/* #undef USE_SERIAL_PACKAGE_NONE */
/* #undef USE_SERIAL_PACKAGE_GRUB */
/* #undef USE_SERIAL_PACKAGE_MSDOS */
#define USE_SERIAL_PACKAGE_TERMIOS 1
/* #undef USE_SERIAL_PACKAGE_WINDOWS */

/* Define this if the function tcdrain exists. */
#define HAVE_TCDRAIN 1

/* Define this to be a string containing the path to the first serial device. */
#define SERIAL_FIRST_DEVICE "ttyS0"

/* Define only one of the following host command packages. */
/* #undef USE_HOSTCMD_PACKAGE_NONE */
#define USE_HOSTCMD_PACKAGE_UNIX 1

/* Define only one of the following mount packages. */
/* #undef USE_MOUNT_PACKAGE_NONE */
#define USE_MOUNT_PACKAGE_MNTENT 1
/* #undef USE_MOUNT_PACKAGE_MNTTAB */

/* Define this if the function addmntent exists. */
#define HAVE_ADDMNTENT 1

/* Define this to be a string containing the path to the default text table. */
#define TEXT_TABLE "en-nabcc"

/* Define this to be a string containing the path to the default attributes table. */
#define ATTRIBUTES_TABLE "attributes"

/* Define this to be a string containing a list of the speech driver codes. */
#define SPEECH_DRIVER_CODES "al bl cb es xs fv gs sd"

/* Define this to be a string containing the default speech driver parameters. */
#define SPEECH_PARAMETERS ""

/* Define this to be a string containing the default screen driver code. */
#define SCREEN_DRIVER "a2"

/* Define this to be a string containing a list of the screen driver codes. */
#define SCREEN_DRIVER_CODES "a2 lx sc"

/* Define this to be a string containing the default screen driver parameters. */
#define SCREEN_PARAMETERS ""

/* Define this to include command learn mode. */
#define ENABLE_LEARN_MODE 1

/* Define this to include contraction table support. */
#define ENABLE_CONTRACTED_BRAILLE 1

/* Define this to include speech synthesizer support. */
#define ENABLE_SPEECH_SUPPORT 1

/* Define this to include beeper (console tone generator) support. */
#define ENABLE_BEEPER_SUPPORT 1

/* Define this to include PCM (soundcard audio) support. */
#define ENABLE_PCM_SUPPORT 1

/* If necessary, define only one of the following PCM interfaces. */
#define USE_PCM_SUPPORT_ALSA 1
/* #undef USE_PCM_SUPPORT_OSS */

/* Define this to include MIDI (Musical Instrument Digital Interface) support. */
#define ENABLE_MIDI_SUPPORT 1

/* If necessary, define only one of the following MIDI interfaces. */
/* #undef USE_MIDI_SUPPORT_OSS */
#define USE_MIDI_SUPPORT_ALSA 1

/* Define this to include FM (soundcard synthesizer) support. */
#define ENABLE_FM_SUPPORT 1

/* Define this to be a string containing the path to the root of the FestivalLite package. */
/* #undef FLITE_ROOT */

/* Define this to be a string containing the path to the root of the Mikropuhe package. */
/* #undef MIKROPUHE_ROOT */

/* Define this to be a string containing the path to the root of the SpeechDispatcher package. */
#define SPEECHD_ROOT "/usr"

/* Define this to be a string containing the path to the root of the Swift package. */
/* #undef SWIFT_ROOT */

/* Define this to be a string containing the path to the root of the Theta package. */
/* #undef THETA_ROOT */

/* Define this to be a string containing the path to the root of the ViaVoice package. */
/* #undef VIAVOICE_ROOT */

/* Define this if internationalization support is to be included. */
#define ENABLE_I18N_SUPPORT 1

/* Define this if the application programming interface is to be included. */
#define ENABLE_API 1

/* Define this to be a string containing the default application programming interface parameters. */
#define API_PARAMETERS ""

/* Define this if shared object support is to be included. */
#define ENABLE_SHARED_OBJECTS 1

/* Define this if the header file legacy/dev/usb/usb.h exists. */
/* #undef HAVE_LEGACY_DEV_USB_USB_H */

/* Define this if HP-UX audio support is available. */
/* #undef HAVE_HPUX_AUDIO */

/* Define this if GPM is to be used. */
#define HAVE_LIBGPM 1

/* Define this if X is not available. */
/* #undef X_DISPLAY_MISSING */

/* Define this if the header file X11/keysym.h exists. */
#define HAVE_X11_KEYSYM_H 1

/* Define this if the header file X11/extensions/XTest.h exists. */
#define HAVE_X11_EXTENSIONS_XTEST_H 1

/* Define this if the header file X11/extensions/XKB.h exists. */
#define HAVE_X11_EXTENSIONS_XKB_H 1

/* Define only one of the following curses packages. */
/* #undef HAVE_PKG_CURSES */
#define HAVE_PKG_NCURSES 1
/* #undef HAVE_PKG_NCURSESW */

/* Define only one of the following Xaw packages. */
#define HAVE_PKG_XAW 1
/* #undef HAVE_PKG_XAW3D */
/* #undef HAVE_PKG_NEXTAW */
/* #undef HAVE_PKG_XAWPLUS */
/* #undef HAVE_PKG_XM */

#define TEXT_TABLE_EXTENSION ".ttb"
#define TEXT_SUBTABLE_EXTENSION ".tti"

#define ATTRIBUTES_TABLE_EXTENSION ".atb"
#define ATTRIBUTES_SUBTABLE_EXTENSION ".ati"

#define CONTRACTION_TABLE_EXTENSION ".ctb"
#define CONTRACTION_SUBTABLE_EXTENSION ".cti"

#define KEY_TABLE_EXTENSION ".ktb"
#define KEY_SUBTABLE_EXTENSION ".kti"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_CONFIG */
