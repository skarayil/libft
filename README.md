**Libft: Kendime Özel C Kütüphanesi**

Bu proje, C programlama dilinde sıkça kullanılan fonksiyonların kendi versiyonlarımı içeren kişisel bir kütüphane olan Libft'yi oluşturmayı amaçlamaktadır. Bu kütüphane, 42 Okulu'nun öğrenme metodolojisi doğrultusunda, C dilinin temellerini, standart kütüphanelerin iç işleyişini anlamaya ve kendi özgün çözümlerimi geliştirmeye odaklanmıştır.

**Proje Yapısı**
Libft kütüphanesi aşağıdaki temel dosya ve dizin yapısına sahiptir:

**libft.h:** Kütüphanede bulunan tüm fonksiyonların prototiplerini içeren başlık dosyası.

**Makefile:** Kütüphaneyi derlemek ve proje dosyalarını temizlemek için kullanılan makefile dosyası.

**src/:** Kütüphanenin tüm .c kaynak dosyalarını içeren dizin. Her fonksiyonun ayrı bir .c dosyası bulunur, bu da modülerliği ve okunabilirliği artırır.

**Fonksiyonlar**
Libft kütüphanesi, çeşitli kategorilere ayrılmış kapsamlı bir fonksiyon setini içermektedir:

**İşaretçi ve Bellek Yönetimi Fonksiyonları:**

ft_memset, ft_bzero, ft_memcpy, ft_memccpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ft_strdup

**Karakter Kontrol ve Dönüşüm Fonksiyonları:**

ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower

**Dize İşleme Fonksiyonları:**

ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_atoi, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri

**Standart Girdi/Çıktı Fonksiyonları:**

ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

**Bağlı Liste Fonksiyonları (Bonus Kısım):**

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
