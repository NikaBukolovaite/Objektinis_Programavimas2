# 🛠️ Kompiliavimo instrukcijos

1. [Atsisiusti g++](https://sourceforge.net/projects/mingw-w64/)
2. [Atsisiusti Make](https://gnuwin32.sourceforge.net/packages/make.htm)
3. Kopijuoti projekto direktorija `git clone https://github.com/NikaBukolovaite/Objektinis_Programavimas.git` (arba Download zip)
4. Atsidaryti komandine eilute projekto direktorijoje ir irasyti: `make -C Vector ; make -C List ; make -C Deque`
5. Paleisti norima programos versija: `./Vector/vektoriai.exe`, `./List/list_main.exe` arba `./Deque/deque_main.exe`

# 📃 Programos naudojimosi instrukcijos

# Kompiuterio charakteristikos

| Komponentas |      Specifikacija      |
| :---------- | :---------------------: |
| CPU         | AMD Ryzen 5 4600H </br> |
| RAM         |     8GB DDR4 </br>      |
| DISK        |    SSD (NVMe) </br>     |

# Programos testavimo rezultatai pradiniam release

## 1000 Studentų analizė

Viso faile yra 18 namų darbų pažymių

### Nuskaitymas (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0072475 | 0.0082808 | 0.0145365 |
| 2 testas | 0.0044263 | 0.0043628 |  0.007807 |
| 3 testas | 0.0046425 | 0.0046128 | 0.0067956 |

### Rusiavimas faile (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas |  0.004638 | 0.0032458 | 0.0077588 |
| 2 testas | 0.0045471 | 0.0035307 | 0.0096666 |
| 3 testas | 0.0045742 | 0.0031883 | 0.0076848 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0006764 | 0.0004916 | 0.0007002 |
| 2 testas | 0.0006803 |   0.00069 | 0.0008425 |
| 3 testas | 0.0006776 | 0.0004679 | 0.0008806 |

### Vidurkiai (sek.):

|                                                           |   Vector |         List |      Deque |
| :-------------------------------------------------------- | -------: | -----------: | ---------: |
| Bendras failo nuskaitymo laikas                           | 0.016316 |     0.017256 |   0.029139 |
| Vidutinis failo nuskaitymo laikas                         | 0.005439 |     0.005752 |   0.009713 |
| Bendras failo rusiavimo laikas                            | 0.013759 |     0.009965 |   0.025110 |
| Vidutinis failo rusiavimo laikas                          | 0.002293 |     0.001661 |   0.004185 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.002034 |     0.001650 |   0.002423 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.000678 |     0.000550 |   0.000808 |
| Bendras programos veikimo laikas                          | 0.032109 |     0.028871 |   0,282662 |
| Vidutinis programos veikimo laikas                        | 0.010703 | 0.0096236667 | 0.09422066 |

## 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

### Nuskaitymas (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0452272 | 0.0787392 | 0.0722085 |
| 2 testas | 0.0491618 | 0.0706549 | 0.0647305 |
| 3 testas | 0.0396006 | 0.0719151 | 0.0690108 |

### Rusiavimas faile (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0064087 | 0.0836519 |  0.102892 |
| 2 testas | 0.0054171 |  0.083851 |   0.10707 |
| 3 testas |  0.006708 | 0.0902805 | 0.0987082 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0550808 | 0.0103057 | 0.0074288 |
| 2 testas | 0.0555215 | 0.0094287 | 0.0124954 |
| 3 testas | 0.0573123 | 0.0122553 |  0.007408 |

### Vidurkiai (sek.):

|                                                           |   Vector |         List |      Deque |
| :-------------------------------------------------------- | -------: | -----------: | ---------: |
| Bendras failo nuskaitymo laikas                           | 0.133990 |     0.221309 |   0.205950 |
| Vidutinis failo nuskaitymo laikas                         | 0.044663 |     0.073770 |   0.068650 |
| Bendras failo rusiavimo laikas                            | 0.167915 |     0.257783 |   0.308670 |
| Vidutinis failo rusiavimo laikas                          | 0.027986 |     0.042964 |   0.051445 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.018534 |     0.031990 |   0.027332 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.006178 |     0.010663 |   0.009111 |
| Bendras programos veikimo laikas                          | 0.320439 |     0.511082 |   0.541952 |
| Vidutinis programos veikimo laikas                        | 0.106813 | 0.1703606667 | 0.18065066 |

## 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

### Nuskaitymas (sek.):

|          |   Vector |     List |    Deque |
| :------- | -------: | -------: | -------: |
| 1 testas | 0.333077 | 0.577193 | 0.530389 |
| 2 testas | 0.321548 | 0.613278 | 0.533229 |
| 3 testas | 0.325427 | 0.586978 | 0.537504 |

### Rusiavimas faile (sek.):

|          |   Vector |    List |   Deque |
| :------- | -------: | ------: | ------: |
| 1 testas | 0.673029 |  1.0759 | 1.31066 |
| 2 testas | 0.680436 | 1.07855 | 1.26595 |
| 3 testas | 0.678414 | 1.08067 | 1.28526 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0569962 | 0.0931008 | 0.0756288 |
| 2 testas | 0.0575559 |   0.10202 | 0.0733271 |
| 3 testas | 0.0557648 | 0.0904348 | 0.0774862 |

### Vidurkiai (sek.):

|                                                           |   Vector |      List |     Deque |
| :-------------------------------------------------------- | -------: | --------: | --------: |
| Bendras failo nuskaitymo laikas                           | 0.980052 |  1.777449 |  1.601122 |
| Vidutinis failo nuskaitymo laikas                         | 0.326684 |  0.592483 |  0.533707 |
| Bendras failo rusiavimo laikas                            | 2.031878 |  3.235127 |  3.861866 |
| Vidutinis failo rusiavimo laikas                          | 0.338646 |  0.539188 |  0.643644 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.170317 |  0.285555 |  0.226442 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.056772 |  0.095185 |  0.075481 |
| Bendras programos veikimo laikas                          | 3.182247 |  5.298131 |   5.68943 |
| Vidutinis programos veikimo laikas                        | 1.060749 | 1.7660436 | 1.8967466 |

## 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

### Nuskaitymas (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 3.95492 | 7.15517 | 6.40691 |
| 2 testas | 3.87019 |  6.7632 | 6.42821 |
| 3 testas | 3.84463 | 6.80788 | 6.49617 |

### Rusiavimas faile (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 9.88418 | 13.6062 | 14.4732 |
| 2 testas |  9.8109 | 12.9613 | 14.8146 |
| 3 testas | 9.82957 | 12.8813 | 14.3128 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |   Vector |     List |    Deque |
| :------- | -------: | -------: | -------: |
| 1 testas | 0.574952 | 0.919172 |  0.90257 |
| 2 testas | 0.574212 | 0.953543 | 0.921527 |
| 3 testas | 0.574577 |  1.02545 | 0.940349 |

### Vidurkiai (sek.):

|                                                           |        Vector |        List |       Deque |
| :-------------------------------------------------------- | ------------: | ----------: | ----------: |
| Bendras failo nuskaitymo laikas                           |     11.669734 |   20.726261 |   19.331293 |
| Vidutinis failo nuskaitymo laikas                         |      3.889911 |    6.908754 |    6.443764 |
| Bendras failo rusiavimo laikas                            |     29.524652 |   39.448779 |   43.600653 |
| Vidutinis failo rusiavimo laikas                          |      4.920775 |    6.574797 |    7.266776 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   |      1.723741 |    2.898165 |    2.764446 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas |      0.574580 |    0.966055 |    0.921482 |
| Bendras programos veikimo laikas                          |     42.918127 |   63.073205 |   65.696392 |
| Vidutinis programos veikimo laikas                        | 14.3060423333 | 21.02440166 | 21.89879733 |

## 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

### Nuskaitymas (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 44.5152 | 55.7881 | 45.5688 |
| 2 testas | 43.9039 |  45.815 | 45.0055 |
| 3 testas | 41.9285 | 46.5904 | 50.5224 |

### Rusiavimas faile (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 119.483 | 115.353 | 130.304 |
| 2 testas | 119.413 | 115.038 | 128.954 |
| 3 testas | 119.039 |  115.01 | 129.462 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 6.28305 | 11.1458 | 8.20431 |
| 2 testas | 6.71133 | 10.1772 | 8.78032 |
| 3 testas | 6.47369 | 9.98839 | 8.81014 |

### Vidurkiai (sek.):

|                                                           |     Vector |       List |        Deque |
| :-------------------------------------------------------- | ---------: | ---------: | -----------: |
| Bendras failo nuskaitymo laikas                           | 130.347577 | 148.193507 |   141.096647 |
| Vidutinis failo nuskaitymo laikas                         |  43.449192 |  49.397836 |    47.032216 |
| Bendras failo rusiavimo laikas                            | 357.935381 | 345.401288 |   388.718866 |
| Vidutinis failo rusiavimo laikas                          |  59.655897 |  57.566881 |    64.786478 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   |  19.468074 |  31.311419 |    25.794769 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas |   6.489358 |  10.437140 |     8.598256 |
| Bendras programos veikimo laikas                          | 507.751032 | 524.906214 |   555.610282 |
| Vidutinis programos veikimo laikas                        | 169.250344 | 174.968738 | 185.20342733 |

# Programos rusiavimo i kietekus ir vargsiukus greitis priklausomai nuo strategiju rezultatai

## 1 strategija

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |    15.166 |   12.4339 |   12.5972 |
| 2 testas         |   14.1786 |   13.1281 |   11.9944 |
| 3 testas         |   13.9391 |   13.1281 |    11.968 |
| Bendras laikas   | 43.283757 | 39.586256 | 36.559604 |
| Vidutinis laikas | 14.427919 | 13.195419 | 12.186535 |

## 2 strategija

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |   25.9085 |   26.6098 |   29.7575 |
| 2 testas         |   26.4085 |   22.6966 |   29.5761 |
| 3 testas         |   29.7513 |    23.138 |   30.6643 |
| Bendras laikas   | 82.068295 | 72.444385 | 89.997919 |
| Vidutinis laikas | 27.356098 | 24.148128 | 29.999306 |

## 3 strategija

Pagal 1 strategija naudojant std::stable_partition

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |  Vector |   List |  Deque |
| :--------------- | ------: | -----: | -----: |
| 1 testas         |   60000 |  10001 |   8000 |
| 2 testas         |    6133 |  11772 | 878032 |
| 3 testas         |  647369 | 998839 | 881014 |
| Bendras laikas   | 0000000 |   0000 |    000 |
| Vidutinis laikas | 0000000 |   0000 |    000 |

# 5 failų kūrimas

![imagine alt](https://github.com/NikaBukolovaite/Objektinis_Programavimas/blob/a4013df6d9d8fbc7987f3f46eff7fbc55adf39d2/Kurimo%20laikas.png)
