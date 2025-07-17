# libft - C Fonksiyonları Kütüphanesi

**Bu proje, C programlama dilinde sıkça kullanılan fonksiyonların kendi versiyonlarımı içeren kişisel bir kütüphane olan Libft'yi oluşturmayı amaçlamaktadır. Bu kütüphane, 42 Okulu'nun öğrenme metodolojisi doğrultusunda, C dilinin temellerini, standart kütüphanelerin iç işleyişini anlamaya ve kendi özgün çözümlerimi geliştirmeye odaklanmıştır.**

## Proje Yapısı

*  **libft.h:** Kütüphanede bulunan tüm fonksiyonların prototiplerini içeren başlık dosyası.

*  **Makefile:** Kütüphaneyi derlemek ve proje dosyalarını temizlemek için kullanılan makefile dosyası.

*  **src/:** Kütüphanenin tüm .c kaynak dosyalarını içeren dizin. Her fonksiyonun ayrı bir .c dosyası bulunur, bu da modülerliği ve okunabilirliği artırır.

*  **Fonksiyonlar:**
Libft kütüphanesi, çeşitli kategorilere ayrılmış kapsamlı bir fonksiyon setini içermektedir:

## **İşaretçi ve Bellek Yönetimi Fonksiyonları**
**Bu fonksiyonlar, bellekle doğrudan etkileşim kurarak veri depolama ve manipülasyonu için kullanılır.**

*   `ft_memset`: Belirli bir bellek bloğunu, belirtilen bir değerle doldurur. Genellikle bir belleği başlatmak veya sıfırlamak için kullanılır.

*  `ft_bzero`: Belirli bir bellek bloğunu tamamen sıfırlarla doldurur. ft_memset(ptr, 0, size) ile benzer bir işlevi vardır.

*  `ft_memcpy`: Bir kaynak bellek bloğundaki veriyi, belirtilen hedef bellek bloğuna kopyalar. Kaynak ve hedef bellek bölgeleri çakışmıyorsa güvenle kullanılır.

*  `ft_memcpy`: Kaynak bellek bloğundan hedef bellek bloğuna veri kopyalar. Kopyalama işlemi, belirli bir karakterle karşılaşana kadar veya belirtilen boyut kadar devam eder.

*  `ft_memmove`: Bir kaynak bellek bloğundaki veriyi, belirtilen hedef bellek bloğuna kopyalar. ft_memcpy'den farklı olarak, kaynak ve hedef bellek bölgeleri çakışsa bile güvenli bir şekilde çalışır.

*  `ft_memchr`: Belirli bir bellek bloğunun içinde, verilen bir karakteri arar ve bu karakterin ilk geçtiği yere bir işaretçi döndürür.

