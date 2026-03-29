*This project has been created as part of the 42 curriculum by mehozer.*
## Description
ft_printf, C dilindeki standart printf fonksiyonunun yeniden implementasyonudur.
Bu proje, variadic fonksiyonlar, format specifier mantığı, hexadecimal dönüşüm, pointer gösterimi ve output kontrolü gibi düşük seviye C konularını derinlemesine anlamayı amaçlar.

Proje kapsamında aşağıdaki formatlar desteklenmektedir:
```
%c → karakter

%s → string

%p → pointer adresi

%d / %i → decimal integer

%u → unsigned integer

%x / %X → hexadecimal integer

%% → yüzde karakteri
```
Fonksiyon, yazdırılan toplam karakter sayısını int olarak döndürür.
### Variadic Functions (va_list)

ft_printf fonksiyonu değişken sayıda argüman alabilen bir variadic fonksiyondur.
Bu nedenle stdarg.h kütüphanesinde bulunan va_list, va_start, va_arg ve va_end makroları kullanılır.

Bu yapı sayesinde fonksiyona gönderilen ek parametreler sırayla okunabilir.
Format string içerisinde bulunan format specifier’lar (%d, %s, %x vb.) kontrol edilerek, ilgili veri tipi va_arg ile alınır ve uygun şekilde yazdırılır.

Bu mekanizma printf fonksiyonunun farklı veri tiplerini tek bir fonksiyon üzerinden işleyebilmesini sağlar.
## Instructions
#### Compilation
```
make
```
Bu komut libftprintf.a statik kütüphanesini oluşturur.
#### Clean
```
make clean
```
Object dosyalarını siler.
```
make fclean
```
Object dosyaları ve kütüphaneyi siler.
### 🛠 Usage Example
```
#include "ft_printf.h"

int main()
{
    ft_printf("Merhaba %s\n", "Dünya");
    return (0);
}
```
Derlemek için:
```
cc main.c libftprintf.a
```
## Resources
man printf ve man stdarg

C dilinde variadic fonksiyonlar üzerine teknik dokümanlar

Hexadecimal sayı sistemi hakkında akademik ve teknik kaynaklar

Pointer ve bellek yapısı üzerine makaleler

YouTube üzerinde C programlama ve printf implementasyonu üzerine eğitim videoları
## AI Usage

Proje geliştirme sürecinde yapay zekâ araçlarından kod üretimi yapılmadan yararlanılmıştır.

Yapay zekâ şu amaçlarla kullanılmıştır:

Kavramsal konuları daha iyi anlamak

Hata mesajlarını yorumlamak

Dokümantasyon ve README hazırlamak

Öğrenme sürecini destekleyici açıklamalar almak

Tüm kod yazımı ve algoritma tasarımı manuel olarak gerçekleştirilmiştir.
