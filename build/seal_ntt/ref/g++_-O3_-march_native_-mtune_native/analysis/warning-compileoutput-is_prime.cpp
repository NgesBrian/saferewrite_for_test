In file included from seal/util/gcc.h:14,
                 from seal/util/defines.h:109,
                 from seal/version.h:6,
                 from seal/serialization.h:6,
                 from seal/modulus.h:6,
                 from is_prime.cpp:3:
seal/util/config.h.in:12:2: error: invalid preprocessing directive #cmakedefine
   12 | #cmakedefine SEAL_DEBUG
      |  ^~~~~~~~~~~
seal/util/config.h.in:15:2: error: invalid preprocessing directive #cmakedefine
   15 | #cmakedefine SEAL_USE_STD_BYTE
      |  ^~~~~~~~~~~
seal/util/config.h.in:16:2: error: invalid preprocessing directive #cmakedefine
   16 | #cmakedefine SEAL_USE_ALIGNED_ALLOC
      |  ^~~~~~~~~~~
seal/util/config.h.in:17:2: error: invalid preprocessing directive #cmakedefine
   17 | #cmakedefine SEAL_USE_SHARED_MUTEX
      |  ^~~~~~~~~~~
seal/util/config.h.in:18:2: error: invalid preprocessing directive #cmakedefine
   18 | #cmakedefine SEAL_USE_IF_CONSTEXPR
      |  ^~~~~~~~~~~
seal/util/config.h.in:19:2: error: invalid preprocessing directive #cmakedefine
   19 | #cmakedefine SEAL_USE_MAYBE_UNUSED
      |  ^~~~~~~~~~~
seal/util/config.h.in:20:2: error: invalid preprocessing directive #cmakedefine
   20 | #cmakedefine SEAL_USE_NODISCARD
      |  ^~~~~~~~~~~
seal/util/config.h.in:21:2: error: invalid preprocessing directive #cmakedefine
   21 | #cmakedefine SEAL_USE_STD_FOR_EACH_N
      |  ^~~~~~~~~~~
seal/util/config.h.in:24:2: error: invalid preprocessing directive #cmakedefine
   24 | #cmakedefine SEAL_THROW_ON_TRANSPARENT_CIPHERTEXT
      |  ^~~~~~~~~~~
seal/util/config.h.in:25:2: error: invalid preprocessing directive #cmakedefine
   25 | #cmakedefine SEAL_USE_GAUSSIAN_NOISE
      |  ^~~~~~~~~~~
seal/util/config.h.in:26:2: error: invalid preprocessing directive #cmakedefine
   26 | #cmakedefine SEAL_DEFAULT_PRNG @SEAL_DEFAULT_PRNG@
      |  ^~~~~~~~~~~
seal/util/config.h.in:27:2: error: invalid preprocessing directive #cmakedefine
   27 | #cmakedefine SEAL_AVOID_BRANCHING
      |  ^~~~~~~~~~~
seal/util/config.h.in:30:2: error: invalid preprocessing directive #cmakedefine
   30 | #cmakedefine SEAL_USE_INTRIN
      |  ^~~~~~~~~~~
seal/util/config.h.in:31:2: error: invalid preprocessing directive #cmakedefine
   31 | #cmakedefine SEAL_USE__UMUL128
      |  ^~~~~~~~~~~
seal/util/config.h.in:32:2: error: invalid preprocessing directive #cmakedefine
   32 | #cmakedefine SEAL_USE__BITSCANREVERSE64
      |  ^~~~~~~~~~~
seal/util/config.h.in:33:2: error: invalid preprocessing directive #cmakedefine
   33 | #cmakedefine SEAL_USE___BUILTIN_CLZLL
      |  ^~~~~~~~~~~
seal/util/config.h.in:34:2: error: invalid preprocessing directive #cmakedefine
   34 | #cmakedefine SEAL_USE___INT128
      |  ^~~~~~~~~~~
seal/util/config.h.in:35:2: error: invalid preprocessing directive #cmakedefine
   35 | #cmakedefine SEAL_USE__ADDCARRY_U64
      |  ^~~~~~~~~~~
seal/util/config.h.in:36:2: error: invalid preprocessing directive #cmakedefine
   36 | #cmakedefine SEAL_USE__SUBBORROW_U64
      |  ^~~~~~~~~~~
seal/util/config.h.in:39:2: error: invalid preprocessing directive #cmakedefine
   39 | #cmakedefine SEAL_USE_EXPLICIT_BZERO
      |  ^~~~~~~~~~~
seal/util/config.h.in:40:2: error: invalid preprocessing directive #cmakedefine
   40 | #cmakedefine SEAL_USE_EXPLICIT_MEMSET
      |  ^~~~~~~~~~~
seal/util/config.h.in:41:2: error: invalid preprocessing directive #cmakedefine
   41 | #cmakedefine SEAL_USE_MEMSET_S
      |  ^~~~~~~~~~~
seal/util/config.h.in:44:2: error: invalid preprocessing directive #cmakedefine
   44 | #cmakedefine SEAL_USE_MSGSL
      |  ^~~~~~~~~~~
seal/util/config.h.in:45:2: error: invalid preprocessing directive #cmakedefine
   45 | #cmakedefine SEAL_USE_ZLIB
      |  ^~~~~~~~~~~