*  `ft_memcmp`: İki bellek bloğunu byte byte karşılaştırır ve aralarındaki farkı (ilk farklı byte'ın değer farkını) döndürür. Eşitlerse 0 döner.

*  `ft_calloc`: Belirtilen sayıda ve boyutta bellek tahsis eder ve tahsis edilen tüm belleği sıfırlarla doldurur. Genellikle diziler için kullanılır.

*  `ft_strdup`: Verilen bir dizenin (string) tam bir kopyasını oluşturur ve bu yeni kopyanın başlangıcına bir işaretçi döndürür. Yeni bellek alanı malloc ile tahsis edilir.

## **Karakter Kontrol ve Dönüşüm Fonksiyonları**
**Bu fonksiyonlar, tek bir karakterin özelliklerini kontrol etmek veya karakterler arasında dönüşüm yapmak için kullanılır.**

*  `ft_isalpha`: Verilen karakterin alfabetik (A-Z veya a-z) olup olmadığını kontrol eder.

*  `ft_isdigit`: Verilen karakterin rakam (0-9) olup olmadığını kontrol eder.

*  `ft_isalnum`: Verilen karakterin alfabetik veya rakam olup olmadığını kontrol eder.

*  `ft_isascii`: Verilen karakterin ASCII karakter kümesinde (0-127 arası) olup olmadığını kontrol eder.

*  `ft_isprint`: Verilen karakterin yazdırılabilir (boşluk dahil) olup olmadığını kontrol eder.

*  `ft_toupper`: Verilen karakteri büyük harfe dönüştürür. Eğer zaten büyük harfse veya alfabetik değilse karakteri değiştirmez.

*  `ft_tolower`: Verilen karakteri küçük harfe dönüştürür. Eğer zaten küçük harfse veya alfabetik değilse karakteri değiştirmez.

## **Dize İşleme Fonksiyonları**
**Bu fonksiyonlar, dizeler (null ile sonlanan karakter dizileri) üzerinde çeşitli manipülasyonlar yapmak için kullanılır.**

*  `ft_strlen`: Verilen bir dizenin uzunluğunu (null karakter hariç) hesaplar ve döndürür.

*  `ft_strlcpy`: Bir kaynak dizenin kopyasını güvenli bir şekilde hedef arabelleğe kopyalar ve kopyalanan dizenin toplam uzunluğunu döndürür. Hedef arabelleğin taşmasını engeller.

*  `ft_strlcat`: Bir kaynak dizeni güvenli bir şekilde hedef arabelleğin sonuna ekler (birleştirir) ve oluşan dizenin toplam uzunluğunu döndürür. Hedef arabelleğin taşmasını engeller.

*  `ft_strchr`: Bir dize içinde, belirtilen bir karakterin ilk geçtiği yeri arar ve o yere bir işaretçi döndürür.

*  `ft_strrchr`: Bir dize içinde, belirtilen bir karakterin son geçtiği yeri arar ve o yere bir işaretçi döndürür.

*  `ft_strncmp`: İki diziyi, belirtilen maksimum bir uzunluğa kadar veya null karakterle karşılaşana kadar karşılaştırır.

*  `ft_strnstr`: Bir büyük dize içinde, başka bir küçük dizenin ilk geçtiği yeri belirli bir maksimum uzunluğa kadar arar. Eğer bulunursa, bulunduğu yere bir işaretçi döndürür.

*  `ft_atoi`: Bir dizeyi (string) tam sayıya (integer) dönüştürür. Dizenin başında boşluklar, işaretler (+/-) ve rakamlar olabilir.

*  `ft_substr`: Verilen bir dizenin belirli bir başlangıç noktasından itibaren, belirtilen uzunlukta bir alt dizesini (substring) oluşturur ve bu yeni alt dizenin işaretçisini döndürür.

*  `ft_strjoin`: İki diziyi (string) birleştirerek yeni bir dize oluşturur ve bu yeni dizenin işaretçisini döndürür. Yeni bellek alanı tahsis edilir.

*  `ft_strtrim`: Bir dizenin başından ve sonundan, belirtilen bir karakter kümesinden herhangi bir karakteri temizler ve ortaya çıkan yeni dizenin işaretçisini döndürür.

*  `ft_split`: Bir dizeyi, belirtilen bir ayırıcı karaktere göre bölerek alt dizelerden oluşan bir dize dizisi (array of strings) döndürür. Bölünen her alt dize için ayrı bellek tahsis edilir.

*  `ft_itoa`: Bir tam sayıyı (integer) temsil eden dizeye (string) dönüştürür ve bu yeni dizenin işaretçisini döndürür. Yeni bellek alanı tahsis edilir.

*  `ft_strmapi`: Bir dizenin her karakterine, verilen bir fonksiyonu uygulayarak yeni bir dize oluşturur ve bu yeni dizenin işaretçisini döndürür. Fonksiyon, her karakteri ve indeksini alır.

*  `ft_striteri`: Bir dizenin her karakterine, verilen bir fonksiyonu uygular. Bu fonksiyon, dizeyi yerinde değiştirir ve herhangi bir değer döndürmez.

## **Standart Girdi/Çıktı Fonksiyonları**
**Bu fonksiyonlar, veriyi belirtilen dosya tanımlayıcılarına (ekran, dosya vb.) yazmak için kullanılır.**

*  `ft_putchar_fd`: Tek bir karakteri, belirtilen dosya tanımlayıcısına yazar.

*  `ft_putstr_fd`: Bir dizeyi, belirtilen dosya tanımlayıcısına yazar.

*  `ft_putendl_fd`: Bir dizeyi ve ardından bir yeni satır (\n) karakterini, belirtilen dosya tanımlayıcısına yazar.

*  `ft_putnbr_fd`: Bir tam sayıyı, belirtilen dosya tanımlayıcısına (dize olarak) yazar.

## **Bağlı Liste Fonksiyonları (Bonus Kısım)**
**Bu fonksiyonlar, dinamik veri yapıları olan tek yönlü bağlı listeleri yönetmek için kullanılır.**

*  `ft_lstnew`: Belirtilen içeriğe sahip yeni bir bağlı liste elemanı (node) oluşturur ve bu elemanın işaretçisini döndürür.

*  `ft_lstadd_front`: Yeni bir liste elemanını, belirtilen listenin başına ekler.

*  `ft_lstsize`: Belirtilen bir bağlı listenin toplam eleman sayısını (boyutunu) hesaplar ve döndürür.

*  `ft_lstlast`: Belirtilen bir bağlı listenin son elemanının işaretçisini döndürür.

*  `ft_lstadd_back`: Yeni bir liste elemanını, belirtilen listenin sonuna ekler.

*  `ft_lstdelone`: Belirli bir liste elemanını (node) ve içerdiği hafızayı silerek serbest bırakır.

*  `ft_lstclear`: Belirtilen bir bağlı listenin tüm elemanlarını (node'larını) ve bu elemanların içerdiği hafızayı silerek serbest bırakır. Listenin tamamını boşaltır.

*  `ft_lstiter`: Bir bağlı listenin her elemanına, verilen bir fonksiyonu uygular. Bu fonksiyon genellikle elemanların içeriği üzerinde bir işlem yapmak için kullanılır.

*  `ft_lstmap`: Bir bağlı listenin her elemanına, verilen bir fonksiyonu uygular ve bu fonksiyonun döndürdüğü değerlerle yeni bir bağlı liste oluşturur. Yeni liste için bellek tahsis edilir.


## Kurulum

Projeyi yerel sisteminize klonlamak için aşağıdaki komutu kullanabilirsiniz:

```bash
git clone https://github.com/skarayil/libft.git
```

## Gerekli Bağımlılıklar

Projeyi derlemek için C derleyicisi (cc) gereklidir.

## Kullanım

Kitaplık `make` komutu ile derledikten sonra oluşan `libft.a` dosyasını projenize bağlayarak, `libft.h` başlık dosyasını main fonksiyonuna ekledikten sonra, Libft fonksiyonlarını kullanabilirsiniz.

```c
#include "libft.h"

int main()
{
    t_list *list;
    list = ft_lstnew("ilk eleman");  // Yeni bir liste elemanı oluşturuluyor
    ft_lstadd_front(&list, ft_lstnew("önceki eleman"));  // Listenin başına yeni eleman ekleniyor
    ft_putstr(list->content);  // Listenin ilk elemanının içeriğini yazdırma
    return 0;
}
```

## Test Senaryoları

*    **String İşlemleri:**
  ft_strlen, ft_strcpy, ft_strcat gibi fonksiyonlar ile string manipülasyonları doğrulanır.

*    **Bellek Yönetimi:**
  malloc ve free fonksiyonları ile bellek yönetimi yapılır ve bellek sızıntıları test edilir.

*    **Bağlı Liste İşlemleri:**
  Bağlı liste fonksiyonları (ft_lstnew, ft_lstadd_front, ft_lstsize) test edilir.

*    **Hata Durumları:**
  Hatalı bellek erişimleri veya geçersiz verilerle fonksiyonlar test edilerek doğru hata yönetimi sağlanır.

## Notlar

*    **Libft fonksiyonları:**
  C dilindeki temel string ve bellek işlemleri için yardımcı araçlardır.

*    **Bağlı Liste Fonksiyonları (Bonus):**
  bağlı listelerle ilgili fonksiyonlar yer almaktadır. Bu fonksiyonlar dinamik veri yapılarının yönetilmesi için kullanılır.

---

### Created by Sude Naz Karayıldırım
