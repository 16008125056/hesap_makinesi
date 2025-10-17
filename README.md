# 🧮 Hesap Makinesi

Bu proje, C++ diliyle yazılmış basit bir hesap makinesidir.  
Kullanıcıdan iki sayı ve bir işlem türü (+, -, *, /) alır ve sonucu ekrana yazar.

## 🧩 Amaç
Program, toplama, çıkarma, çarpma ve bölme işlemlerini fonksiyonlar halinde gerçekleştirir.  
Her işlem için ayrı `.cpp` ve `.h` dosyaları kullanılarak kod düzenli bir şekilde yapılandırılmıştır.

## 👥 Ekip Çalışması
- **1. Kişi:** Toplama ve çıkarma fonksiyonlarını yazdı (`topla_cikar.cpp`, `topla_cikar.h`)
- **2. Kişi:** Çarpma ve bölme fonksiyonlarını yazdı (`carp_bol.cpp`, `carp_bol.h`)
- **Ana dosya:** `ana.cpp` → kullanıcıdan veri alır ve fonksiyonları çağırır.

## 🚀 Nasıl Çalıştırılır
1. Proje dosyalarını aynı klasöre koyun.  
2. C++ derleyicisiyle aşağıdaki komutu çalıştırın:
   ```bash
   g++ ana.cpp topla_cikar.cpp carp_bol.cpp -o hesap_makinesi