seal/util/config.h.in:46:2: error: invalid preprocessing directive #cmakedefine
   46 | #cmakedefine SEAL_USE_ZSTD
      |  ^~~~~~~~~~~
seal/util/config.h.in:47:2: error: invalid preprocessing directive #cmakedefine
   47 | #cmakedefine SEAL_USE_INTEL_HEXL
      |  ^~~~~~~~~~~
seal/util/config.h.in:7:28: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                            ^
seal/version.h:30:30: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
   30 |         std::uint8_t major = SEAL_VERSION_MAJOR;
      |                              ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:47: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                                               ^
seal/version.h:30:30: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
   30 |         std::uint8_t major = SEAL_VERSION_MAJOR;
      |                              ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:28: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                            ^
seal/version.h:35:30: note: in expansion of macro ‘SEAL_VERSION_MINOR’
   35 |         std::uint8_t minor = SEAL_VERSION_MINOR;
      |                              ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:47: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                                               ^
seal/version.h:35:30: note: in expansion of macro ‘SEAL_VERSION_MINOR’
   35 |         std::uint8_t minor = SEAL_VERSION_MINOR;
      |                              ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:9:28: error: stray ‘@’ in program
    9 | #define SEAL_VERSION_PATCH @SEAL_VERSION_PATCH@
      |                            ^
seal/version.h:40:30: note: in expansion of macro ‘SEAL_VERSION_PATCH’
   40 |         std::uint8_t patch = SEAL_VERSION_PATCH;
      |                              ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:9:47: error: stray ‘@’ in program
    9 | #define SEAL_VERSION_PATCH @SEAL_VERSION_PATCH@
      |                                               ^
seal/version.h:40:30: note: in expansion of macro ‘SEAL_VERSION_PATCH’
   40 |         std::uint8_t patch = SEAL_VERSION_PATCH;
      |                              ^~~~~~~~~~~~~~~~~~
In file included from seal/util/gcc.h:14,
                 from seal/util/defines.h:109,
                 from seal/version.h:6,
                 from seal/serialization.h:6,
                 from seal/modulus.h:6,
                 from is_prime.cpp:3:
seal/util/config.h.in:7:28: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                            ^
seal/serialization.h:82:68: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
   82 |             std::uint8_t version_major = static_cast<std::uint8_t>(SEAL_VERSION_MAJOR);
      |                                                                    ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:47: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                                               ^
seal/serialization.h:82:68: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
   82 |             std::uint8_t version_major = static_cast<std::uint8_t>(SEAL_VERSION_MAJOR);
      |                                                                    ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:28: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                            ^
seal/serialization.h:84:68: note: in expansion of macro ‘SEAL_VERSION_MINOR’
   84 |             std::uint8_t version_minor = static_cast<std::uint8_t>(SEAL_VERSION_MINOR);
      |                                                                    ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:47: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                                               ^
seal/serialization.h:84:68: note: in expansion of macro ‘SEAL_VERSION_MINOR’
   84 |             std::uint8_t version_minor = static_cast<std::uint8_t>(SEAL_VERSION_MINOR);
      |                                                                    ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:28: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                            ^
seal/serialization.h:147:41: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
  147 |             if (header.version_major == SEAL_VERSION_MAJOR && header.version_minor == SEAL_VERSION_MINOR)
      |                                         ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:47: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                                               ^
seal/serialization.h:147:41: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
  147 |             if (header.version_major == SEAL_VERSION_MAJOR && header.version_minor == SEAL_VERSION_MINOR)
      |                                         ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:28: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                            ^
seal/serialization.h:147:87: note: in expansion of macro ‘SEAL_VERSION_MINOR’
  147 |             if (header.version_major == SEAL_VERSION_MAJOR && header.version_minor == SEAL_VERSION_MINOR)
      |                                                                                       ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:8:47: error: stray ‘@’ in program
    8 | #define SEAL_VERSION_MINOR @SEAL_VERSION_MINOR@
      |                                               ^
seal/serialization.h:147:87: note: in expansion of macro ‘SEAL_VERSION_MINOR’
  147 |             if (header.version_major == SEAL_VERSION_MAJOR && header.version_minor == SEAL_VERSION_MINOR)
      |                                                                                       ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:28: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                            ^
seal/serialization.h:153:41: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
  153 |             if (header.version_major != SEAL_VERSION_MAJOR && header.version_major != 3)
      |                                         ^~~~~~~~~~~~~~~~~~
seal/util/config.h.in:7:47: error: stray ‘@’ in program
    7 | #define SEAL_VERSION_MAJOR @SEAL_VERSION_MAJOR@
      |                                               ^
seal/serialization.h:153:41: note: in expansion of macro ‘SEAL_VERSION_MAJOR’
  153 |             if (header.version_major != SEAL_VERSION_MAJOR && header.version_major != 3)
      |                                         ^~~~~~~~~~~~~~~~~~
In file included from seal/modulus.h:9,
                 from is_prime.cpp:3:
seal/util/hestdparms.h:6:10: fatal error: seal/util/defines.h: No such file or directory
    6 | #include "seal/util/defines.h"
      |          ^~~~~~~~~~~~~~~~~~~~~
compilation terminated.
