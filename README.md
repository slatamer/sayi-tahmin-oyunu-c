# 🎲 Sayı Tahmin Oyunu (C) (Konsol Uygulaması)

Bu proje, C programlama dili kullanılarak geliştirilmiş eğlenceli bir sayı tahmin oyunudur. Bilgisayar tarafından rastgele üretilen 6 sayıyı doğru tahmin etmeye çalışırken puan toplarsınız.

## Öne Çıkan Özellikler
* **Giriş Doğrulama:** Kullanıcı 1-10 aralığı dışında veya sayı olmayan bir değer girdiğinde oyuncuya bir uyarı mesajı gösterilir.
* **Dinamik Skor:** Doğru tahmin edilen her sayı için `10^n` mantığıyla artan puanlama sistemi.
* **Görsel Deneyim:** Konsol renkleri ve temiz ekran (cls) yönetimi ile kullanıcı dostu arayüz.
* **Etkileşim:** conio.h kütüphanesi sayesinde _getch() fonksiyonu ile akıcı klavye kontrolü ve menü geçişleri.

## Teknik Detaylar
* **Dil:** C
* **IDE:** Visual Studio 2022
* **Konseptler:** Kontrol yapıları (do-while, if-else), döngüler, rastgele sayı üretimi (stdlib.h, time.h), matematiksel fonksiyonlar (math.h).
* 
## 🛠️ Nasıl Çalıştırılır?
1. .sln dosyasını bir C derleyicisi (Örn: Visual Studio, Dev-C++, GCC) kullanarak açın.
2. `main.c` dosyasını derleyin ve çalıştırın.
3. Uygulamayı çalıştırarak 1-10 arasındaki gizli sayıları tahmin etmeye başlayabilirsiniz.

## 📝 Notlar
Bu proje `conio.h` kütüphanesini kullandığı için Windows ortamında (Visual Studio vb.) çalıştırılmak üzere tasarlanmıştır.
