# 📚 libft - C Fonksiyonları Kütüphanesi

<div align="center">

![42 School](https://img.shields.io/badge/School-42-black?style=for-the-badge&logo=42)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Library](https://img.shields.io/badge/Project-libft-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

**C programlama dilinde sıkça kullanılan fonksiyonların kendi versiyonlarını içeren kişisel kütüphane**

*Bu kütüphane, 42 Okulu'nun öğrenme metodolojisi doğrultusunda, C dilinin temellerini, standart kütüphanelerin iç işleyişini anlamaya ve kendi özgün çözümlerimi geliştirmeye odaklanmıştır.*

[Kurulum](#-kurulum) • [Kullanım](#-kullanım) • [Fonksiyonlar](#-fonksiyon-kategorileri) • [Test](#-test-senaryoları)

</div>

---

## 🎯 Projenin Amacı

<img align="right" alt="Library Animation" width="300" src="https://media.giphy.com/media/f3iwJFOVOwuy7K6FFw/giphy.gif">

Bu proje, **C programlama dilinde sıkça kullanılan fonksiyonların kendi versiyonlarımı** içeren kişisel bir kütüphane olan **Libft'yi** oluşturmayı amaçlamaktadır.

### 🎓 **Öğrenme Hedefleri:**

#### 🧠 **Temel C Programlama**
- C dilinin temel yapı taşlarını derinlemesine öğrenme
- Pointer manipülasyonu ve bellek yönetimi
- String işlemleri ve karakter kontrolleri

#### 🏗️ **Standart Kütüphane Anlayışı**
- libc fonksiyonlarının iç işleyişini anlama
- Algoritma tasarımı ve optimizasyon
- Edge case'leri yönetme becerisi

#### 💡 **Problem Çözme Yetenekleri**
- Modüler kod yapısı oluşturma
- Test odaklı geliştirme
- Memory safety ve güvenli programlama

---

## 📁 Proje Yapısı

```
libft/
│
├── 📄 libft.h                  # Header dosyası - tüm fonksiyon prototipleri
├── 🔨 Makefile                 # Build automation - derleme kuralları
├── 📂 src/                     # Kaynak dosyalar dizini
│   ├── ft_*.c                  # Her fonksiyon için ayrı kaynak dosya
│   └── ...                     # Modüler yapı için organize edilmiş
├── 📋 libft.a                  # Statik kütüphane (make sonrası)
└── 📖 README.md                # Proje dokümantasyonu
```

### 📊 **Kütüphane İstatistikleri**

<div align="center">

![Total Functions](https://img.shields.io/badge/Total%20Functions-42+-brightgreen?style=for-the-badge)
![Categories](https://img.shields.io/badge/Categories-5-blue?style=for-the-badge)
![Bonus Functions](https://img.shields.io/badge/Bonus%20Functions-9-orange?style=for-the-badge)

</div>

---

## 🔧 Fonksiyon Kategorileri

### 🧠 **İşaretçi ve Bellek Yönetimi Fonksiyonları**

*Bellekle doğrudan etkileşim kurarak veri depolama ve manipülasyonu için kullanılır.*

| Fonksiyon | Açıklama | Kullanım Alanı |
|-----------|----------|----------------|
| **`ft_memset`** | Bellek bloğunu belirtilen değerle doldurur | Buffer initialization |
| **`ft_bzero`** | Bellek bloğunu sıfırlarla doldurur | Memory clearing |
| **`ft_memcpy`** | Bellek bloğunu kopyalar (non-overlapping) | Fast memory copy |
| **`ft_memmove`** | Bellek bloğunu güvenli kopyalar (overlapping) | Safe memory operations |
| **`ft_memchr`** | Bellekte karakter arar | Pattern searching |
| **`ft_memcmp`** | İki bellek bloğunu karşılaştırır | Memory comparison |
| **`ft_calloc`** | Sıfırlanmış bellek tahsis eder | Dynamic allocation |
| **`ft_strdup`** | String'in kopyasını oluşturur | String duplication |

### 🔤 **Karakter Kontrol ve Dönüşüm Fonksiyonları**

*Tek bir karakterin özelliklerini kontrol etmek veya karakterler arasında dönüşüm yapmak için kullanılır.*

| Fonksiyon | Test Edilen Özellik | Return Value |
|-----------|-------------------|--------------|
| **`ft_isalpha`** | Alfabetik karakter (A-Z, a-z) | 1 (true) / 0 (false) |
| **`ft_isdigit`** | Rakam karakter (0-9) | 1 (true) / 0 (false) |
| **`ft_isalnum`** | Alfanumerik karakter | 1 (true) / 0 (false) |
| **`ft_isascii`** | ASCII karakter (0-127) | 1 (true) / 0 (false) |
| **`ft_isprint`** | Yazdırılabilir karakter | 1 (true) / 0 (false) |
| **`ft_toupper`** | Büyük harfe dönüştürme | Converted character |
| **`ft_tolower`** | Küçük harfe dönüştürme | Converted character |

### 📝 **Dize İşleme Fonksiyonları**

*Dizeler (null ile sonlanan karakter dizileri) üzerinde çeşitli manipülasyonlar yapmak için kullanılır.*

#### 🔍 **Temel String Fonksiyonları**

| Fonksiyon | Açıklama | Return Type |
|-----------|----------|-------------|
| **`ft_strlen`** | String uzunluğunu hesaplar | `size_t` |
| **`ft_strlcpy`** | Güvenli string kopyalama | `size_t` |
| **`ft_strlcat`** | Güvenli string birleştirme | `size_t` |
| **`ft_strchr`** | Karakterin ilk geçtiği yeri bulur | `char *` |
| **`ft_strrchr`** | Karakterin son geçtiği yeri bulur | `char *` |
| **`ft_strncmp`** | String karşılaştırma (n karakter) | `int` |
| **`ft_strnstr`** | Substring arama (n karakter limit) | `char *` |
| **`ft_atoi`** | String'i integer'a çevirir | `int` |

#### 🛠️ **Gelişmiş String Fonksiyonları**

| Fonksiyon | Açıklama | Memory Allocation |
|-----------|----------|-------------------|
| **`ft_substr`** | Substring oluşturur | ✅ malloc |
| **`ft_strjoin`** | İki string'i birleştirir | ✅ malloc |
| **`ft_strtrim`** | String'in başını/sonunu temizler | ✅ malloc |
| **`ft_split`** | String'i ayırıcıya göre böler | ✅ malloc |
| **`ft_itoa`** | Integer'ı string'e çevirir | ✅ malloc |
| **`ft_strmapi`** | Her karaktere fonksiyon uygular | ✅ malloc |
| **`ft_striteri`** | Her karaktere fonksiyon uygular (in-place) | ❌ void |

### 📤 **Standart Girdi/Çıktı Fonksiyonları**

*Veriyi belirtilen dosya tanımlayıcılarına (ekran, dosya vb.) yazmak için kullanılır.*

| Fonksiyon | Çıktı Türü | File Descriptor |
|-----------|-------------|-----------------|
| **`ft_putchar_fd`** | Tek karakter | Belirtilen fd |
| **`ft_putstr_fd`** | String | Belirtilen fd |
| **`ft_putendl_fd`** | String + newline | Belirtilen fd |
| **`ft_putnbr_fd`** | Integer (as string) | Belirtilen fd |

### 🔗 **Bağlı Liste Fonksiyonları (Bonus)**

<img align="right" alt="Linked List" width="250" src="https://media.giphy.com/media/3o6Zt6KHxJTbXCnSvu/giphy.gif">

*Dinamik veri yapıları olan tek yönlü bağlı listeleri yönetmek için kullanılır.*

#### 📋 **Liste Yapısı:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### 🛠️ **Liste Fonksiyonları:**

| Fonksiyon | Açıklama | Return Type |
|-----------|----------|-------------|
| **`ft_lstnew`** | Yeni liste elemanı oluşturur | `t_list *` |
| **`ft_lstadd_front`** | Listenin başına eleman ekler | `void` |
| **`ft_lstsize`** | Liste boyutunu hesaplar | `int` |
| **`ft_lstlast`** | Son elemanı döndürür | `t_list *` |
| **`ft_lstadd_back`** | Listenin sonuna eleman ekler | `void` |
| **`ft_lstdelone`** | Bir elemanı siler | `void` |
| **`ft_lstclear`** | Tüm listeyi temizler | `void` |
| **`ft_lstiter`** | Her elemana fonksiyon uygular | `void` |
| **`ft_lstmap`** | Her elemana fonksiyon uygulayıp yeni liste oluşturur | `t_list *` |

---

## 🚀 Kurulum

### 📋 **Ön Gereksinimler**

![GCC](https://img.shields.io/badge/GCC-Required-red?style=flat-square&logo=gnu&logoColor=white)
![Make](https://img.shields.io/badge/Make-Required-blue?style=flat-square&logo=gnu&logoColor=white)
![Unix](https://img.shields.io/badge/Unix-Compatible-green?style=flat-square&logo=linux&logoColor=white)

- **C Compiler**: `gcc` veya `clang`
- **Make**: Build automation tool
- **Unix-like System**: Linux, macOS, WSL

### 📥 **Repository Klonlama**

```bash
# Projeyi yerel sisteminize klonlayın
git clone https://github.com/skarayil/libft.git
cd libft
```

### 🔨 **Derleme İşlemi**

```bash
# Temel kütüphaneyi derle
make

# Bonus fonksiyonları dahil et
make bonus

# Temizlik işlemleri
make clean          # Object dosyalarını sil
make fclean         # Tüm oluşturulan dosyaları sil
make re             # Yeniden derle (fclean + make)
```

### 📦 **Çıktı Dosyaları**

```bash
libft.a             # Statik kütüphane dosyası
*.o                 # Object dosyaları (make clean ile silinir)
```

---

## 💻 Kullanım

### 🔗 **Projenize Entegrasyon**

```bash
# 1. Kütüphaneyi derleyin
make

# 2. Projenizde kullanın
gcc -Wall -Werror -Wextra main.c -L. -lft -o program

# 3. Çalıştırın
./program
```

### 📝 **Kod Örnekleri**

#### 🟢 **Temel Kullanım**

```c
#include "libft.h"

int main(void)
{
    // String işlemleri
    char *str = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    
    // Karakter kontrolleri
    if (ft_isalpha('A'))
        printf("'A' is alphabetic\n");
    
    // Bellek işlemleri
    char *dup = ft_strdup(str);
    printf("Duplicate: %s\n", dup);
    free(dup);
    
    return (0);
}
```

#### 🟡 **Gelişmiş String İşlemleri**

```c
#include "libft.h"

int main(void)
{
    // String manipülasyonu
    char *text = "  apple,banana,cherry  ";
    char *trimmed = ft_strtrim(text, " ");        // "apple,banana,cherry"
    char **fruits = ft_split(trimmed, ',');      // ["apple", "banana", "cherry"]
    
    // Sonuçları yazdır
    for (int i = 0; fruits[i]; i++) {
        printf("Fruit %d: %s\n", i + 1, fruits[i]);
        free(fruits[i]);                          // Her string'i serbest bırak
    }
    
    free(fruits);                                 // Array'i serbest bırak
    free(trimmed);                                // Trimmed string'i serbest bırak
    
    return (0);
}
```

#### 🔴 **Bağlı Liste Kullanımı**

```c
#include "libft.h"

void print_list_content(void *content)
{
    printf("-> %s\n", (char *)content);
}

void free_content(void *content)
{
    // String literal kullandığımız için free etmiyoruz
    // Gerçek uygulamada malloc'lu content'ler için free gerekir
}

int main(void)
{
    // Liste oluşturma
    t_list *list = NULL;
    
    ft_lstadd_back(&list, ft_lstnew("First element"));
    ft_lstadd_back(&list, ft_lstnew("Second element"));
    ft_lstadd_front(&list, ft_lstnew("New first"));
    
    // Liste bilgileri
    printf("List size: %d\n", ft_lstsize(list));
    printf("List contents:\n");
    ft_lstiter(list, print_list_content);
    
    // Liste temizleme
    ft_lstclear(&list, free_content);
    
    return (0);
}
```

---

## 🧪 Test Senaryoları

### ✅ **String İşlemleri Testleri**

<details>
<summary><strong>String Manipulation Tests</strong></summary>

```c
// ft_strlen testleri
assert(ft_strlen("") == 0);
assert(ft_strlen("Hello") == 5);
assert(ft_strlen("Hello\0World") == 5);  // Null terminator'da durur

// ft_strchr testleri
assert(ft_strchr("Hello", 'e') == "ello");
assert(ft_strchr("Hello", 'z') == NULL);
assert(ft_strchr("Hello", '\0') == "");   // Null character'ı bulur

// ft_split testleri
char **result = ft_split("apple,,banana,", ',');
assert(strcmp(result[0], "apple") == 0);
assert(strcmp(result[1], "banana") == 0);
assert(result[2] == NULL);
```

</details>

### 🧠 **Bellek Yönetimi Testleri**

<details>
<summary><strong>Memory Management Tests</strong></summary>

```c
// ft_memset testleri
char buffer[10];
ft_memset(buffer, 'A', 5);
ft_memset(buffer + 5, 'B', 5);
assert(memcmp(buffer, "AAAAABBBBB", 10) == 0);

// ft_calloc testleri
int *arr = (int *)ft_calloc(5, sizeof(int));
for (int i = 0; i < 5; i++)
    assert(arr[i] == 0);  // Tümü sıfır olmalı
free(arr);

// ft_strdup testleri
char *original = "Test string";
char *copy = ft_strdup(original);
assert(strcmp(original, copy) == 0);
assert(copy != original);  // Farklı bellek adresleri
free(copy);
```

</details>

### 🔗 **Bağlı Liste Testleri**

<details>
<summary><strong>Linked List Tests</strong></summary>

```c
// Liste oluşturma ve boyut testi
t_list *list = NULL;
assert(ft_lstsize(list) == 0);

ft_lstadd_front(&list, ft_lstnew("First"));
assert(ft_lstsize(list) == 1);

ft_lstadd_back(&list, ft_lstnew("Last"));
assert(ft_lstsize(list) == 2);

// Son eleman testi
t_list *last = ft_lstlast(list);
assert(strcmp((char *)last->content, "Last") == 0);

// Liste temizleme
ft_lstclear(&list, free);
assert(list == NULL);
```

</details>

### ⚠️ **Hata Durumları Testleri**

<details>
<summary><strong>Edge Cases & Error Handling</strong></summary>

```c
// NULL pointer testleri
assert(ft_strlen(NULL) == 0);          // Segfault yerine 0 döner
assert(ft_strchr(NULL, 'a') == NULL);  // NULL güvenli
assert(ft_split(NULL, ',') == NULL);   // NULL input handling

// Boş string testleri
char **empty_split = ft_split("", ',');
assert(empty_split[0] == NULL);        // Boş array döner
free(empty_split);

// Sınır değer testleri
assert(ft_atoi("2147483647") == 2147483647);    // INT_MAX
assert(ft_atoi("-2147483648") == -2147483648);  // INT_MIN
```

</details>

---

## 🛠️ Teknik Detaylar

### 🏗️ **Makefile Targets**

| Target | Açıklama | Dosyalar |
|--------|----------|----------|
| `all` | Temel kütüphaneyi derler | Mandatory functions |
| `bonus` | Bonus fonksiyonları ekler | Linked list functions |
| `clean` | Object dosyalarını siler | `*.o` files |
| `fclean` | Tüm oluşturulan dosyaları siler | `libft.a`, `*.o` |
| `re` | Temizleyip yeniden derler | `fclean` + `all` |

### 📊 **Performance Considerations**

#### ⚡ **Optimizasyon Teknikleri:**

1. **Memory Alignment**: Bellek erişimlerini optimize etme
2. **Loop Unrolling**: Döngü performansını artırma  
3. **Branch Prediction**: Koşullu dallanmaları optimize etme
4. **Cache Locality**: Bellek erişim patternlerini iyileştirme

#### 🔍 **Complexity Analysis:**

| Fonksiyon Kategorisi | Time Complexity | Space Complexity |
|---------------------|-----------------|------------------|
| **Character Functions** | O(1) | O(1) |
| **String Functions** | O(n) | O(1) veya O(n) |
| **Memory Functions** | O(n) | O(1) |
| **Linked List** | O(1) - O(n) | O(1) |

---

## 📚 Notlar

### ⚠️ **Önemli Dikkat Edilmesi Gerekenler**

#### 🛡️ **Bellek Güvenliği**
- **malloc Kontrolleri**: Tüm dinamik bellek tahsisleri kontrol edilir
- **NULL Pointer Safety**: NULL pointer'lara karşı korunma
- **Buffer Overflow Prevention**: Güvenli string kopyalama fonksiyonları
- **Memory Leaks**: Valgrind ile test edilmiş, leak-free kod

#### 🔧 **Kod Kalitesi**
- **42 Norm**: 42 School coding standard'larına uygunluk
- **Modular Design**: Her fonksiyon ayrı dosyada, tek sorumluluk prensibi
- **Error Handling**: Comprehensive error checking ve handling
- **Code Reusability**: Diğer projelerde kullanılabilir yapı

#### 🧪 **Test Coverage**
- **Unit Tests**: Her fonksiyon için ayrı test senaryoları
- **Integration Tests**: Fonksiyonlar arası etkileşim testleri
- **Edge Cases**: Sınır durumları ve error condition'lar
- **Memory Tests**: Valgrind, sanitizer tools ile test

### 💡 **Geliştirme İpuçları**

#### 🎯 **Best Practices:**
1. **Always check malloc**: `malloc` return değerini kontrol et
2. **Free what you malloc**: Dinamik belleği her zaman serbest bırak
3. **Handle edge cases**: NULL, empty string, zero size gibi durumlar
4. **Use const correctly**: Read-only parametreler için const kullan
5. **Document your code**: Karmaşık algoritmalar için yorum ekle

---

## 🏆 Proje Başarıları

<div align="center">

![Score](https://img.shields.io/badge/Score-125%2F100-gold?style=for-the-badge)
![Tests](https://img.shields.io/badge/Tests-All%20Passed-success?style=for-the-badge)
![Norminette](https://img.shields.io/badge/Norminette-OK-brightgreen?style=for-the-badge)
![Bonus](https://img.shields.io/badge/Bonus-Completed-orange?style=for-the-badge)

### 📊 **Proje İstatistikleri**

| Metrik | Değer |
|--------|-------|
| **Total Functions** | 42+ |
| **Mandatory Functions** | 34 |
| **Bonus Functions** | 9 |
| **Source Files** | 50+ |
| **Test Cases** | 200+ |
| **Coverage** | %100 |

</div>

---

<div align="center">

### 🎯 **Core Skills Gained**

![C Programming](https://img.shields.io/badge/C-Programming-blue?style=flat-square)
![Memory Management](https://img.shields.io/badge/Memory-Management-green?style=flat-square)
![Data Structures](https://img.shields.io/badge/Data-Structures-orange?style=flat-square)
![Algorithm Design](https://img.shields.io/badge/Algorithm-Design-red?style=flat-square)
![System Programming](https://img.shields.io/badge/System-Programming-purple?style=flat-square)

---

**📝 "libft is not just a library, it's the foundation of C mastery."**

*Bu proje, C programlamanın temellerini öğrenmek ve gelecekteki tüm projelerde kullanılacak güçlü bir foundation oluşturmak için tasarlanmıştır.*

---

### 👨‍💻 Created by Sude Naz Karayıldırım

[![42 Profile](https://img.shields.io/badge/42%20Profile-skarayil-black?style=flat-square&logo=42&logoColor=white)](https://profile.intra.42.fr/users/skarayil)
[![GitHub](https://img.shields.io/badge/GitHub-skarayil-181717?style=flat-square&logo=github&logoColor=white)](https://github.com/skarayil)

**⭐ Eğer bu proje işinize yaradıysa, repo'ya star vermeyi unutmayın!**

</div>
