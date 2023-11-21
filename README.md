﻿# В++

Веди крестъ крестъ - великій языкъ программированія древнихъ Русовъ.

### Особенности

В отличие от других реализаций стандарта В++, в этой использование препроцессора сведено к минимуму, то есть `#define` используется лишь
при абсолютной необходимости, в основном для ключевых слов.

Базовые типы данных определены с помощью `using`, константы - с помощью `constexpr`. Однако, возникает проблема с классами из стандартной библиотеки:
даже после переименования через `using` или `typedef` их методы будут иметь те же англоязычные названия. Это было решено с помощью приватного наследования
(например, [в коде строки](https://github.com/n-dub/slavic-cpp/blob/main/%D0%92%D0%B5%D0%B4%D0%B8%D0%9A%D1%80%D0%B5%D1%81%D1%82%D0%9A%D1%80%D0%B5%D1%81%D1%82/%D0%A1%D1%82%D1%80%D0%BE%D0%BA%D0%B0.hpp)).

### Пример кода

```cpp
#include <Языкъ.h>
#include <Потокъ.h>
#include <Строка.h>

целое32 царь_батюшка_главный()
{
    вперёдъ_славяне;
    Русь::строка строченька = "Славься Русь!";
    Русь::молвить << строченька << Русь::прыгъ_скокъ;
    воздать Перуну_Отцу_Всего_Сущего;
}

```
