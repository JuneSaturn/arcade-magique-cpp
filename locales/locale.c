#include <stddef.h>
#include "locale.h"

extern const char *const en_CA[TEXT_COUNT];
extern const char *const en_GB[TEXT_COUNT];
extern const char *const en_US[TEXT_COUNT];
extern const char *const fr_CA[TEXT_COUNT];
extern const char *const fr_FR[TEXT_COUNT];
extern const char *const ja_JP[TEXT_COUNT];
extern const char *const ko_KR[TEXT_COUNT];

const char *locale_get(Locale locale, TextId id) {
    if (locale >= LOCALE_COUNT || id >= TEXT_COUNT)
        return NULL;

    switch (locale) {
        case EN_CA:
            return en_CA[id];

        case EN_GB:
            return en_GB[id];

        case EN_US:
            return en_US[id];

        case FR_CA:
            return fr_CA[id];

        case FR_FR:
            return fr_FR[id];

        case JA_JP:
            return ja_JP[id];

        case KO_KR:
            return ko_KR[id];

        default:
            return NULL;
    }
}